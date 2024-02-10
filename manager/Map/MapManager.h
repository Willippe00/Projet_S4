//
// Created by William on 2024-02-09.
//

#ifndef PROJET_S4_MAPMANAGER_H
#define PROJET_S4_MAPMANAGER_H
#include "../Manager.h"

class MapManager : public Manager{
int map =0;

void update(char **grid) override;
void setup(int rows, int cols) override;
};


#endif //PROJET_S4_MAPMANAGER_H
