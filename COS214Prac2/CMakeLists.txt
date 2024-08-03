cmake_minimum_required(VERSION 3.28)
project(COS214Prac2)

set(CMAKE_CXX_STANDARD 17)

add_executable(COS214Prac2 main.cpp
        SoldierFactory.cpp
        SoldierFactory.h
        InfantryFactory.cpp
        InfantryFactory.h
        ShieldBearerFactory.cpp
        ShieldBearerFactory.h
        BoatmanFactory.cpp
        BoatmanFactory.h
        Infantry.cpp
        Infantry.h
        ShieldBearer.cpp
        ShieldBearer.h
        Boatman.cpp
        Boatman.h
        Soldiers.cpp
        Soldiers.h)
