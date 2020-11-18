#ifndef _MATRIZ_CSR_H
#define _MATRIZ_CSR_H

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class MatrizCSR
{
    private:
        int filas;
        int columnas;
        int noNulos;

        vector<long double> valores;
        vector<int> idColumnas;
        vector<int> ptrFilas;

    public:
        MatrizCSR();                                                    //Constructor por defecto
        ~MatrizCSR();                                                   //Destructor por defecto
        MatrizCSR(int f, int c, int nn);                                //Constructor por parametros inicializa las variables y reserva memoria para los vectores
        MatrizCSR(const MatrizCSR &m);                                  //Constructor de copia, copia la matriz m.        

        MatrizCSR& operator=(const MatrizCSR &m);                       //Sobrecarga del operador de igualdad
        vector<long double> operator*(const vector<long double> &v);   //Multiplica una matriz por un vector !!MAYOR CONSUMO DE TIEMPO!!
        MatrizCSR operator*(const MatrizCSR &m);

        int GetColumnas() const { return columnas; }                    //Devuelve las columnas de la matriz
        int GetFilas() const { return filas; }                          //Devuelve las filas de la matriz
        vector <long double> GetNoDiagonal() const;                       //Devuelve un vector con la diagonal de la matriz
        MatrizCSR GetDiagonalInvertida() const;                        //Devuelve una matriz con la diagonal invertida

        void Precondicionar(const vector<long double> &v);              //Multiplica la matriz original por una diagonal invertida, la diagonal se pasa en forma de vector por eficiencia de las operaciones

        friend ostream& operator<<(ostream &salida,  MatrizCSR &m);     //Entra una matriz en formato CSR y la escribe en formato matrixmarket
        friend istream& operator>>(istream &entrada, MatrizCSR &m);     //Entra una matriz en formato matrixmarket y la lee en formato CSR
};
#endif
