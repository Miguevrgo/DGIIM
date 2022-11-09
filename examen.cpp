/***************************************************************************/
// DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION E INTELIGENCIA ARTIFICIAL
// CURSO 2022-20223
//
// FUNDAMENTOS DE PROGRAMACION
// DOBLE GRADO EN INGENIERIA INFORMATICA Y MATEMÁTICAS
//
// EXAMEN PRACTICO 1 - NOVIEMBRE 2022
// 
// ¡RELLENAD LOS SIGUIENTES DATOS!
//
// Apellidos:   De la Vega Rodriguez 
// Nombre:  Miguel Angel
//
// GRUPO DE PRACTICAS: 1 / 2
//
// Fecha: 9/11/2022
// Aula: Aula P1
// Ordenador (ver etiqueta): ei143104
//
/***************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

// --> RECUERDE QUE NO PUEDE USAR STRING

using namespace std;

/***************************************************************************/
/***************************************************************************/



/***************************************************************************
*Funcion que calcula la cantidad de cifras de un numero
*Parametros: Numero cuyas cifras se quieren saber
*Devuelve: Numero de cifras del numero
****************************************************************************/
int Cifras_num(int i){
    int num_cifras = 1; //Cuenta el numero de cifras que tiene el numero
    bool terminar = false;
    while (!terminar){
        i = i/10; 
        if (i>0){
            num_cifras++; //Incrementa el numero de cifras del numero
        }
        else{ //cuando el numero i sea < 0 habremos llegado ya a las unidades
            terminar=true;  //Termina el bucle  
        }
    }
    return num_cifras;
}

/***************************************************************************
*Funcion que divide un numero en su mitad izquierda
*Parametros: numero a dividir,cantidad de cifras del numero
*Devuelve: Parte izquierda del numero (num_izq)
****************************************************************************/
int Div_num_izq(int i){
    int num_izq;
    int cifras = Cifras_num(i);
    if (cifras%2 == 0){
        cifras = cifras/2; //Cuando el numero es par
    }
    else{
        cifras = (cifras/2)+1; //Impar: hay que aniadir una cifra
    }
    num_izq = i/(pow(10,cifras)); //Eliminamos las cifras que no nos interesan
    return num_izq;
}

/***************************************************************************
*Funcion que divide un numero en su mitad derecha
*Parametros: numero a dividir, cantidad de cifras del numero
*Devuelve: Parte derecha del numero (num_der)
****************************************************************************/
int Div_num_der(int i){
    int num_der;
    int cifras = Cifras_num(i);
    if (cifras%2 == 0){ //Numero de cifras es par
        cifras = cifras/2;
        num_der = i-(Div_num_izq(i)*(pow(10,cifras))); //Obtiene cifras derecha
    }
    else{ //Numero de cifras es impar
        cifras = (cifras/2)+1; 
        num_der = i-(Div_num_izq(i)*(pow(10,cifras))); //Obtiene cifras derecha
    }
    return num_der;
}

/***************************************************************************
*Funcion que suma la parte izquierda y derecha de un numero
*Parametros: Numero cuyas partes se quieren sumar
*Devuelve: el valor de la suma de ambas partes
****************************************************************************/
int Suma_dos_partes(int i){
    int suma;
    suma = Div_num_izq(i) + Div_num_der(i); //Suma las dos partes del numero
    return suma;
}

/***************************************************************************
*Funcion que eleva al cuadrado la suma la parte izquierda y derecha de un 
*numero
*Parametros: Numero cuya suma de partes quiere elevarse al cuadrado
*Devuelve: el valor del cuadrado de la suma de ambas partes
****************************************************************************/
int Cuadrado_suma(int i){
    int cuadrado;
    //Elevamos al cuadrado la suma de las dos partes
    cuadrado = pow(Suma_dos_partes(i),2); 
    return cuadrado;
}

/***************************************************************************
*Funcion que comprueba si un numero es desgarrable o no
*Parametros: Numero a comprobar si es desagarrable
*Devuelve: Si el numero es desgarrable o no
****************************************************************************/
bool Es_numero_Desgarrable(int i){
    bool es_desgarrable = false;
    int suma_cuadrado;
    suma_cuadrado = Cuadrado_suma(i);
    if (suma_cuadrado==i){ //Si el cuadrado de la suma de sus partes es numero
        es_desgarrable = true;
    }
    return es_desgarrable;
}

/***************************************************************************
*Funcion que comprueba cuantos numeros desgarrables hay en el intervalo
*Parametros: ext_izq y ext_der
*Devuelve: Numero denumeros desgarrables en el intervalo
****************************************************************************/
int Cantidad_numeros(int ext_izq,int ext_der){
    int contador = 0; //Contador de numeros desgarrables en el intervalo
    for (int i=ext_izq;i<=ext_der;i++){
        if (Es_numero_Desgarrable(i)){
            contador++; //Incrementa el valor de contador 
        }
    }
    return contador;
}

/***************************************************************************
*Funcion que imprime en pantalla los numeros desgarrables, y su descomposicion
*Parametros: ext_izq, ext_der
*Devuelve: Numero denumeros desgarrables en el intervalo
****************************************************************************/
void Numeros_desgarrables(int ext_izq, int ext_der){
    for (int i=ext_izq;i<=ext_der;i++){
        if (Es_numero_Desgarrable(i)){
            cout << i << " --> (" << Div_num_izq(i) << " + " << Div_num_der(i)
                 << ")^2 = ( " << Suma_dos_partes(i) << " )^2 = " 
                 << Cuadrado_suma(i) << "\n"; 
        }
    }
}

int main (void)
{
    int num1,num2; //Numeros introducidos por el usuario
    int ext_izq; //Extremo izquierdo del intervalo
    int ext_der; //Extremo derecho del intervalo
    
    //Entrada de Datos
    
    do{
        cout << "Introduzca un numero positivo: ";
        cin >> num1;
    }while(num1<0); //Filtro numero mayor que 0
    
    do{
        cout << "Introduzca otro numero positivo: ";
        cin >> num2;
    }while(num2<0); //Filtro numero mayor que 0
    
    if (num1>=num2){
        ext_izq = num2; //El extremo izquierdo es el numero menor(num2)
        ext_der = num1; //El extremo derecho es el numero mayor(num1) 
    }
    else{
        ext_izq = num1; //El extremo izquierdo es el numero menor(num1) 
        ext_der = num2; //El extremo derecho es el numero mayor(num2)
    }
    
    cout << "Calculando desgarrables entre " << ext_izq << " y " << ext_der 
         << endl;
    cout << "......................................................" << endl;
    
    cout << "1. Total de numeros desgarrables." << endl;
    cout << "\n\tSe han encontrado " << Cantidad_numeros(ext_izq,ext_der) 
         << " desgarrables.\n" << endl;
         
    cout << "2. Los numeros desgarrables y su descomposicion.\n" << endl;
    Numeros_desgarrables(ext_izq,ext_der);
    
	cout.setf(ios::fixed);		// Notación de punto fijo para los reales
	cout.setf(ios::showpoint);	// Mostrar siempre decimales


	return 0;
}

/***************************************************************************/
/***************************************************************************/
