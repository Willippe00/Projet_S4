//
// Created by William on 2024-02-09.
//

#include "ActeurManager.h"


void ActeurManager::setup(int rows, int cols, char** grid, std::vector<std::shared_ptr<Acteur>> acteurs)
{

    std::cout << "ActeurManager setup" << std::endl;



    for (int i = 0; i < 7; ++i) {
        // création des 7 robot
        Acteur* nouvel_acteur = new Robot(i);


        acteurs.push_back(std::shared_ptr<Acteur>(nouvel_acteur));

    }
    std::cout << "robot créer" << std::endl;

    Acteur* nouvel_acteur = new Player(7);

    // Ajout de l'acteur au vecteur acteurs
    acteurs.push_back(std::shared_ptr<Acteur>(nouvel_acteur));

    std::cout << "player créer" << std::endl;

}

void ActeurManager::update(char **grid, std::vector<std::shared_ptr<Acteur>> acteurs)
{
    std::cout << "ActeurManager update" << std::endl;

}