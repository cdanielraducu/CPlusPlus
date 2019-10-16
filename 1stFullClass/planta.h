#ifndef PLANTA_H_INCLUDED
#define PLANTA_H_INCLUDED

#include<bits/stdc++.h>
using namespace std;
class Planta
{
private:
    int frunze;
    int inaltime;
    string culoare;

public:
    Planta();
    Planta(int inaltime, int frunze, string culoare);
    Planta(int inaltime, string culoare);

public:
    int getInaltime();
    int getFrunze();
    string getCuloare();

    void setInaltime(int inaltime);
    void setFrunze(int frunze);
    void setCuloare(string culoare);
    void cresteFrunze(int nr);
};

#endif // PLANTA_H_INCLUDED
