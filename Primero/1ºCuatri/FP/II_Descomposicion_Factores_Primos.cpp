/****************************************************************************
	FUNDAMENTOS DE PROGRAMACIÓN

	Miguel Ángel De La Vega Rodríguez    |	Grupo A1
	
	
	Entradas: 
	Salidas: 
	
	

****************************************************************************/

#include <iostream> //Inclusión de los recursos de E/S

using namespace std;

int main() //Programa principal
{
    int numero;

	//Entrada de datos
	
	do {
        cout << "Introduzca el numero: ";
        cin >> numero;
    }while(numero<0) //Filtro para que numero>0
	
	//Cálculos

    cout << numero << " Se puede factorizar en numero primos como: ";

    for (int i=1;terminar_bucle != true; i++){
        while (numero%i == 0){
            cout << i;
            numero = numero/i;
        }
    }
	
	return 0;
}

