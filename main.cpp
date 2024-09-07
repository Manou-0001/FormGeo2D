#include <iostream>
#include "Rectangle.h"
#include "Cercle.h"
#include "Formgeo2d.h"
#include <string>
using namespace std;
int main()
{
    FormGeo2D f=FormGeo2D();
    f.Perimetre();
    f.Surface();
    Rectangle Rect1= Rectangle();
    Rect1.setlongueur(6);
    Rect1.setlargeur(4);
    Rect1.Perimetre();
    Rect1.Surface();
    Cercle Ce=Cercle();
    Ce.setRayon(5);
    Ce.Perimetre();
    Ce.Surface();
    return 0;

}
