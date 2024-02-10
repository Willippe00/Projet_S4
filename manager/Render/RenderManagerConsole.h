//
// Created by William on 2024-02-09.
//

#ifndef PROJET_S4_RENDERMANAGERCONSOLE_H
#define PROJET_S4_RENDERMANAGERCONSOLE_H
#include "../Manager.h"

class RenderManagerConsole : public Manager {
    int rows;
    int cols;

    void setup(int Rows, int Cols) override;
    void update(char **grid) override;

};


#endif //PROJET_S4_RENDERMANAGERCONSOLE_H
