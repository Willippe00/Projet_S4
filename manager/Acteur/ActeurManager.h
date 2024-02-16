//
// Created by William on 2024-02-09.
//

#ifndef PROJET_S4_ACTEURMANAGER_H
#define PROJET_S4_ACTEURMANAGER_H
#include "../Manager.h"

class ActeurManager : public Manager{

void setup(int rows, int cols, char** grid) override;
void update(char **grid) override;

};


#endif //PROJET_S4_ACTEURMANAGER_H
