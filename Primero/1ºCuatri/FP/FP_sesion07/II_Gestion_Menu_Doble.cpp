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
	
	Entradas: valor de eleccion
	Salidas: 
	
	

****************************************************************************/

#include <iostream> //Inclusi�n de los recursos de E/S

using namespace std;

int main() //Programa principal
{
    char eleccion;
    bool salir_bucle = false;
    double numero1;
    double numero2;
    double resultado;
    bool es_entero;

	//Entrada de datos

	// Menu de opciones
    do{
        cout << "\n\nMenu de Opciones" << endl;        
        cout << "\t[A] Calcular adicion" << endl;
        cout << "\t[P] Calcular producto" << endl;
        cout << "\t[X] Salir" << endl;
        cin >> eleccion;
        switch (eleccion){
            case 'A':
                // Menu de la suma
                do{
                    cout << "\n\nMenu de Adicion" << endl;        
                    cout << "\t[S] Calcular suma" << endl;
                    cout << "\t[R] Calcular resta" << endl;
                    cout << "\t[X] Salir" << endl;
                    switch (eleccion){
                        case 'S':
                            cout << "Introduzca el numero 1: ";
                            cin >> numero1;
                            cout << "Introduzca el numero 2: ";
                            cin >>numero2;
                            resultado = numero1 + numero2;
                            break;                        
                        case 'R':
                            cout << "Introduzca el numero 1: ";
                            cin >> numero1;
                            cout << "Introduzca el numero 2: ";
                            cin >>numero2;
                            resultado = numero1 - numero2;
                            cout << "Resultado: " << resultado << endl;
                            break;
                        default:
                            cout << "Opcion no valida" << endl;
                            break;
                    }while(eleccion!='X')
                }while(eleccion!='X')
                break;
            case 'P':        
                //Menu del producto
                do{
                    cout << "\n\nMenu de Producto" << endl;        
                    cout << "\t[M] Calcular Multiplicacion" << endl;
                    cout << "\t[D] Calcular Division entera" << endl;
                    cout << "\t[R] Calcular Resto"
                    cout << "\t[X] Salir" << endl;
                    switch(eleccion){
                        case 'M':
                            cout << "Introduzca el numero 1: ";
                            cin >> numero1;
                            cout << "Introduzca el numero 2: ";
                            cin >> numero2;
                            resultado = numero1*numero2;
                            cout << "Resultado: " << resultado << endl;
                            break;
                        case 'D':
                            cout << "Introduzca el numero 1: ";
                            cin >> numero1;
                            cout << "Introduzca el numero 2: ";
                            cin >> numero2;
                            resultado = (int)numero1/(int)numero2;
                            cout << "Resultado: " << resultado << endl;
                            break;
                        case 'R':
                            cout << "Introduzca el numero 1: ";
                            cin >> numero1;
                            cout << "Introduzca el numero 2: ";
                            cin >> numero2;
                            resultado = (int)numero1%(int)numero2;
                            cout << "Resultado: " << resultado << endl;
                            break;
                        default:
                            cout << "Opcion no valida";
                            break;
                    }
                }while(eleccion!='X')
                break;
            case 'X':
                salir_bucle=true;
                break;
            default:
                cout << "Opcion no valida" << endl;
                break;
        }
    while(salir_bucle!=true)
	//C�lculos



	//Salida
	


	return 0;
}

