/****************************************************************************
	FUNDAMENTOS DE PROGRAMACI�N
	
	Miguel �ngel De La Vega Rodr�guez    |	Grupo A1
	Escribir un programa que lea un n�mero entero positivo y muestre su 
	descomposici�n en factores primos.
	H�galo de manera que se calcule y muestre el resultado de dos maneras:
	a) La primera (m�s sencilla) consiste en enumerar todos los primos de la 
	descomposici�n (en el caso de que un primo intervenga m�s de una vez se 
	mostrar� tantas veces como sea preciso). 
	Por ejemplo:
	360 = 2 * 2 * 2 * 3 * 3 * 5
	121 = 11 * 11
	11 = 11
	
	b) La segunda consiste en expresar el resultado como el producto de 
	potencias (en el caso de que un primo intervenga m�s de una vez se mostrar�
	una potencia cuya base sea el valor del primo y el exponente ser� el n�mero 
	de veces que se repite). Evite potencias triviales (de exponente 1) 
	escribiendo, en ese caso, �nicamente la base (el valor del primo). 
	Por ejemplo:
	360 = 2^3 * 3^2 * 5
	121 = 11^2
	11 = 11

	Entradas: Valor del numero entero
	Salidas: Descomposicion en factores primos con dos notaciones
	
	
	
****************************************************************************/

#include <iostream> //Inclusi�n de los recursos de E/S

using namespace std;

int main() //Programa principal
{
    int numero;
    int numerob;
    bool terminar_bucle = false;
    bool terminar_bucle2 = false;
	int potencia;
	//Entrada de datos
	
	do {
        cout << "Introduzca el numero: ";
        cin >> numero;
    }while(numero<=0); //Filtro para que numero>0
    
	numerob = numero;
	//C�lculos
	
	/*___________________________Manera a)___________________________________*/
	
    cout << numero << " Factorizado manera a) : ";
    
	if (numero==1){
		cout << 1;
	}
	else{
	    for (int i=2;terminar_bucle != true; i++){
	        while (numero%i == 0){
	        	numero = numero/i;
	        	if (numero != 1){
		            cout << i << " * ";
	            }
	            else if (numero ==1){
	            	cout << i;	
				}
	        }
	        if (numero == 1){
	            terminar_bucle = true; //Terminamos el bucle
	        }
	    }
    }
    
    /*___________________________Manera b)___________________________________*/
    
	cout << endl << numerob << " Factorizado manera b) : ";
	if (numerob==1){
		cout << 1;
	}
	else{
	    for (int j=2;terminar_bucle2 != true; j++){
	    	potencia = 0;
	        while (numerob%j == 0){
	            potencia++;
	            numerob = numerob/j;
	        }
	        if (numerob !=1){
		        if (potencia > 1){
		        	cout << j << "^" << potencia << " * ";	
				}
				else if (potencia == 1){
					cout << j << " * ";
				}
		        if (numerob == 1){
		            terminar_bucle2 = true; //Terminamos el bucle
	        	}
	        }
	        else if (numerob ==1){
	        	if (potencia > 1){
		        	cout << j << "^" << potencia;	
				}
				else if (potencia == 1){
					cout << j;
				}
		        if (numerob == 1){
		            terminar_bucle2 = true; //Terminamos el bucle
	        	}	
			}
	    }
    }
	
	return 0;
}

