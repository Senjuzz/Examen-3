/**El factorial de un numero Y simulacion de cajero automatico- v2.0
Este programa calcula el factorial de un numero ingresado por el usuario aplicando la recursividad y simula el funcionamiento
de un cajero automatico mediante un menu
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
Funcion de simulacion de cajero automatico inicializa la cuenta con 20000 mxn, se le despliega otro menu con el que 
seran las que puede hacer el cajero, si presiona 1 solo se le mostrara el saldo que tiene la cuenta, si se presiona 2
se le pregunta el monto que desea retirar, si llegara a dar el caso de que el monto supere a la cantidad que tiene la cuenta,
pues no se podria hacer alguna operacion, de lo contrario, se muestra cuanto se retiro, se le resta a la cuenta, y se le
muestra al usuario su saldo final
**/
void cajeroAutomatico() {
    int cuenta = 20000;
    int opcion, monto;

	cout<<endl<<"#### Cajero automatico ####"
	<<endl<<"Ingrese 1 para consultar el saldo"
	<<endl<<"Ingrese 2 para retirar el efectivo y mostrarel saldo despues del retiro"
	<<endl<<"Ingrese una opcion: ";
	cin>>opcion;

    switch(opcion) {
        case 1:
            cout<<endl<<"El saldo con el que usted cuenta es: "<<cuenta<<endl;
            break;
        case 2:
            cout<<endl<<"Ingrese el monto que desea retirar: ";
            cin>>monto;

            if (monto > cuenta) {
                cout<<endl<<"El saldo es insuficiente...";
            } else {
                cout<<endl<<"Usted ha retirado: "<<monto;
                cuenta -= monto;
                cout<<endl<<"El saldo despues del retiro es: "<<cuenta<<endl;
            }
            break;
        default:
            cout<<endl<<"Ingrese una opcion valida..."<<endl;
            break;
    }
}


/**
La funcion main donde se hace todo, primero inicia con un menu de operaciones, si se presiona el 1 al usuario se le
por la pediran los datos del numero al que se desea sacar factorial, para posteriormente mostrar el factorial de ese numero mediante
la llamada de su funcion "calcular_factorial", si se presiona 2 se le mandara a llamar a la nueva funcion incorporada del
cajero automatico, y por ultimo, si se presiona un 0 se saldra del sistema.
**/
int main(){
	//Declaracion de variable
	int numero, opc;
	
	//Entrada de datos
	do{
		cout<<endl<<"* * * Menu de seleccion * * *"
		<<endl<<"Ingrese 1 para calcular el factorial de un numero"
		<<endl<<"Ingrese 2 para ingresar al cajero automatico"
		<<endl<<"Ingrese una opcion: ";
		cin>>opc;
		
		//Proceso y salida de datos
		switch(opc){
			case 1:
				cout<<endl<<"Ingrese el numero a sacar factorial: ";
				cin>>numero;
				cout<<endl<<"El factorial del numero "<<numero<<" es: "<<calcular_factorial(numero)<<endl;
				break;
			case 2:
				cajeroAutomatico();
				break;
			case 0:
				cout<<endl<<"Usted ha salido del sistema!"<<endl;
				break;
			default:
				cout<<endl<<"Ingrese una opcion valida..."<<endl;
				break;
		}
		
	}while(opc != 0);
	
	
	return 0;
}

