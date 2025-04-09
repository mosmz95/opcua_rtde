# opcua_rtde
This repository creates an OPC-UA server to share data of UR5e robot. The information model of the robot has been created and data of robot has been fed to the server through Real Time Data Echange (RTDE) library of Universal Robot.

The information model of robot can be written either (i)directly, using the tutorial provided by [Open62541 implementaion in C99](https://www.open62541.org/doc/v1.4.10/tutorial_server_object.html), you can find the ur5e model in robottyp.h or (ii) writing the information model in the xml format and then using an compiler to generate the nodeset2.xml format which can be used by the server. Below the steps to compile the robotmodel.xml have been introduced.



The writing of robotmodel.xml is adapted based on this [tutorial]( https://profanter.medium.com/how-to-create-custom-opc-ua-information-models-1e9a461f5b58).

In addition to compile robotmodel the official OPC Foundation UA-ModelCompiler has been used, you can download the docker file from here https://hub.docker.com/r/sailavid/ua-modelcompiler , then 

go to the 'configs' directory
```bash
cd opcua_ur_rtde/configs
```
and run 
```bash
sudo docker run \
	  --mount type=bind,source=$(pwd),target=/model/src \
	  --entrypoint "/app/PublishModel.sh" \
	  sailavid/ua-modelcompiler:opcua_rocks_tested \
	   /model/src/robotmodel robot /model/src/Published
```
Therefore, the correspong nodeset2.xml has been generated and can be used to run your opcua server using opcua62541. 
