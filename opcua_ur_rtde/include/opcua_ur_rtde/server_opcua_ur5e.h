#ifdef __cplusplus
extern "C" {
#endif

void start_opcua_server();
void update_ur5e_state(
    const double joint_positions[6],
    const double joint_speeds[6],
    const double joint_currents[6],
    const double joint_temperatures[6],
    const double tcp_pose[6],
    const double tcp_speed[6],
    const double tcp_force[6]
);
#ifdef __cplusplus
}
#endif
