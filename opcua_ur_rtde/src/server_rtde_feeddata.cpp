#include <ur_rtde/rtde_receive_interface.h>
#include "opcua_ur_rtde/server_opcua_ur5e.h"
#include <chrono>
#include <thread>
#include<iostream>

extern "C" {
    #include "opcua_ur_rtde/open62541.h"
}
extern UA_NodeId robotId;  // Declare global robotId

bool isNodeIdValid(const UA_NodeId &nodeId) {
    return nodeId.identifierType == UA_NODEIDTYPE_NUMERIC && nodeId.identifier.numeric != 0;
}
int main() {
   
    double pos[6]   = {1, 2, 3, 4, 5, 6};
    double vel[6]   = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6};
    double cur[6]   = {0.5, 0.5, 0.5, 0.5, 0.5, 0.5};
    double temp[6]  = {36, 36, 36, 36, 36, 36};
    double pose[6]  = {0, 0, 0.5, 0, 1, 0};
    double speed[6] = {0.01, 0.01, 0, 0, 0, 0};
    double force[6] = {10, 10, 10, 0, 0, 0};

    start_opcua_server();

    std::cout << "Waiting for server and robot model to initialize...\n";
    while (!isNodeIdValid(robotId)) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    std::cout << "Server and robot are ready. Starting updates...\n";


    ur_rtde::RTDEReceiveInterface rtde_receive("192.168.0.100");
    std::vector<double> joints_position = rtde_receive.getActualQ();
    std::vector<double> joints_velocity = rtde_receive.getActualQd();
    std::vector<double> joints_current  = rtde_receive.getActualCurrent();
    std::vector<double> joints_temperature  = rtde_receive.getJointTemperatures();
    std::vector<double> tcp_pose  = rtde_receive.getActualTCPPose();
    std::vector<double> tcp_speed  = rtde_receive.getActualTCPSpeed();
    std::vector<double> tcp_force  = rtde_receive.getActualTCPForce();
    std::cout << "robot data has been recieved...\n";

    while (true){

        joints_position      = rtde_receive.getActualQ();
        joints_velocity      = rtde_receive.getActualQd();
        joints_current       = rtde_receive.getActualCurrent();
        joints_temperature   = rtde_receive.getJointTemperatures();
        tcp_pose             = rtde_receive.getActualTCPPose();
        tcp_speed            = rtde_receive.getActualTCPSpeed();
        tcp_force            = rtde_receive.getActualTCPForce();
       
        update_ur5e_state(
            
            joints_position.data(),
            joints_velocity.data(),
            joints_current.data(),
            joints_temperature.data(), 
            tcp_pose.data(),
            tcp_speed.data(),
            tcp_force.data()
        );


        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        

    }
    
    return 0;
}


