/****************************************************************************
	FUNDAMENTOS DE PROGRAMACIÓN

	Miguel Ángel De La Vega Rodríguez    |	Grupo A1
	Encapsule en la clase Lector las funciones escritas en los ejercicios 17 y 
	18 de la Relación de Problemas III. El objetivo es disponer de una clase 
	(Lector) que ofrezca un conjunto de métodos seguros de lectura etiquetada 
	de datos int y double.

	Entradas: 
	Salidas: 
	
	

****************************************************************************/

#include <iostream> //Inclusión de los recursos de E/S

using namespace std;



class Lector{	
private:
	string titulo;
public:
	
	//Constructor
	Lector(string cad=" "){
		titulo = cad;
	}
	
	/**************************************************************************
	*Funcion que lee un numero entero
	*Parametros: string que indica el texto a mostrar para leer el numero
	*Devuelve: Numero entero leido
	**************************************************************************/
	int LeeEntero (){
		string entero;
		bool es_entero = true;
		do{
			cout << titulo; //Imprime el mensaje
			cin >> entero;
			es_entero = true;
			//Comprobamos que el primer digito sea un entero o el signo -/+
			if ( ( isdigit(entero[0]) || entero[0] == 45 || entero[0] == 43) 
			== false){
				es_entero = false;
			}
			//Si el numero es: -/+
			else if ((entero[0] == 45 || entero[0] == 43 ) && entero.length() 
			== 1){ 
				es_entero = false;
			}
			
			for (int i = 1; i < (int)entero.length(); i++){
				//Para cada posicion del string comprobamos si es un numero
				if (isdigit(entero[i]) == false){
					es_entero = false;
				}
			}	
		}while(!es_entero);
		return stoi(entero);
	}

	/**************************************************************************
	*Funcion que lee un numero entero en un rango determinado
	*Parametros: string que indica el texto a mostrar para leer el numero,
	*numeros inferior y superior del rango
	*Devuelve: Numero entero leido en rango
	**************************************************************************/
	int LeeEnteroEnRango (int menor, int mayor){
		int entero;
		//Mensaje para pasarle a la funcion LeeEntero
		titulo = titulo + "(La hora debe ser mayor que " 
		+ to_string(menor) + " y menor que " + to_string(mayor) + "):";
		do{
			entero = LeeEntero();
			//Repetir mientras este fuera del intervalo
		}while (entero > mayor || entero < menor); 
		return entero;
	}


	/**************************************************************************
	*Funcion que lee un numero entero mayor o igual a otro numero
	*Parametros: string que indica el texto a mostrar para leer el numero,
	*numero de referencia para ser mayor o igual
	*Devuelve: Numero entero leido
	**************************************************************************/
	int LeeEnteroMayorOIgual (int referencia){
		int entero;
		//Mensaje para pasarle a la funcion LeeEntero
		titulo = titulo + "(El numero debe ser mayor o igual que " 
		+ to_string(referencia) + "):";
		do{
			entero = LeeEntero();
			//Repetir mientras sea menor que referencia
		}while (entero < referencia); 
		return entero;
	}
	void SetTitulo(string cad){
		titulo = cad;
	}
};





int main() //Programa principal
{

	// Lectura de un entero
	Lector lector_temp("Temperatura: ");
	int temp = lector_temp.LeeEntero();
	cout << "Temperatura leida = " << temp << endl;
	
	
	// Lectura de enteros acotados superior e inferiormente
	Lector lector_hora;
	lector_hora.SetTitulo ("Introduzca hora: ");
	int h = lector_hora.LeeEnteroEnRango (0, 23);
	lector_hora.SetTitulo ("Introduzca minuto: ");
	int m = lector_hora.LeeEnteroEnRango (0, 59);
	lector_hora.SetTitulo ("Introduzca segundo: ");
	int s = lector_hora.LeeEnteroEnRango (0, 59);
	cout << "Hora: " << h << ":" << m << ":" << s << endl;
	
	
	// Lectura de un entero acotado inferiormente
	Lector lector_ingreso("Cantidad a ingresar: ");
	int ingreso = lector_ingreso.LeeEnteroMayorOIgual (0);
	cout << "Valor del ingreso = " << ingreso << endl;
	


	return 0;
}

