cmake_minimum_required(VERSION 3.26)
project(untitled1)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled1 main.cpp
        Vecteur.cpp
        Vecteur.h
        Ensemble.cpp
        Ensemble.h
        Etudiant.cpp
        Etudiant.h
        Master.cpp
        Master.h
        Ingenieur.cpp
        Ingenieur.h
        DoubleDiplome.cpp
        DoubleDiplome.h)
