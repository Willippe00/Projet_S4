//
// Created by willi on 2024-02-17.
//

#ifndef PROJET_S4_ROBOT_H
#define PROJET_S4_ROBOT_H
#include "Acteur.h"

class Robot : public Acteur{






public:
    void setup() override;
    void update() override;
    Robot(int Id) : Acteur(Id)
    {

    }

};


#endif //PROJET_S4_ROBOT_H
