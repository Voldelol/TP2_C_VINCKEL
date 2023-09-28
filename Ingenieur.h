//
// Created by fvinc on 9/28/2023.
//

#ifndef UNTITLED1_INGENIEUR_H
#define UNTITLED1_INGENIEUR_H
#include <iostream>
#include "Etudiant.h"
class Ingenieur : virtual public Etudiant {
protected:
    int scoreTOEIC;

public:
    Ingenieur(int id, const std::string& nom, const std::string& specialite, int scoreTOEIC)
            : Etudiant(id, nom, specialite), scoreTOEIC(scoreTOEIC) {}

    void afficher() override {
        std::cout << "ID: " << id << ", Nom: " << nom << ", Specialite: " << specialite << ", Score TOEIC: " << scoreTOEIC << std::endl;
    }
};

#endif //UNTITLED1_INGENIEUR_H
