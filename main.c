#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* fonctions mathematique plus complexes*/
    double absolu = 0, nombre0 = -27;//nombre absolu
    absolu = fabs(nombre0);//nombre absolu vaudra 27

    double arrondi = 0, nombre = 56.234;
    arrondi = ceil(nombre);//arrondi au dessus donc vaudra 57.

    double arrondi2 = 0, nombre2 = 56.234;
    arrondi2 = floor(nombre2);//arrondi en dessous donc vaudra 56

   double resultat = 0, nombre3 = 2;
   resultat = pow(nombre3, 3);//il va elever e a a puissance de trois

   double resultat2 = 0, nombre4 = 100;
   resultat2 = sqrt(nombre4);//racine carre donc elle vaudra 10


    return 0;
}
