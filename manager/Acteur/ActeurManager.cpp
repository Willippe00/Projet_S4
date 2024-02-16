//
// Created by William on 2024-02-09.
//

#include "ActeurManager.h"


void ActeurManager::setup(int rows, int cols, char** grid, std::vector<std::shared_ptr<Acteur>> acteurs)
{

    std::cout << "ActeurManager setup" << std::endl;
    for (int i = 0; i < 7; ++i) {
        // Création d'une instance de Acteur avec des valeurs arbitraires
        //std::shared_ptr<Acteur> nouvel_acteur = new Player(i);


        // Ajout de l'acteur au vecteur acteurs
        //acteurs.push_back(nouvel_acteur);
    }

}

void ActeurManager::update(char **grid, std::vector<std::shared_ptr<Acteur>> acteurs)
{
    std::cout << "ActeurManager update" << std::endl;

}