#include <iostream>
#include <cstdlib>
using namespace std;
void InicializarPila(int pila[]);
int LongitudPila(int pila[]);
bool estavaciapila(int pila[]);
bool estallenapila(int pila[]);
void addpila(int pila[]);
void sacardelapila(int pila[],int longitud);
void escribirpila(int pila[]);
int main()
{
    int opcion;
    int longitud;
    bool repetir = true;
    int pila[10];
    InicializarPila(pila);
    
    do {
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Añadir elemento a la pila" << endl;
        cout << "2. Sacar elemento de la pila" << endl;
        cout << "3. Longitud de la pila" << endl;
        cout << "4. Mostrar pila" << endl;
        cout << "0. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
            	addpila(pila);
            break;

            case 2:
            	sacardelapila(pila,longitud);
            break;
                
            case 3:
            	longitud=LongitudPila(pila);
                cout << longitud <<endl;      
            break;
                
            case 4:
				escribirpila(pila);        
            break;
            
            case 0:
            	repetir = false;
            	break;
        }        
    } while (repetir);
	 
    return 0;
}
void InicializarPila(int pila[]){
	for (int i=0;i<10;i++)
		pila[i]=-1;
}
int LongitudPila(int pila[]){
	int contador=0;
	for (int i=0;i<10;i++)
		if (pila[i]!=-1)
		contador+=1;
return contador;
}
bool estavaciapila(int pila[]){
	if (LongitudPila(pila)==0)
		return true;
	else 
		return false;	
}
bool estallenapila(int pila[]){
	if (LongitudPila(pila)==10)
		return true;
	else 
		return false;
}
void addpila(int pila[]){
	if (estallenapila(pila)==false){
		cout << "Añadir elemento a la pila: "<<endl;
		cin >> pila[LongitudPila(pila)];}
	else
		cout << "Error, la pila esta vacia";
		
}
void sacardelapila(int pila[],int longitud){
	if (estavaciapila(pila)==false){
		cout << "El ultimo elemento es: "<<pila[longitud]<<endl;
		pila[longitud]=-1;
		}
	else 
		cout << "Error, la pila esta vacia";
}
void escribirpila(int pila[]){
	for (int i=0;i<10;i++)
		cout << pila[i];
}
