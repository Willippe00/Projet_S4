//
// Created by willi on 2024-02-15.
//

#ifndef PROJET_S4_ACTEUR_H
#define PROJET_S4_ACTEUR_H

#include "../../enum/direction.h"
class Acteur {


    Acteur();

    float posX;
    float posY;

    int id;

    virtual int getId()=0;

    virtual float getposX()=0;
    virtual float  getposY()=0;



    Direction lasDirection;
    Direction nextDirection;

   public:
    Acteur(int id);
    virtual void setup()=0;
    virtual void update()=0;

};


#endif //PROJET_S4_ACTEUR_H
