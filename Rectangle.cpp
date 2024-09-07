#include "Rectangle.h"
#include <iostream>
#include <string>
using namespace std;
Rectangle::Rectangle(){}
void Rectangle::setlongueur(int L)
{
    longueur=L;
}
void Rectangle::setlargeur(int l)
{
    largeur=l;
}
int Rectangle::getlongueur()
{
    return longueur;
}
int Rectangle::getlargeur()
{
    return largeur;
}
float Rectangle::Perimetre()
{
    float P;
    P=(longueur+largeur)*2;
    cout<<"Perimetre de Rectangle:"<<P<<endl;
}
float Rectangle::Surface()
{
    float S;
    S=longueur*largeur;
    cout<<"Surface de Rectangle:"<<S<<endl;
    }
