# Calculatrice avec QT

## Description
Ce projet met en oeuvre une calculatrice avec une interface homme-machine réalisée avec QT.
La calculatrice utilise un parser réalisé par beltoforion : [muParser](https://github.com/beltoforion/muparser)

### Fonctionnalité 
#### Calculatrice
L'onglet calculateur permet d'effectuer des calculs dans un mode simple et scientifique, qui comporte des fonction mathématique supplémentaire.

Si le parser muParser rencontre une erreur lors du calcul, le calcul est alors clos et `error` est affiché.

#### Convertisseur
L'onglet convertisseur permet d'effectuer 3 conversions :
- centimètre vers pouces
- nombre décimal vers binaire
- nombre décimal vers hexadécimal

Les changements de base ne supporte que les entiers naturel, si un nombre réel est entrée, le convertisseur n'interpréteras que la partie entière.

#### Historique
L'onglet Historique permet de visualiser l'ensemble des calculs effectué dans l'instance courante de la calculatrice.

#### Autre
Les boutons des interfaces ont des raccourcis claviers associés à leur texte.

## Exécution
- Assurez-vous d'avoir les commande cmake, make et qmake. Voici comment les installer :
  `sudo apt install qtbase5-dev`

  `sudo apt install cmake`

- Installation de la bibliothèque externe muParser :
  `cd muParser`

  `cmake .`

  `make`

  `sudo make install`

  `sudo ldconfig`
  
- Compilation et exécution du projet :
  `cd ../calculator`

  `qmake Calculator.pro`

  `make`

  `./Calculator`

## Ressources utilisées

Bibliothèque [muParser](https://github.com/beltoforion/muparser) par beltoforion

Tuto YouTube de [Codersland FR](https://www.youtube.com/@coderslandfr/featured)

[Documentation C++](https://en.cppreference.com/w/)

[QT Creator](https://www.qt.io/product/development-tools)

[ChatGPT](https://chat.openai.com)

---

Réalisé par [Robin HALM](https://github.com/HaRobin)
