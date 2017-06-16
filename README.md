# WiBot: a tiny voice-controlled robot
![hello](https://raw.githubusercontent.com/ProjetSolideP12/Projet-de-synthese-P12/master/img/robot.jpg)
<<<<<<< HEAD
Student project at CentraleSupélec Rennes (academic year 2016/2017). Made by 3 students:
=======
Projet de 1ère année à CentraleSupélec Rennes (année 2016/2017)
>>>>>>> 8520df278e4e74366b4f002631f4a103ef4265ed
* Alexandre Lalanne, [alexandre.lalanne[magicsymbol]supelec.fr](mailto:alexandre.lalanne[magicsymbol]supelec.fr)
* Gabriel Masseran, [gabriel.masseran[magicsymbol]supelec.fr](mailto:gabriel.masseran[magicsymbol]supelec.fr)
* Joel Nguesson, [joel.nguesson[magicsymbol]supelec.fr](mailto:joel.nguesson[magicsymbol]supelec.fr)

## Hardware
* Arduino x2 (we had only Megas but even Nanos should be enough !)
* [EasyVR Arduino shield](http://www.robotshop.com/eu/fr/blindage-arduino-reconnaissance-vocale-easyvr-30-assembler.html)
* [Mini Round Robot Chassis Kit - 2WD with DC Motors](https://www.adafruit.com/product/3216)
* [[Adafruit TB6612 1.2A DC/Stepper Motor Driver Breakout Board](https://learn.adafruit.com/adafruit-tb6612-h-bridge-dc-stepper-motor-driver-breakout/overview)
* [MB102 breadboard module](https://www.amazon.fr/Breadboard-Module-alimentation-Puissance-Arduino/dp/B00IOB9B1Q)
* nRF24L01 2.4GHz module x2
* 9V battery

## Connections
### Transmitter (nRF24L01)
![nrf](https://raw.githubusercontent.com/ProjetSolideP12/Projet-de-synthese-P12/master/img/transmitter_bb.png)
### Receiver (nRF24L01 + DC motors + H-bridges)
![moteur](https://raw.githubusercontent.com/ProjetSolideP12/Projet-de-synthese-P12/master/img/receiver_bb.png)

## Software layer
Install the 3 libraries bibliothèques EasyVR, RF24 and Robot available in the directory [Arduino/libraries](https://github.com/ProjetSolideP12/Projet-de-synthese-P12/tree/master/Arduino/libraries).

### Arduino + EasyVR shield
1. Plug the EasyVR shield on the Arduino board. Connect the nRF chip as stated on the transmitter picture
2. Download the transmitter Arduino sketch [Transmission.ino](https://github.com/ProjetSolideP12/Projet-de-synthese-P12/blob/master/Arduino/Transmission/Transmission.ino)
3. Open the serial monitor (57600 bd/s)

### Robot
1. Connected the components as in the receiver picture
2. Download the receiver Arduino sketch [Reception.ino](https://github.com/ProjetSolideP12/Projet-de-synthese-P12/blob/master/Arduino/Reception/Reception.ino)
3. Unplug the Arduino and connect it to the USB port of the adaptable power supply
4. Press the power button

Now, your robot is able to understand basic orders (**Left**,**Right**,**Forward**,**Backward**)
