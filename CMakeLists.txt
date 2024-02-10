cmake_minimum_required(VERSION 3.27)
project(Projet_S4)

set(CMAKE_CXX_STANDARD 17)

add_executable(Projet_S4 main.cpp
        manager/GameManager.cpp
        manager/GameManager.h
        manager/Manager.cpp
        manager/Manager.h
        manager/Map/MapManager.cpp
        manager/Map/MapManager.h
        manager/Acteur/ActeurManager.cpp
        manager/Acteur/ActeurManager.h
        manager/Render/RenderManagerConsole.cpp
        manager/Render/RenderManagerConsole.h)
