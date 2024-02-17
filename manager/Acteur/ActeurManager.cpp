//
// Created by William on 2024-02-09.
//

#include "ActeurManager.h"


void ActeurManager::setup(int rows, int cols, char** grid, std::vector<std::shared_ptr<Acteur>>* acteurs)
{

    std::cout << "ActeurManager setup" << std::endl;


    std::cout << "ActeurManager setup" << std::endl;

    for (int i = 0; i < 7; ++i) {
        // Création des 7 robots
        Acteur* nouvel_acteur = new Robot(i);
        acteurs->push_back(std::shared_ptr<Acteur>(nouvel_acteur));
    }
    std::cout << "Robots créés" << std::endl;

    // Création d'un joueur
    Acteur* nouvel_acteur = new Player(7);
    acteurs->push_back(std::shared_ptr<Acteur>(nouvel_acteur));

    std::cout << "Joueur créé" << std::endl;
}

void ActeurManager::update(char **grid, std::vector<std::shared_ptr<Acteur>>* acteurs)
{
    std::cout << "ActeurManager update" << std::endl;

}