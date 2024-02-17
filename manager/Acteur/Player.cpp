//
// Created by willi on 2024-02-15.
//

#include "Player.h"



void Player::setup(int rows, int cols,char** grid)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> rowDist(2, rows - 2);
    std::uniform_int_distribution<> colDist(2, cols - 2);

    int PosX, PosY;
    do {
        PosX = rowDist(gen);
        PosY = colDist(gen);
        // Vérifie que PosX et PosY sont dans les limites de la grille
        if (PosX < 0 || PosX >= rows || PosY < 0 || PosY >= cols) {
            std::cerr << "Erreur : Position en dehors des limites de la grille." << std::endl;
            return; // Sort de la fonction si la position est invalide
        }
    } while (grid[PosX][PosY] == '#'); // Vérifie si la case est occupée


    // Mettre à jour les positions de l'acteur
    posX = PosX;
    posY = PosY;
}
void Player::update(char** grid) {

}