# Projet-de-synthese-P12
Robot à reconnaissance vocale, commandé à distance.

## Matériel utilisé

* 2 Arduino Mega
* [Shield EasyVR pour la reconnaissance vocale](https://www.gotronic.fr/art-shield-reconnaissance-vocale-easyvr-3-0-19129.htm)
* [Châssis de robot 2 roues avec moteurs DC](https://www.adafruit.com/product/3216)
* [Driver board TB6612](https://learn.adafruit.com/adafruit-tb6612-h-bridge-dc-stepper-motor-driver-breakout/overview)
* [Module d’alimentation MB102](https://www.gotronic.fr/art-alimentation-3-3-5-v-mb102-21102.htm)
* 2 modules radio nRF24L01
* Pile 9V


## Setup

Tout d'abord, télécharger les 3 librairies EasyVR, RF24, et Robot.

### Arduino + shield EasyVR
1. Poser le shield EasyVR sur la carte Arduino et connecter le module radio comme indiqué sur le schéma
2. Connecter l'Arduino à l'ordinateur et téléverser le script Transmission.ino
3. Ouvrir le moniteur série (57600 baud)

### Robot
1. Connecter les composants (moteurs, driver board, alimentation et module radio) en se réferrant au schéma
2. Connecter l'Arduino à l'ordinateur et téléverser le script Reception.ino
3. Débrancher l'Arduino de l'ordinateur et le connecter au port USB du module d'alimentation
4. Appuyer sur le bouton poussoir du module d'alimentation

A présent, il est possible de dire une commande ("Left", "Right", "Forward", "Backward") près du micro.
