#include <iostream>
#include "manager/GameManager.h"
int main() {
    std::cout << "start up!" << std::endl;

    GameManager* jeu1 = new GameManager(125, 125);
    jeu1 ->setup();
    jeu1 ->game();

    return 0;
}
