# Report

# WIPER CONTROL SYSTEM

## Abstract:

It’s easy to underestimate exactly how important proper visibility is while driving. Proper windshield wiper maintenance is an area many vehicle owners don’t consider regularly, and it’s easy to forget living in areas that might only require the use of the vehicle’s wiper blades one or two times a month. Today, most of us take our electric windshield wipers for granted. The wipers faithfully keep the window clear, moving back and forth across the windshield countless times as they sweep the water away. The wiper serves to clean the windshield of the car at the front and rear, although not all cars have wipers on the rear side. Wiper works by removing oil, dust, rainwater, and dirt that get stuck to the windshield. Windshield wipers are a small part of your car, but they have a big impact on your driving and overall safety. They remove rain, snow, dirt, pollen, frost and other debris quickly and smoothly at the push of a button! The windshield wiper motor moves the windshield wiper arms across the windshield. The metal or hard plastic arms drag a thin rubber (or silicone) blade across the windshield to clear away water, giving you a better view of the road.

When the wiper switch is in the off position, the wiper will not function. When the wiper switch is in low-speed mode, the wiper will work at low speed. Accordingly, when the wiper switch is in high-speed mode, the wiper will work at a fairly high speed. The main aim of this project is to prevent the accidents which happens during the rainy days and aslo when the vehicle windshield is blurred with water and dust. Safety in a travel is a very important factor we consider in our day today life because we live in a very dynamic and a busy lifestyle. As a result the tendency of making failures in critical moments could create a fatal mistake and it could lead even to lose lives. To ensure maximum safety nowadays the researches and design engineers put their maximum efforts. The technology adopts to enhance daily routines has become a trend in the recent times and have produced many of such tools for travel and transportation. The impact on travel and transportation is significant because it affects everybody as a whole.

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

## Block Diagram:

<img width="839" alt="Blockdiag" src="https://user-images.githubusercontent.com/83327670/168133436-76c750ca-4820-42ae-b70f-d9a91724ca04.png">

## Flowchart:

![flowchart](https://user-images.githubusercontent.com/83327670/168133566-707c3a34-e765-4a58-9966-0c510d58f0b7.jpg)

## Structural Diagram:

![structural_diag](https://user-images.githubusercontent.com/83327670/168133660-09e38467-9c37-4f08-8dc4-eca16cbe57d6.jpg)

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
