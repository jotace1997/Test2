#ifndef _UTILIDADES_H_
#define _UTILIDADES_H_

#include <fstream>
#include <vector>
#include <math.h>
#include <string>
using namespace std;

istream& operator>>(istream &entrada, vector<long double> &v);  //Lectura de un vector
ostream& operator<<(ostream &salida, vector<long double> &v);   //Escritura de un vector

//Suma y resta de vectores
vector<long double> operator+(const vector <long double> &v1, const vector <long double> &v2);
vector<long double> operator-(const vector <long double> &v1, const vector <long double> &v2);

void Resta(const vector <long double> &v1, const vector <long double> &v2, vector<long double> &v);
void Suma(const vector <long double> &v1, const vector <long double> &v2, vector<long double> &v);

long double NormaInfinito(const vector<long double> &v);        //Devuelver el máximo valor absoluto de un vector

#endif