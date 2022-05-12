# Test Plan
## High Level Test Plan
|  ID  |             Description           |    Ex O/P   |  Actual O/P   |
|------|-----------------------------------|-------------|---------------|
|HR_01 | Turning ON the vehicle (ACC)  | RED LED ON |  PASS  |
|HR_02 | Turning OFF the vehicle (ACC)                      | RED LED OFF |  PASS  |
|HR_03 | It Shall Activate the Wiper Control System         | 3 LEDs ON |  PASS  |
|HR_04 | It Shall Deactivate the Wiper Control System      | 3 LEDs OFF |  PASS  |

## Low Level Test Plan 
|  ID  |   Description   |             Ex I/P                          |    Ex O/P   |   Actual O/P   |
|------|-----------------|--------------------------------------------------|-------------|------------|
|LR_01 |ACC ON |  If the User long pressed the Button ONCE (2sec) | RED Led ON                             | PASS |
|LR_02 |Wiper ON |  If the User pressed/clicked the Button (1Hz) | BLUE,GREEN,ORANGE Leds ON                 | PASS |
|LR_03 |Speed Increase |  If the User pressed/clicked the Button (4Hz) | BLUE,GREEN,ORANGE Leds ON                                 | PASS|
|LR_04 |Speed Increase |  If the User pressed/clicked the Button (8Hz) | BLUE,GREEN,ORANGE Leds ON                  | PASS |
|LR_05 |ACC OFF and Wiper OFF |  If the User long pressed the Button second time (2sec) | RED Led OFF                  | PASS |                             
