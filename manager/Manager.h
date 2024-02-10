//
// Created by William on 2024-02-09.
//

#ifndef PROJET_S4_MANAGER_H
#define PROJET_S4_MANAGER_H

#include <iostream>
class Manager {
public:
    // Méthode update virtuelle pure, à implémenter par les sous-classes
    virtual void setup(int rows, int cols) = 0;
    virtual void update(char** grid) = 0;
};


#endif //PROJET_S4_MANAGER_H
