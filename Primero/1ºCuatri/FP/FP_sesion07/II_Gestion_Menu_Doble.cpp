/****************************************************************************
	FUNDAMENTOS DE PROGRAMACI�N

	Miguel �ngel De La Vega Rodr�guez    |	Grupo A1
	Escribir un programa en el que se presente un men� principal para que el usuario
    pueda elegir entre las siguientes opciones:
        A�>Calcular adici�n. 
        P�>Calcular producto. 
        X�>Salir.
    Si el usuario elige en el men� principal:
    a) Salir, el programa terminar� su ejecuci�n.
    b) Calcular adici�n se presenta un men� (secundario) para que el usuario pueda elegir entre las siguientes opciones:
        S�>Calcular suma. 
        R�>Calcular resta. 
        X�>Salir.
    c) Calcular producto se presenta un men� (secundario) para que el usuario pueda elegir entre las siguientes opciones:
        M�>Calcular multiplicaci�n. 
        D�>Calcular divisi�n entera. 
        R�>Calcula resto.
        X�>Salir.
	
	Entradas: 
	Salidas: 
	
	

****************************************************************************/

#include <iostream> //Inclusi�n de los recursos de E/S

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
	//C�lculos



	//Salida
	


	return 0;
}

