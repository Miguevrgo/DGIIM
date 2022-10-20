/****************************************************************************
	FUNDAMENTOS DE PROGRAMACI�N
	
	Miguel �ngel De La Vega Rodr�guez    |	Grupo A1
	
	
	Entradas: 
	Salidas: 
	
	
	
****************************************************************************/

#include <iostream> //Inclusi�n de los recursos de E/S

using namespace std;

int main() //Programa principal
{
    int numero;
    bool terminar_bucle = false;

	//Entrada de datos
	
	do {
        cout << "Introduzca el numero: ";
        cin >> numero;
    }while(numero<=0); //Filtro para que numero>0
	
	//C�lculos

    cout << numero << " Se puede factorizar en numero primos como: ";
	if (numero==1){
		cout << 1;
	}
	else{
	    for (int i=2;terminar_bucle != true; i++){
	        while (numero%i == 0){
	            cout << i << " ";
	            numero = numero/i;
	        }
	        if (numero == 1){
	            terminar_bucle = true; //Terminamos el bucle
	        }
	    }
    }
	
	return 0;
}

