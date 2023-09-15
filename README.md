# Headphones based on 3D Rotation

## Overview

This project is aimed at creating a set of headphones with 3D audio rotation capabilities using the STM32 microcontroller platform. It makes use of the STM32F407G-DISC1 development board and integrates the LSM6DSOX sensor for orientation data. While the project is not yet fully completed, it consists of three main sub-projects: `Experimental_Project1`, `Experimental_Project2`, and `USB_Audio`, each serving a specific purpose in the development process.

## Sub-Projects

### Experimental_Project1

`Experimental_Project1` is an initial exploration into interfacing with sensors via SPI (Serial Peripheral Interface) and I2C (Inter-Integrated Circuit) protocols. The primary objective is to establish communication with the LSM6DSOX sensor and the L3GD20 gyroscope. This serves as the foundation for understanding and gathering orientation data for the 3D audio rotation feature.

### Experimental_Project2

In `Experimental_Project2`, the focus shifts towards configuring and retrieving audio data from a USB source. The project aims to set up the STM32 as an audio device class to receive audio data through the USB interface. This stage is crucial for integrating the audio component of the headphones.

### USB_Audio

`USB_Audio` represents a completed sub-project responsible for playing music from a connected USB drive and routing it to the headphones. This is where the culmination of efforts from the previous two projects comes together to deliver a functional audio experience.

## Project Status

Please note that this project is a work in progress, and certain aspects may not be fully functional or optimized. However, it represents a significant step towards the goal of creating headphones with dynamic 3D audio rotation capabilities.

