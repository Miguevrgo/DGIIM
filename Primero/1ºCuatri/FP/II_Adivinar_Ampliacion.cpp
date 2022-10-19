/****************************************************************************

	
	Entradas: 
	Salidas: 
	

****************************************************************************/

#include <iostream> //Inclusi�n de los recursos de E/S
#include <ctime>
#include <cstdlib>

using namespace std;

int main() //Programa principal
{
	const int MAX = 100; //Numero maximo
	const int MIN = 0; //Numero minimo
	const int NUM_VALORES = MAX-MIN + 1; //N�mero de valores posibles
	const float TERMINADOR = MIN-1; //Valor para parar de adivinar
	const string mensaje_menor = "El numero introducido es menor que el " 
		   "numero a adivinar (Maximo:" + to_string(MAX) + " Minimo:" 
		  + to_string(MIN) + " Terminar:" + to_string(TERMINADOR) + "):";
	const string mensaje_mayor = "El numero introducido es mayor que el " 
		   "numero a adivinar (Maximo:" + to_string(MAX) + " Minimo:" 
		  + to_string(MIN) + " Terminar:" + to_string(TERMINADOR) + "):";
	int numero;
	time_t t;
	srand(time(&t)); // Inicializa generador de n�ms. aleatorios
					 // con el reloj del sistema (hora actual)
	int incognita;// N�mero aleatorio que se genera
	incognita = (rand() % NUM_VALORES) + MIN;
	
	//C�lculos
	
	do{
		cout << "Intente adivinar el numero: ";
	    cin >> numero;
	    if (numero < incognita){
	    	cout << mensaje_menor << endl; 
		}
		else if (numero > incognita){
			cout << mensaje_mayor << endl;
		}
		else{
			cout << "Felicidades, has acertado el numero!";
		}
	}while(numero != incognita || numero == TERMINADOR); // FUNCIONA???????????????????

	return 0;
}

