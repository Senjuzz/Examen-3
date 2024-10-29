/**El factorial de un numero - v1.0
Este programa calcula el factorial de un numero ingresado por el usuario aplicando la recursividad
**/

#include <iostream>

using namespace std;

/**
La siguiente funcion saca el factorial del numero que es mandado desde main por el usuario, este mismo,
recibe como parametros el numero anteriormente recibido, primero dentro del bloque IF, comprueba que si el numero
es menor o igual a 1, este va a regresar a main un 1, si no, en el return va a regresar el numero que ingreso
el usuario multiplicado por el llamado o invocacion de esta misma funcion (aplicando la recursividad), donde
se mandara el numero restado por 1
**/
int calcular_factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * calcular_factorial(n - 1);
    }
}

/**
La funcion main donde se hace todo, primero inicia por la peticion de datos al usuario para luego mandar a 
llama la funcion que calcula el factorial del numero, y luego se mostrara en pantalla el factorial del numero
que ingreso el usuario
**/
int main(){
	//Declaracion de variable
	int numero;
	//Entrada de datos
	cout<<endl<<"Ingrese el numero a sacar factorial: ";
	cin>>numero;
	//Proceso y salida de datos
	cout<<endl<<"El factorial del numero "<<numero<<" es: "<<calcular_factorial(numero)<<endl;
	
	return 0;
}

