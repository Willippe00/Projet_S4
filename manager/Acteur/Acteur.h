//
// Created by willi on 2024-02-15.
//

#ifndef PROJET_S4_ACTEUR_H
#define PROJET_S4_ACTEUR_H


class Acteur {

    float posX;
    float posY;

    int id;

    virtual int getId();

    virtual float getposX();
    virtual float  getposY();

    virtual void setup();
    virtual void update();

};


#endif //PROJET_S4_ACTEUR_H
