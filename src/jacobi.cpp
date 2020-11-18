#include <iostream>
#include "../include/matrizCSR.h"
#include "../include/utilidades.h"
#include <fstream>
#include <sys/time.h>

using namespace std;

int main(int argc, char **argv)
{
    //Declaración de datos
    MatrizCSR A, noD;
    vector<long double> b, aux, x0, x1, aux1;
    long double tolerancia, e;
    bool salir=false;
    int iteraciones=0;
    ifstream datosMatriz, datosVector;
    ofstream solucionVector;
    string coeficientes, vectorDerecho, aproximacionInicial;
    string linea= "", sol;
    struct timeval t0, t1;
    long double tiempo;

    //Inicializar los path para la lectura/escritura de archivos
    coeficientes= argv[1];
    vectorDerecho= argv[2];
    aproximacionInicial= argv[3];
    while(coeficientes[iteraciones]!='.')
    {
        linea+= coeficientes[iteraciones];
        iteraciones++;
    }

    //Lectura de coeficientes
    datosMatriz.open(coeficientes);
    datosMatriz >> A;
    datosMatriz.close();

    //Lectura del vector derecho
    datosVector.open(vectorDerecho);
    datosVector >> b;
    datosVector.close();

    //Lectura de la aproximación inicial
    datosVector.open(aproximacionInicial);
    datosVector >> x0;
    datosVector.close();

    //Lectura dl umbral de error
    cout << "Umbral de error: ";
    cin >> e;

    cout << A << endl << b << endl << x0 << endl;
/*
    //ALGORITMO DE JACOBI
    gettimeofday(&t0, NULL);                    //PRIMERA MARCA DE TIEMPO
        noD= A.GetDiagonalInvertida();          //Calculamos la diagonal invertida
        tolerancia= e*NormaInfinito(b);         //Calculamos la tolerancia multiplicando el umbral de error por el valor más alto en valor absoluto del vector derecho        
        iteraciones= 0;                         //Inicializamos las iteraciones a 0 (sólo para depuración)
        do
        {      
            aux= b - A*x0;                      //Guardamos en aux el vector derecho menos el producto de la matriz de coeficientes por la aproximación inicial
            x1= x0 + noD*aux;                   // La nueva aproximación se calcula restandole a la aproximación inicial el producto de la inversa de la diagonal por la variable aux (Producto matriz-vector)

            if(NormaInfinito(aux)<tolerancia)   // Si el maximo del vector aux es menor que la tolerancia
                salir= true;                    // Salimos del bucle y damos x1 cómo una aproximación suficiente dado un umbral de error
            else                                // En caso contrario seguimos y                   
                x0= x1;                         // La aproximación inicial x0 pasa a ser la aproximación calculada en esta iteración x1

            iteraciones++;
        } while (!salir);
    gettimeofday(&t1, NULL);                    //SEGUNDA MARCA DE TIEMPO

    //Calculamos el tiempo que ha tardado el algoritmo en dar una aproximación valida
    tiempo = ((t1.tv_sec  - t0.tv_sec)*1000000u + t1.tv_usec - t0.tv_usec)/1.e6;

    //Guardamos la aproximación en un arhivo llamado solucion_ARCHIVO.dat 
    sol= "solucion_" + linea + ".dat";
    solucionVector.open(sol);
    solucionVector << x0;
    solucionVector.close(); 

    //Mostramos por pantalla información acerca de la ejecución del programa
    cout << "\n\n> METODO DE JACOBI:" << endl;
    cout << "\t> Fichero de datos: " << argv[1] << endl;
    cout << "\t> Umbral de error: " << e << endl;
    cout << "\t> Iteraciones: " << iteraciones << endl;
    cout << "\t> Tiempo: " << tiempo << endl;

*/
}