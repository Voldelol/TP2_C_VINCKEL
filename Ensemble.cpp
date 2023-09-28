//
// Created by fvinc on 9/27/2023.
//

#include "Ensemble.h"


Ensemble::Ensemble(int x, Ensemble *previous, Ensemble *next) {
    this->x = x;
    this->previous = previous;
    this->next = next;
}


int Ensemble::count() {
    int res = 1;

    Ensemble *temp = this;
    while (temp->next != nullptr) {

        res++;
        temp = temp->next;

    }
    temp->next = nullptr;
    std::cout << "nombre d'elements :";
    std::cout << res << std::endl;
    return res;
}

void Ensemble::add(int x) {
    Ensemble *temp = this;
    while (temp->next != nullptr) {
        temp = temp->next;

    }

    temp->next = new Ensemble(x, temp, nullptr);


}

void Ensemble::show() {

    Ensemble *temp = this;
    while (temp != nullptr) {

        std::cout << "Number is : ";
        std::cout << temp->x << std::endl;
        temp = temp->next;

    }

}

void Ensemble::remove(int x) {
    Ensemble *temp = this;
    while (temp->x != x) {
        temp = temp->next;

    }
    (temp->previous)->next = temp->next;
    (temp->next)->previous = temp->previous;

}

bool Ensemble::operator==(Ensemble e) {
    Ensemble *temp = this;
    Ensemble* ptr=&e;
    while (temp != nullptr) {

        if (temp->x!=ptr->x){
            return false;
        }
        temp=temp->next;
        ptr=ptr->next;
    }
    return true;
}
bool Ensemble::operator!=(Ensemble e) {
    return !operator==(e);
}
Ensemble Ensemble::operator=(Ensemble* e){
    Ensemble* temp=this;
    Ensemble* ptr=e;
    while (temp!= nullptr){
        temp->x=ptr->x;
        temp->next=e->next;
        temp->previous=e->previous;
        temp=temp->next;
        ptr=ptr->next;
    }
}
