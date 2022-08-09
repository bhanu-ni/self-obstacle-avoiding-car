# self-obstacle-avoiding-car
**Requirement:**
1. Chassis OR any toy car.
2. Arduino UNO/Mega.
3. Ultrasonic sensor HC SR-04.
4. 2 DC motors.
5. 9V/12V 1A battery.
6. Motor driver module L298.
7. Jumpers.
8. Single stranded wires.

**Theory:**

Obstacle Avoiding Robot is an intelligent device which can automatically sense the obstacle in front of it and avoid them by turning itself in another direction. This
design allows the robot to navigate in unknown environment by avoiding collisions, which is a primary requirement for any autonomous mobile robot. The application of Obstacle Avoiding robot is not limited and it is used in most of the military organization now which helps carry out many risky jobs that cannot be done by any soldiers.

**Connections of Ultrasonic sensor:**
* VCC – VCC terminal of Arduino.
* GND – GND terminal of Arduino.
* Trigpin – digital pin 9 on Arduino.
* Echo pin – digital pin 10 on Arduino.

**Connections of L298N:**
* +12V – Positive terminal of the battery.
* GND – a)GND of Arduino b)Negative terminal of battery.
* Input terminal 1 – Pin 4
* Input terminal 2 – Pin 5
* Input terminal 3 – Pin 6
* Input terminal 4 – Pin 7
* Output terminal 1 – Positive of first motor.
* Output terminal 2 – Negative of first motor.
* Output terminal 3 – Positive of second motor.
* Output terminal 4 – Negative of second motor.
