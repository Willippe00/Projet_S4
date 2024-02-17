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

     int getId();

     float getposX();
     float  getposY();



    Direction lasDirection = Direction::None;
    Direction nextDirection = Direction::None;

   public:
    Acteur(int id);
    virtual void setup()=0;
    virtual void update()=0;

};


#endif //PROJET_S4_ACTEUR_H
