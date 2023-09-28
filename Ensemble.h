//
// Created by fvinc on 9/27/2023.
//

#ifndef UNTITLED1_ENSEMBLE_H
#define UNTITLED1_ENSEMBLE_H


#include <iostream>

class Ensemble {
private:
    int x;
    Ensemble *previous;
    Ensemble *next;
public:
    Ensemble(int x, Ensemble *previous, Ensemble *next);
    Ensemble(Ensemble* e);
    int count();

    void add(int x);

    void show();

    void remove(int x);
    bool operator==(Ensemble e);
    bool operator!=(Ensemble e);
    Ensemble operator=(Ensemble* e);
};

#endif //UNTITLED1_ENSEMBLE_H
