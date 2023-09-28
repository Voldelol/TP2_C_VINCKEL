//
// Created by fvinc on 9/27/2023.
//

#include "Vecteur.h"
#include <iostream>
#include <valarray>
#include <climits>

Vecteur::Vecteur(int n)  {
    this->n=n;
    this->p=new int[n];
}
Vecteur::Vecteur(const Vecteur& v) {  // Constructeur de copie
    this->n = v.n;
    this->p = new int[n];
    for (int i = 0; i < n; ++i) {
        p[i] = v.p[i];
    }
}
void Vecteur::adjustSizeTo( Vecteur& v) {
    if (n < v.n) {
        int *newP = new int[v.n];
        for (int i = 0; i < n; ++i) {
            newP[i] = p[i];
        }
        for (int i = n; i < v.n; ++i) {
            newP[i] = static_cast<int>(std::pow(10, -10));
        }
        delete[] p;
        p = newP;
        n = v.n;
    } else if (n > v.n) {
        v.adjustSizeTo(*this);
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
    adjustSizeTo(v);
    for (int i = 0; i <n ; ++i) {
        *(p+i)+=*(v.p+i);
    }
    return *this;
}
Vecteur Vecteur::operator=(Vecteur v){
    adjustSizeTo(v);
    for (int i = 0; i <n ; ++i) {
        *(p+i)=*(v.p+i);
    }
    return *this;
}
Vecteur Vecteur::operator*(Vecteur v) {
    adjustSizeTo(v);

    Vecteur result(n);
    for (int i = 0; i < n; ++i) {
        result.p[i] = this->p[i] * v.p[i];
    }

    return result;
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
Vecteur Vecteur::operator-(Vecteur v) {
    adjustSizeTo(v);

    Vecteur result(n);
    for (int i = 0; i < n; ++i) {
        result.p[i] = this->p[i] - v.p[i];
    }

    return result;
}

Vecteur Vecteur::operator/(Vecteur v) {
    adjustSizeTo(v);

    Vecteur result(n);
    for (int i = 0; i < n; ++i) {
        if (v.p[i] != 0) {  // Gérer la division par zéro
            result.p[i] = this->p[i] / v.p[i];
        } else {
            //pour le cas dela division par zéro , on mets l'entier maximal
            result.p[i] = INT_MAX;
        }
    }

    return result;
}
void Vecteur::setP(int* coords){
    this->p=coords;
}

int Vecteur::operator[](const int i) {
    return *(p+i);
}
