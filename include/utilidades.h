#ifndef _UTILIDADES_H_
#define _UTILIDADES_H_

#include <fstream>
#include <vector>
#include <math.h>
#include <string>
#include "matrizCSR.h"
using namespace std;

istream& operator>>(istream &entrada, vector<long double> &v);  //Lectura de un vector
ostream& operator<<(ostream &salida, vector<long double> &v);   //Escritura de un vector

//Suma y resta de vectores
vector<long double> operator+(const vector <long double> &v1, const vector <long double> &v2);
vector<long double> operator-(const vector <long double> &v1, const vector <long double> &v2);

long double NormaInfinito(const vector<long double> &v);                    //Devuelver el máximo valor absoluto de un vector

void Precondicionar(vector<long double> &v, const vector<long double> &P);  //Multiplica los elementos de v por P y los guarda en v

#endif