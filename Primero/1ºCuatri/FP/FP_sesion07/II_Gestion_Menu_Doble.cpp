/****************************************************************************
	FUNDAMENTOS DE PROGRAMACIÓN

	Miguel Ángel De La Vega Rodríguez    |	Grupo A1
	Escribir un programa en el que se presente un menú principal para que el usuario
    pueda elegir entre las siguientes opciones:
        A–>Calcular adición. 
        P–>Calcular producto. 
        X–>Salir.
    Si el usuario elige en el menú principal:
    a) Salir, el programa terminará su ejecución.
    b) Calcular adición se presenta un menú (secundario) para que el usuario pueda elegir entre las siguientes opciones:
        S–>Calcular suma. 
        R–>Calcular resta. 
        X–>Salir.
    c) Calcular producto se presenta un menú (secundario) para que el usuario pueda elegir entre las siguientes opciones:
        M–>Calcular multiplicación. 
        D–>Calcular división entera. 
        R–>Calcula resto.
        X–>Salir.
	
	Entradas: 
	Salidas: 
	
	

****************************************************************************/

#include <iostream> //Inclusión de los recursos de E/S

using namespace std;

int main() //Programa principal
{
    char eleccion;

	//Entrada de datos

	// Menu de opciones 
	cout << "\n\nMenu de Opciones" << endl;        
    cout << "\t[A] Calcular adicion" << endl;
    cout << "\t[P] Calcular producto" << endl;
    cout << "\t[X] Salir" << endl;

    // Menu de la suma
	cout << "\n\nMenu de Adicion" << endl;        
    cout << "\t[S] Calcular suma" << endl;
    cout << "\t[R] Calcular resta" << endl;
    cout << "\t[X] Salir" << endl;

    //Menu del producto
    do{
    cout << "\n\nMenu de Producto" << endl;        
    cout << "\t[M] Calcular Multiplicacion" << endl;
    cout << "\t[D] Calcular Division entera" << endl;
    cout << "\t[R] Calcular Resto"
    cout << "\t[X] Salir" << endl;
    }while(eleccion!='X')
	//Cálculos



	//Salida
	


	return 0;
}

