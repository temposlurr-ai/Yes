# Simple Python Robot Control (2026)
from gpiozero import Robot
from time import sleep

# Define pins for Left (forward, back) and Right (forward, back)
robot = Robot(left=(7, 8), right=(9, 10))

print("Robot moving forward...")
robot.forward()
sleep(2)

print("Robot turning right...")
robot.right()
sleep(1)

robot.stop()
