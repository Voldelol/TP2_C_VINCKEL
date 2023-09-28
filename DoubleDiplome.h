//
// Created by fvinc on 9/28/2023.
//

#ifndef UNTITLED1_DOUBLEDIPLOME_H
#define UNTITLED1_DOUBLEDIPLOME_H
#include <iostream>
#include "Etudiant.h"
#include "Master.h"
#include "Ingenieur.h"

class DoubleDiplome : public Master, public Ingenieur {
public:
    DoubleDiplome(int id, const std::string& nom, const std::string& specialite, int noteStage, int scoreTOEIC)
            : Etudiant(id, nom, specialite), Master(id, nom, specialite, noteStage), Ingenieur(id, nom, specialite, scoreTOEIC) {}

    void afficher() override {
        std::cout << "ID: " << id << ", Nom: " << nom << ", Specialite: " << specialite << ", Note de stage: " << noteStage << ", Score TOEIC: " << scoreTOEIC << std::endl;
    }
};

#endif //UNTITLED1_DOUBLEDIPLOME_H
