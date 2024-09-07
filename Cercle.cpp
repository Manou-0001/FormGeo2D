#include "Cercle.h"
#include <iostream>
#include <cmath>
Cercle::Cercle(){}
void Cercle::setRayon(int r)
{
    rayon=r;
}
int Cercle::getRayon()
{
    return rayon;
}
float Cercle::Perimetre()
{
    float P;
    double pi=M_PI;
    P=rayon*pi*2;
    cout<<"Perimetre du cercle:"<<P<<endl;
}
float Cercle::Surface()
{
    float A;
    double pi=M_PI;
    A=pi*rayon*rayon;
    cout<<"Surface du cercle:"<<A<<endl;
}
