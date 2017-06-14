# WiBot: un robot sans fil, commandé par reconnaissance vocale
![hello](https://raw.githubusercontent.com/ProjetSolideP12/Projet-de-synthese-P12/master/robot.jpg)
Projet de 1ère année à CentraleSupélec Rennes (année 2016/2017)
* Alexandre Lalanne, [alexandre.lalanne@supelec.fr](mailto:alexandre.lalanne@supelec.fr)
* Gabriel Masseran, [gabriel.masseran@supelec.fr](mailto:gabriel.masseran@supelec.fr)
* Joel Nguesson, [joel.nguesson@supelec.fr](mailto:joel.nguesson@supelec.fr)

## Matériel utilisé
* 2 Arduino Mega
* [Shield EasyVR pour la reconnaissance vocale](https://www.gotronic.fr/art-shield-reconnaissance-vocale-easyvr-3-0-19129.htm)
* [Châssis de robot 2 roues avec moteurs DC](https://www.adafruit.com/product/3216)
* [Driver board TB6612](https://learn.adafruit.com/adafruit-tb6612-h-bridge-dc-stepper-motor-driver-breakout/overview)
* [Module d’alimentation MB102](https://www.gotronic.fr/art-alimentation-3-3-5-v-mb102-21102.htm)
* 2 modules radio nRF24L01
* Pile 9V

## Branchements
### Liaison sans fil
![nrf](https://raw.githubusercontent.com/ProjetSolideP12/Projet-de-synthese-P12/master/branchement_radio.png)
### Branchement des moteurs
![moteur](https://raw.githubusercontent.com/ProjetSolideP12/Projet-de-synthese-P12/master/branchement_moteurs.png)

## Installation du système
Tout d'abord, installer les 3 bibliothèques EasyVR, RF24, et Robot disponibles dans le répertoire [Arduino/libraries](https://github.com/ProjetSolideP12/Projet-de-synthese-P12/tree/master/Arduino/libraries).

### Arduino + shield EasyVR
1. Poser le shield EasyVR sur la carte Arduino et connecter le module radio comme indiqué sur le schéma
2. Connecter l'Arduino à l'ordinateur et téléverser le script [Transmission.ino](https://github.com/ProjetSolideP12/Projet-de-synthese-P12/blob/master/Arduino/Transmission/Transmission.ino)
3. Ouvrir le moniteur série (57600 baud)

### Robot
1. Connecter les composants (moteurs, driver board, alimentation et module radio) en se réferrant au schéma
2. Connecter l'Arduino à l'ordinateur et téléverser le script [Reception.ino](https://github.com/ProjetSolideP12/Projet-de-synthese-P12/blob/master/Arduino/Reception/Reception.ino)
3. Débrancher l'Arduino de l'ordinateur et le connecter au port USB du module d'alimentation
4. Appuyer sur le bouton poussoir du module d'alimentation

A présent, il est possible de dire une commande ("Left", "Right", "Forward", "Backward") près du micro.
