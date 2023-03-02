
# Projet de Programmation 2022-2023 Bataille Navale

## Cahier des charges

### Introduction

Le projet de programmation consiste à réaliser un jeu de bataille navale. Le jeu sera développé en C++ et utilisera la bibliothèque graphique Winbgim. Le jeu sera développé en binôme.

### Description du projet

Le jeu comporte deux modes de jeu : un mode solo et un mode multijoueur. Le mode solo permet de jouer contre l'ordinateur. Le mode multijoueur permet de jouer contre un autre joueur. Le jeu se joue sur une grille de 10x10 cases. Chaque joueur dispose de 5 bateaux de tailles différentes. Le but du jeu est de couler tous les bateaux de l'adversaire. Le joueur qui coule tous les bateaux de l'adversaire gagne la partie.

#### Structure du projet

Le projet est composé des fichiers suivants :

* `main.cpp` : contient le code principal du jeu
* `game.h` : contient les déclarations des fonctions et structures de données du jeu
* 'winbgim.h' : contient les déclarations des fonctions et structures de données de la bibliothèque graphique Winbgim
* 'graphics.h' : contient les déclarations des fonctions et structures de données de la bibliothèque graphique Winbgim
* 'libbgi.a' : contient les fonctions et structures de données de la bibliothèque graphique Winbgim

#### Fonctionnalités

Le jeu doit comporter les fonctionnalités suivantes :

* Choix du mode de jeu (solo ou multijoueur) et du niveau de difficulté (facile, moyen ou difficile)
* Affichage de la grille de jeu
* Placement des bateaux
* Tir sur les bateaux
* Affichage des bateaux coulés
* Affichage des bateaux touchés
* Affichage des bateaux non touchés
* Affichage des bateaux non coulés

#### Interface graphique

L'interface graphique du jeu est composée de 2 grilles de 10x10 cases. Chaque case est représentée par un carré de 50x50 pixels. Chaque case est colorée en fonction de l'état du bateau :

* Vert : bateau non touché
* Rouge : bateau touché
* Noir : bateau coulé
* Blanc : mer

#### Mode solo

Le mode solo permet de jouer contre l'ordinateur. Le joueur commence par placer ses bateaux sur la grille. L'ordinateur place ensuite ses bateaux sur la grille. Le joueur commence ensuite à tirer sur les bateaux de l'ordinateur. L'ordinateur tire ensuite sur les bateaux du joueur. Le joueur gagne la partie s'il coule tous les bateaux de l'ordinateur. L'ordinateur gagne la partie s'il coule tous les bateaux du joueur.

#### Mode multijoueur

Le mode multijoueur permet de jouer contre un autre joueur. Le joueur 1 commence par placer ses bateaux sur la grille. Le joueur 2 place ensuite ses bateaux sur la grille. Le joueur 1 commence ensuite à tirer sur les bateaux du joueur 2. Le joueur 2 tire ensuite sur les bateaux du joueur 1. Le joueur 1 gagne la partie s'il coule tous les bateaux du joueur 2. Le joueur 2 gagne la partie s'il coule tous les bateaux du joueur 1.

### Ressources

* [WinBgim](http://winbgim.codecutter.org/)

### Livrables

* Code source du jeu
* Rapport de projet

### Conclusion

