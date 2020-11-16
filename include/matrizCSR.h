#ifndef _MATRIZ_CSR_H
#define _MATRIZ_CSR_H

#include <iostream>
#include <vector>
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
        MatrizCSR();
        ~MatrizCSR();
        MatrizCSR(int f, int c, int nn);
        MatrizCSR(const MatrizCSR &m);
        MatrizCSR& operator=(const MatrizCSR &m);
        //OTRO COMENTARIO <> <<<>>> 
};
#endif
