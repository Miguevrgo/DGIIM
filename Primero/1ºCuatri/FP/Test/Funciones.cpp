#include <iostream>
using namespace std;


double Suma (double a, double b){ //Cabecera de la funcion 
//Podemos "Pasar por referencia" que consiste en poner el simbolo $ antes de la 
//declaracion de las variables para usarlas de manera global y no local
	return (a+b); 
}

double Resta(double a, double b){
	return (a-b);
}

double Producto(double a, double b){
	return (a*b);
}
double Division(int a, int b){
	return (a/b);
}

int main(){
	char eleccion;
	double numero1,numero2;

	// Menu de opciones
    do{
        cout << "\nMenu de Opciones" << endl;        
        cout << "[A] Calcular adicion" << endl; 
        cout << "[P] Calcular producto" << endl;
        cout << "[X] Salir" << endl;
        cin >> eleccion;
		eleccion = toupper(eleccion);
        switch (eleccion){
            case 'A': //Calcular Adicion
                // Menu de la suma
                do{
                	salir_menu1 = false; //Reseteo salir menu
                    cout << "\nMenu de Adicion" << endl;        
                    cout << "[S] Calcular suma" << endl;
                    cout << "[R] Calcular resta" << endl;
                    cout << "[X] Salir" << endl;
                    cin >> eleccion;
					eleccion = toupper(eleccion);
                    switch (eleccion){
                        case 'S': //Suma
                            cout << "Introduzca el numero 1: ";
                            cin >> numero1;
                            cout << "Introduzca el numero 2: ";
                            cin >> numero2;
                            cout << "Resultado: " << Suma(numero1,numero2) 
								 << endl;
                            break;                        
                        case 'R': //Resta
                            cout << "Introduzca el numero 1: ";
                            cin >> numero1;
                            cout << "Introduzca el numero 2: ";
                            cin >>numero2;
                            cout << "Resultado: " << Producto(numero1,numero2) 
								 << endl;
                            break;
                        case 'X': //Salir
                            salir_menu1 = true;
                            break;
                        default:
                            cout << "Opcion no valida" << endl;
                            break;
                    }
                }while(!salir_menu1);
                break;
            case 'P': //Calcular Producto       
                //Menu del producto
                do{
                	salir_menu2 = false; //Reseteo salir menu
                    cout << "\nMenu de Producto" << endl;        
                    cout << "[M] Calcular Multiplicacion" << endl;
                    cout << "[D] Calcular Division entera" << endl;
                    cout << "[R] Calcular Resto" << endl;
                    cout << "[X] Salir" << endl;
                    cin >> eleccion;
					eleccion = toupper(eleccion);
                    switch(eleccion){
                        case 'M': //Multiplicacion
                        	do{
                        		cout << "Introduzca el numero 1: ";
                            	cin >> numero1;
							}while (numero1<0);
                            do{
                        		cout << "Introduzca el numero 2: ";
                            	cin >> numero2;
							}while (numero2<0);
                            cout << "Resultado: " << Producto(numero1,numero2) 
								 << endl;
                            break;
                        case 'D': //Division entera
                            do{
                        		cout << "Introduzca el numero 1: ";
                            	cin >> numero1;
							}while (numero1<0);
                            do{
                        		cout << "Introduzca el numero 2: ";
                            	cin >> numero2;
							}while (numero2<0);
                            cout << "Resultado: " << Division(numero1,numero2) 
								 << endl;
                            break;
                        case 'R': //Resto
                            do{
                        		cout << "Introduzca el numero 1: ";
                            	cin >> numero1;
							}while (numero1<0);
                            do{
                        		cout << "Introduzca el numero 2: ";
                            	cin >> numero2;
							}while (numero2<0);
                            for (j=(int)numero1; j>=0 ;j = j-(int)numero2){
                            	resultado = j;
							}
                            cout << "Resultado: " << resultado << endl;
                            break;
                        case 'X':
                            salir_menu2 = true;
                            break;
                        default:
                            cout << "Opcion no valida";
                            break;
                    }
                }while(!salir_menu2);
                break;
            case 'X':
                salir_bucle=true;
                break;
            default:
                cout << "Opcion no valida" << endl;
                break;
        }
    }while(!salir_bucle);

	cout << "Has salido del menu";
	return 0;
}
