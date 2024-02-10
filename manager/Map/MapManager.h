//
// Created by William on 2024-02-09.
//

#ifndef PROJET_S4_MAPMANAGER_H
#define PROJET_S4_MAPMANAGER_H
#include "../Manager.h"
#include <fstream>


class MapManager : public Manager{
int Rows;
int Cols;
    char** map;
void setup(int rows, int cols) override;
void update(char **grid) override;

};


#endif //PROJET_S4_MAPMANAGER_H
