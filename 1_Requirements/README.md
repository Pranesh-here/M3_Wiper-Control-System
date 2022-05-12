# Requirements
## Introduction:
The main aim of this project is to prevent the accidents which happens during the rainy days and also when the vehicle windshield is blurred with water or dust. The wiper system helps to clean the water, oil, dust or anyother liquid particles which is present in the windshield of the vehicle by wiping it over. The wiper system in our project has three speed conditions which will vary when the button is pressed correspondingly, so that it may work fast and clean the particles even more faster for better viewing of road during the travel in the vehicles. Most personal automobiles use two synchronized radial-type arms, while many commercial vehicles use one or more pantograph arms. This project is done using ARM Cortex-M4 series microcontroller using STM32F series Discovery board.

## Research:
In this project it is nothing but the simple implementation of the wiper control system used in every vehicles to understand the mechanism of the wiper system. Understanding of this concept of wiper system is done with the help of various sources from the internet about the various types of wiper systems which are being used in the on road vehicles. 

## Defining our project:
The 4 Led's (RED, BLUE, GREEN, ORANGE) present in the ARM Cortex-M4 series STM32F Discovery board represents the wiper system here, and the Switch (push button) helps to turn ON & OFF the Vehicle (ACC position) and also to vary the speeds of the wiper control system correspondingly by pressing the switch. Here, the speed of the wiper system is visualised by the Blinking speed of the Led's which is controlled by the frequency control of Led's. 

## Features
* Blue Button (Switch)
* RED led (Vehicle Start/Stop)
* BLUE,GREEN,ORANGE led's (Wiper system visualisation)

	->When the blue button is long pressed ONCE initially for 2 seconds, it denotes that the vehicle is ON (ACC position). So, the RED Led starts to glow continuously till the vehicle is turned OFF (ACC position).
  
	->After vehicle turned ON, When the blue button is pressed/clicked ONCE, the three Led's (BLUE, GREEN, ORANGE) starts blinking one at a time with a set frequency of 1Hz.
  
	->After vehicle turned ON, When the blue button is pressed/clicked ONCE, the three Led's (BLUE, GREEN, ORANGE) starts blinking one at a time little faster than previous condition with a set frequency of 4Hz.
  
	->After vehicle turned ON, When the blue button is pressed/clicked ONCE, the three Led's (BLUE, GREEN, ORANGE) starts blinking one at a time even more faster than previous condition with a set frequency of 8Hz.
  
	->When the blue button is long pressed AGAIN for 2 seconds,if denotes that the vehicle is turned OFF (ACC). Now, the RED Led stops glowing.

## END GOAL:
* Avoid Accidents and Provide safety environment.
* Clean Vision in weather conditions.

__Components Used__:
* STM32F407VG DISCOVERY BOARD

## SWOT Analysis
__STRENGTH__:
* Increases the safety of the travellers.
* Clears the vision in different weather conditions.
* Prevents the cause of road accidents.
* Decreases the fuel consumption and reduces traffic.

__WEAKNESS__:
* Limited speed.
* Maintenance problem.
* Can be frustrating at low penetration rates.
* Cost may be variably high.

__OPPURTUNITIES__:
* There will be no need for the dependent to clean the windshield manually.
* The updation of this project with more features which are required is available and will be good.
* Technology maturity may reduce system cost.

__THREATS__:
* User acceptance in terms of both purchase intention and frequent activation after purchase.
* MTM delayed adaptation.

## 4W'S and 1'H:
__WHO__ -
All who wants safety and clean vision in weather conditions.

__WHAT__ -
It's a application of Wiper Control System for every vehicles.

__WHEN__ -
The main purpose is to be clear away from rain and snow from the windshield for safety purposes.

__WHERE__ -
* It is attached to moveable arms on the outside of the wind shield.
* It is connected to a motor that controls the wipers.

__HOW__ -
Led indicates the rotation of the wiper system and the blue button to turn ON & OFF, and speed variation of the wiper.

## Detail Requirements 
__High Level Requirements__
|  ID  |             Description           |    Status   |
|------|-----------------------------------|-------------|
|HR_01 | Vehicle ACC Position ON/OFF  | Implemented |
|HR_02 | Wiper System Activate/ Deactivate                      | Implemented |
|HR_03 | Speed variation of Wiper System         | Implemented |

__Low Level Requirements__
|  ID  |             Description                          |   Status   |
|------|--------------------------------------------------|-------------|
|LR_01 | Blue Button (Switch)   | Implemented |
|LR_02 | RED Led glowing   | Implemented |
|LR_03 | BLUE, GREEN, ORANGE Leds glowing      | Implemented|
