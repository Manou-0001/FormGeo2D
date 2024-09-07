#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include"Formgeo2d.h"
class Rectangle:public FormGeo2D
{
public:
    Rectangle();
    float Perimetre();
    float Surface();
    void setlongueur(int L);
    void setlargeur(int l);
    int getlongueur();
    int getlargeur();
private:
    float largeur,longueur;
};


#endif // RECTANGLE_H_INCLUDED
