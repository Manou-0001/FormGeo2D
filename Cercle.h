#ifndef CERCLE_H_INCLUDED
#define CERCLE_H_INCLUDED
#include "Formgeo2d.h"
#include <string>
using namespace std;

class Cercle:public FormGeo2D
{
    public:
        Cercle();
        float Perimetre();
        float Surface();
        void setRayon(int r);
        int getRayon();
    private:
        int rayon;
};



#endif // CERCLE_H_INCLUDED
