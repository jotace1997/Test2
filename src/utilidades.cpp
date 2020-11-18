#include "../include/utilidades.h"
#include <iostream>
using namespace std;

istream& operator>>(istream &entrada, vector<long double> &v)
{
    string linea;
    
    while (getline(entrada, linea))     //Mientras queden lineas en el archivo guardar linea en linea
        v.push_back(stold(linea));      //Introducimos el valor en el vector; stold() convierte un string a un long double

    return entrada;
}

ostream& operator<<(ostream &salida, vector<long double> &v)
{
    for(int i=0; i<v.size(); i++)
        salida << v[i] << endl;

    return salida;
}   

vector<long double> operator+(const vector <long double> &v1, const vector <long double> &v2)
{
    vector<long double> v;
    
    v.assign(v1.size(), 0.0);

    for(int i=0; i<v1.size(); i++)
        v[i]= v1[i] + v2[i];
        //v.push_back(v1[i] + v2[i]);

    return v;
}

vector<long double> operator-(const vector <long double> &v1, const vector <long double> &v2)
{
    vector<long double> v;

    v.assign(v1.size(), 0.0);

    for(int i=0; i<v1.size(); i++)
        v[i]= v1[i] - v2[i];
        //v.push_back(v1[i] - v2[i]);

    return v;
}

void Suma(const vector <long double> &v1, const vector <long double> &v2, vector<long double> &v)
{
    v.erase(v.begin(), v.end());

    for(int i=0; i<v1.size(); i++)
        v.push_back(v1[i] + v2[i]);
}

void Resta(const vector <long double> &v1, const vector <long double> &v2, vector<long double> &v)
{
    v.erase(v.begin(), v.end());

    for(int i=0; i<v1.size(); i++)
        v.push_back(v1[i] - v2[i]);
}

long double NormaInfinito(const vector<long double> &v)
{
    long double max= abs(v[0]); 

    for(int i=1; i<v.size(); i++)
        if(abs(v[i])>max)
            max= abs(v[i]);

    return max;
}

void Precondicionador(MatrizCSR &m, vector<long double> &v)
{
    
}