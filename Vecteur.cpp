//
// Created by fvinc on 9/27/2023.
//

#include "Vecteur.h"
#include <iostream>
Vecteur::Vecteur(int n)  {
    this->n=n;
    this->p=new int[n];
}
Vecteur::Vecteur(Vecteur* v){
    this->n=(*v).n;
    this->p=new int[n];
    for (int i = 0; i < n; ++i) {
        *(p+i)=*((*v).p+i);
    }
}
bool Vecteur::operator==(Vecteur v){

    if (n!=v.n){
        return false;
    }
    for (int i = 0; i <n ; ++i) {
        if (*(p+i)!=*(v.p+i)){
            return false;
        }

    }
    return true;
}
bool Vecteur::operator!=(Vecteur v){
    return !operator==(v);
}
Vecteur Vecteur::operator+=(Vecteur v){
    if (n!=v.n){
        std::cout<<"Wrong size"<<std::endl;
        return *this;
    }
    for (int i = 0; i <n ; ++i) {
        *(p+i)+=*(v.p+i);
    }
    return *this;
}
Vecteur Vecteur::operator=(Vecteur v){
    if (n!=v.n){
        n=v.n;
        this->p=new int[v.n];
    }
    for (int i = 0; i <n ; ++i) {
        *(p+i)=*(v.p+i);
    }
    return *this;
}
Vecteur Vecteur::operator*(Vecteur v){

}
Vecteur Vecteur::operator-=(Vecteur v){
    if (n!=v.n){
        std::cout<<"Wrong size"<<std::endl;
        return *this;
    }
    for (int i = 0; i <n ; ++i) {
        *(p+i)-=*(v.p+i);
    }
    return *this;
}
Vecteur Vecteur::operator/=(Vecteur v){
    if (n!=v.n){
        std::cout<<"Wrong size"<<std::endl;
        return *this;
    }
    for (int i = 0; i <n ; ++i) {
        *(p+i)/=*(v.p+i);
    }
    return *this;
}
Vecteur Vecteur::operator*=(Vecteur v){
    if (n!=v.n){
        std::cout<<"Wrong size"<<std::endl;
        return *this;
    }
    for (int i = 0; i <n ; ++i) {
        *(p+i)*=*(v.p+i);
    }
    return *this;
}
void Vecteur::setP(int* coords){
    this->p=coords;
}

int Vecteur::operator[](const int i) {
    return *(p+i);
}
