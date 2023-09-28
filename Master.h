//
// Created by fvinc on 9/28/2023.
//

#ifndef UNTITLED1_MASTER_H
#define UNTITLED1_MASTER_H
#include <iostream>
#include "Etudiant.h"
class Master : virtual public Etudiant {
protected:
    int noteStage;

public:
    Master(int id, const std::string& nom, const std::string& specialite, int noteStage)
            : Etudiant(id, nom, specialite), noteStage(noteStage) {}

    void afficher() override {
        std::cout << "ID: " << id << ", Nom: " << nom << ", Specialite: " << specialite << ", Note de stage: " << noteStage << std::endl;
    }
};

#endif //UNTITLED1_MASTER_H
