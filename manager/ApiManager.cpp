//
// Created by rapha on 2024-03-16.
//

// Class for api calls C++ to Xilinx

#include "ApiManager.h"

ApiManager::ApiManager() {}

ApiManager::~ApiManager() = default;

void ApiManager::setOrigin(float posXPlayer, float posYPlayer) {
    int posXPlayerI = (int)posXPlayer + 320;
    int posYPlayerI = (int)posYPlayer + 180;


    // need to add exeption for negative and for frame not moving
    int originX = posXPlayerI - 320;
    if (originX < 0) {
        originX = 0;
    }
    int originY = posYPlayerI - 180;
    if (originY < 0) {
        originY = 0;
    }
    int functionNumber = 2;

    std::cout << "Setting origin point at X : " << originX << ", Y : " << originY << std::endl;

    std::stringstream hexStream;

    hexStream << std::hex << std::setw(4) << std::setfill('0') << originY;
    hexStream << std::hex << std::setw(3) << std::setfill('0') << originX;
    hexStream << std::hex << std::setw(1) << std::setfill('0') << functionNumber;

    std::string hexString = hexStream.str();

    std::cout << "Sending hexNumber to API : 0X" << hexString << std::endl;

    // Write function number, X coord and Y coord for origin point to appropriate registers
    // MYCOLORREGISTER_mWriteReg(XPAR_MYCOLORREGISTER_0_S00_AXI_BASEADDR, 0, hexStream);
}

void ApiManager::moveActor(int id, float distanceX, float distanceY) {
    int functionNumber = 3;

    std::cout << "Moving actor with id : " << id << " at position x : " << distanceX << ", Y : " << distanceY << std::endl;

    std::stringstream hexStream;

    hexStream << std::hex << std::setw(3) << std::setfill('0') << (int)distanceY;
    hexStream << std::hex << std::setw(3) << std::setfill('0') << (int)distanceX;
    hexStream << std::hex << std::setw(1) << std::setfill('0') << id;
    hexStream << std::hex << std::setw(1) << std::setfill('0') << functionNumber;

    std::string hexString = hexStream.str();

    std::cout << "Hex Number sent to VHDL : 0X" << hexString << std::endl;
    // Write ID, distanceX, and distanceY to appropriate registers
    // MYCOLORREGISTER_mWriteReg(XPAR_MYCOLORREGISTER_0_S00_AXI_BASEADDR, 0, hexStream);
}

void ApiManager::movePlayer(int id, float distanceX, float distanceY) {
    std::cout << "CALLING MOVE PLAYER API FUNCTION" << std::endl;
    std::cout << "Moving player : " << id << " to position x : " << distanceX << " y : " << distanceY << std::endl;


    int functionNumber = 1;
    // Convert ID, distanceX, and distanceY to hexadecimal strings
    std::stringstream hexStream;

    hexStream << std::hex << std::setw(3) << std::setfill('0') << (int)distanceY;
    hexStream << std::hex << std::setw(3) << std::setfill('0') << (int)distanceX;
    hexStream << std::hex << std::setw(1) << std::setfill('0') << id;
    hexStream << std::hex << std::setw(1) << std::setfill('0') << functionNumber;

    // converting to string for printing

    std::string hexString = hexStream.str();

    std::cout << "Hex number sent to VHDL : 0X" << hexString << std::endl;

    // Write ID, distanceX, and distanceY to appropriate registers
    // MYCOLORREGISTER_mWriteReg(XPAR_MYCOLORREGISTER_0_S00_AXI_BASEADDR, 0, hexStream);
}