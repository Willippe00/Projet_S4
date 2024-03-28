//
// Created by rapha on 2024-03-16.
//

#ifndef PROJET_S4_APIMANAGER_H
#define PROJET_S4_APIMANAGER_H


#include <vector>
#include <memory>
#include <chrono>
#include <thread>

#include "Manager.h"
#include "Map/MapManager.h"
#include "Acteur/ActeurManager.h"
#include "Render/RenderManagerConsole.h"
#include "Acteur/Acteur.h"
#include <sstream>
#include <iomanip>

//#include "scaler.h"
//#include "vdma.h"
//#include "xil_printf.h"
//#include "myColorRegister.h"
//#include "sleep.h"

class ApiManager {

private:
    char** grid;
    int rows, cols;
    std::vector<std::shared_ptr<Acteur>> acteurs;


public:
    ApiManager();
    ~ApiManager();

    // void openMap(int rows, int cols, char** grid); // gives map info to FPGA

    static void setOrigin(float posXPlayer, float posYPlayer);

    static void moveActor(int id, float distanceX, float distanceY); // places actors sprite in the generated map

    static void movePlayer(int id, float distanceX, float distanceY); // call to move player by distance of X and Y
};

#endif //PROJET_S4_APIMANAGER_H