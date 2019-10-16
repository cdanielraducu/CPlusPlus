#include "planta.h"
using namespace std;

Planta::Planta(){
    inaltime  = 0;
    frunze = 0;
    culoare = "";
}

Planta::Planta(int inaltime, int frunze, string culoare){
    this->inaltime = inaltime;
    this->frunze = frunze;
    this->culoare = culoare;
}

Planta::Planta(int inaltime, string culoare) : inaltime(inaltime), culoare(culoare), frunze(0){}

int Planta:: getInaltime(){
    return inaltime;
}
int Planta:: getFrunze(){
    return frunze;
}
string Planta:: getCuloare(){
    return culoare;
}
void Planta:: setInaltime(int inaltime){
    this->inaltime = inaltime;
}
void Planta:: setFrunze(int frunze){
    this->frunze = frunze;
}
void Planta:: setCuloare(string culoare){
    this->culoare = culoare;
}
void Planta:: cresteFrunze(int nr){
    this->frunze +=nr;
}
