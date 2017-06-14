# Projet-de-synthese-P12
Robot à reconnaissance vocale

## Setup

Tout d'abord, télécharger les 3 librairies EasyVR, RF24, et Robot

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
