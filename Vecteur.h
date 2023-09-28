//
// Created by fvinc on 9/27/2023.
//

#ifndef UNTITLED1_VECTEUR_H
#define UNTITLED1_VECTEUR_H


class Vecteur {
    private:
        int* p;
        int n;
    public:
    Vecteur(int n);
    Vecteur(Vecteur* v);
    bool operator==(Vecteur v);
    bool operator!=(Vecteur v);
    Vecteur operator+=(Vecteur v);
    Vecteur operator*=(Vecteur v);
    Vecteur operator/=(Vecteur v);
    Vecteur operator-=(Vecteur v);
    Vecteur operator=(Vecteur v);
    Vecteur operator*(Vecteur v);
    int operator[](const int i);
    void setP(int* coords);
    int getN() const{return n;};

};


#endif //UNTITLED1_VECTEUR_H
