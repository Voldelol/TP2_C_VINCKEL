#include <iostream>
#include <vector>
#include "Vecteur.h"
#include "Ensemble.h"
#include "Etudiant.h"
#include "Master.h"
#include "Ingenieur.h"
#include "DoubleDiplome.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    int tab[3]= {1,2,3};
    int tab1[3]={2,4,6};
    Vecteur v1=Vecteur(3);
    Vecteur v2= Vecteur(3);
    Vecteur v3= Vecteur(3);
    v1.setP(tab);
    v2.setP(tab);
    v3.setP(tab1);
    if (v1!=v3){
        std::cout<<"v1 et v3 sont differents"<<std::endl;
    }
    if (v1==v2){
        std::cout<<"True"<<std::endl;
    }
    if ((v1+=v2)==v3){
        std::cout<<"Addition"<<std::endl;
    }
    std::cout<<v1[1]<<std::endl;
    Ensemble* head1=new Ensemble(2, nullptr, nullptr);
    Ensemble* head2=new Ensemble(2, nullptr, nullptr);
    head1->add(2);
    head1->add(3);
    head2->add(4);
    head2->add(5);
    head1->show();
    head2->show();
    std::cout<<"Egalite des ensembles ?"<<std::endl;
    Ensemble e1=*head1;
    std::cout<<"Etat de e1"<<std::endl;
    e1.show();
    Ensemble e2=*head2;
    std::cout<<"e1 apres operateur ="<<std::endl;
    e1=e2;
    e1.show();

    if (e1==e2){
        std::cout<<"Memes ensembles"<<std::endl;
    }
    std::vector<Etudiant*> etudiants;

    etudiants.push_back(new Master(1, "Francois", "Informatique", 15));
    etudiants.push_back(new Ingenieur(2, "Louis", "Electronique", 650));
    etudiants.push_back(new DoubleDiplome(3, "Pierre", "Mecanique", 12, 700));

    for (auto& etudiant : etudiants) {
        etudiant->afficher();
    }

    // Libération de la mémoire
    for (auto& etudiant : etudiants) {
        delete etudiant;
    }

    return 0;
}
