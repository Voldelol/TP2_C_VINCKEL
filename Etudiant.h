//
// Created by fvinc on 9/28/2023.
//

#ifndef UNTITLED1_ETUDIANT_H
#define UNTITLED1_ETUDIANT_H


#include <iostream>
#include <vector>
#include <string>

class Etudiant {
protected:
    int id;
    std::string nom;
    std::string specialite;

public:
    Etudiant(int id, const std::string& nom, const std::string& specialite)
            : id(id), nom(nom), specialite(specialite) {}

    virtual void afficher() = 0;
};

#endif //UNTITLED1_ETUDIANT_H
