Build | Code Quality |
|---------|------------|
[![C/C++ CI](https://github.com/Shreyasi2059/Embedded-LTTS/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/Shreyasi2059/Embedded-LTTS/actions/workflows/c-cpp.yml)|[![Code Quality - Static Code - Cppcheck](https://github.com/Shreyasi2059/Embedded-LTTS/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/Shreyasi2059/Embedded-LTTS/actions/workflows/cppcheck.yml)

This project is part of LnT STEPin program. The objective is to learn Embedded C programming.
For simulation, SimulIDE is used.

# Overview
Objective is to make a Car Seat Heater. The whole project is divided into four different activities.


<img src="https://user-images.githubusercontent.com/86160630/126757412-35739259-3b69-46ac-a710-41c532277fce.png">


## Activity 1
To check the status of passenger whether seated or not and show the status, then to check whether heater is on or not. If both the conditions are satisfied the LED will glow.

## Activity 2
To take the ADC value of temperature sensor as input to microcontroller.

## Activity 3
To display the temperature by showing output PWM through CRO.

## Activity 4
To show the temperature input to CAN module, which shows the temperature values gone to protocol.   

## Simulation Schematic and Output
###### Case 1: When Button Sensor Switch or Heater Switch or both are OFF
![Activity_OFF](https://user-images.githubusercontent.com/86352920/127766005-eda871c0-46f0-48f2-a763-25b834c7cca4.png)
###### Case 2: When Button Sensor Switch is ON and Heater Switch is OFF
![Activity_ON](https://user-images.githubusercontent.com/86352920/127766016-272ade71-4eff-4b1a-b03a-651f17381f71.png)
![Activity_ON1](https://user-images.githubusercontent.com/86352920/127766024-cc9e99ad-a975-426f-bb3b-1434d8d6c55e.png)


## Process to Build the project

1. In case of codeblocks find the ZIP folder named "302457_Embedded_CaseStudy_Codeblocks" inside repository. 
   - Open "302457_Embedded_CaseStudy_Codeblocks" then click 'view raw', the ZIP folder will be downloaded.
   - Then unzip it and open this project in codeblocks.
   - Build the project, you will get the '.hex' file in "bin" folder.
2. In Visual Studio download the ZIP folder of repository and then unzip it.
   - Open this repository in vscode.
   - Change the working directory to "Implementation_Codefiles".
   - Run the 'make' file in ubuntu WSL terminal.
   - Hex and elf files will be generated inside "Implementation_Codefiles >> Build folder"
