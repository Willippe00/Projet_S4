//
// Created by willi on 2024-02-15.
//

#ifndef PROJET_S4_PLAYER_H
#define PROJET_S4_PLAYER_H

#include "Acteur.h"
class Player: public Acteur{



    int getId() override;

    float getposX() override;
    float  getposY() override;




    public:
    void setup() override;
    void update() override;


};


#endif //PROJET_S4_PLAYER_H
