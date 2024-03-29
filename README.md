# Calculatrice avec QT

## Description
Ce projet met en oeuvre une calculatrice avec une interface homme-machine réalisée avec QT.
La calculatrice utilise un parser réalisé par beltoforion : [muParser](https://github.com/beltoforion/muparser)

### Fonctionnalité 
#### Calculatrice
L'onglet calculateur permet d'effectuer des calculs dans un mode simple et scientifique, qui comporte des fonction mathématique supplémentaire.

#### Convertisseur
L'onglet convertisseur permet d'effectuer 3 conversions :
- centimètre vers pouces
- nombre décimal vers binaire
- nombre décimal vers hexadécimal

#### Historique
L'onglet Historique permet de visualiser l'ensemble des calculs effectuer dans l'instance courante de la calculatrice.

## Exécution
`cd muParser`
`cmake .`
`make`
`sudo make install`
`sudo ldconfig`
`cd ../calculator`
`qmake Calculator.pro`
`make -j6 in `
