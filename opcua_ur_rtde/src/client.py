import sys
from opcua import Client
import time

# Default URL
DEFAULT_URL = "opc.tcp://localhost:4840"

# Use command-line argument if provided, otherwise fallback to default
url = sys.argv[1] if len(sys.argv) > 1 else DEFAULT_URL

print(f"Connecting to OPC UA server at: {url}")
client = Client(url)
client.secure_channel_timeout = 600000
client.uaclient._skip_endpoint_check = True
client.connect()
print(f"Connected to OPC UA server at {url}")

try:
    root = client.get_root_node()
    objects = client.get_objects_node()
    ur5e = objects.get_child(["1:UR5e"])
    joints = ur5e.get_child(["1:Joints"])
    tcp = ur5e.get_child(["1:TCP"])

    joint_names = ["base", "shoulder", "elbow", "wrist1", "wrist2", "wrist3"]

    while True:
        print("\n--- UR5e Robot State ---")
        for joint in joint_names:
            joint_node = joints.get_child([f"1:{joint}"])
            pos = joint_node.get_child(["1:Position"]).get_value()
            vel = joint_node.get_child(["1:Velocity"]).get_value()
            cur = joint_node.get_child(["1:Current"]).get_value()
            temp = joint_node.get_child(["1:Temperature"]).get_value()
            print(f"{joint:8} | Pos: {pos:6.2f} | Vel: {vel:6.2f} | Curr: {cur:6.2f} | Temp: {temp:6.2f}")

        tcp_pose = tcp.get_child(["1:Pose"]).get_value()
        tcp_speed = tcp.get_child(["1:Speed"]).get_value()
        tcp_force = tcp.get_child(["1:Force"]).get_value()

        print("\nTCP Pose:  ", [round(v, 2) for v in tcp_pose])
        print("TCP Speed: ", [round(v, 2) for v in tcp_speed])
        print("TCP Force: ", [round(v, 2) for v in tcp_force])

        time.sleep(1)

except KeyboardInterrupt:
    print("\nStopped by user.")

finally:
    client.disconnect()
    print("Disconnected from server.")
