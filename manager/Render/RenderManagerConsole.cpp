//
// Created by William on 2024-02-09.
//

#include "RenderManagerConsole.h"

void RenderManagerConsole::setup(int Rows, int Cols, char** grid, std::vector<std::shared_ptr<Acteur>>* acteurs)
{
    std::cout << "RenderManagerConsole setup" << std::endl;
    rows = Rows;
    cols = Cols;
}

void RenderManagerConsole::update(char **grid, std::vector<std::shared_ptr<Acteur>>* acteurs)
{

    std::cout << "RenderManagerConsole update" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "avant print acteur" << std::endl;
    for (size_t i = 0; i < acteurs->size(); ++i) {
        std::cout << "acteur : "<< acteurs->at(i)->getId() << " pos x : "<<acteurs->at(i)->getposX()<< " pos Y : " << acteurs->at(i)->getposY()<<std::endl;
        // Accéder à l'élément vecteur[i]
    }



}