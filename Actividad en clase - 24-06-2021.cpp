#include <iostream>
using namespace std;
main(){
	char r;
	do {
	
	int op;
	cout << "MENU DE OPCIONES" << endl;
	cout << "1: Imprimir la palabra pucese 5 veces " << endl;
	cout << "2: Imprimir tabla de multiplicar de 5" << endl;
	cout << "3: Tabla de multiplicar hasta 12" << endl;
	cout << "4: Calcular la sumatoria de los numeros comprendidos entre 500 y 800" <<endl;
	cout << "5: Suma de numeros multiplos de 5 entre dos numeros ingresados" << endl;
	cout << "6: Rectangulo de asteriscos con for anidados" << endl;
	cout << "7: Mostrar 10 primeras tablas de multiplicar" << endl;
	cout << "Escoja una opcion: ";
	cin >> op;
	
switch (op){
		case 1:	
		do{
		int x;
		for (x=1;x<=5;x++){
			cout << "PUCESE" << endl;
		}
		
		cout << "Desea repetir el proceso? s/n" << endl;
		cin >> r; 
		
	}	while (r=='s');
	
		break;
		
		
		case 2:
		
	do{
		int x, acum;
		cout << "Tabla de multiplicar de 5" <<endl;
		for(x=1;x<=10;x++){
			
			cout << "5 x " << x << " = " << (5*x) << endl;
			
		}
		
		cout << "Desea repetir el proceso? s/n" << endl;
		cin >> r; 
		
	}	while (r=='s');
	
		break;
		
		
	case 3:
		
	do{
	
	int n, x;
	
	cout << "\n \n Ingrese el entero para realizar la tabla de multiplicar: ";
	cin >> n; 
		
		for (x=1;x<=12;x++){	
			cout << n << " x " << x << " = " << (n*x) << endl;	
		}
		
		cout << "Desea repetir el proceso? s/n" << endl;
		cin >> r; 
		
	}	while (r=='s');
	
		break;
	
	
	case 4:
		
		do{
		
		int n=0, x;
		
		for (x=500;x<=800;x++){
			n = n + x;
		}
		
			cout << "\n La sumatoria es: " << n << endl; 
		cout << "\n Desea repetir el proceso? s/n" << endl;
		cin >> r; 
		} 	while (r=='s');
		break;
	
	
	
	case 5:		
	do{
		
		int x, i, f, acum=0;
		
		cout << "\n \n Ingrese el numero inicial y luego el final" << endl;
		cout << "Inicio: ";
		cin >> i;
		cout << "Fin: ";
		cin >> f;
		
		for (x=i;x<=f;x++){
			
			if (x%5==0){
				acum = acum + x;
			}
		}
		
		cout << "La suma de numeros entre " << i << " y " << f << " es: " << acum << endl;
		
		cout << "\n Desea repetir el proceso? s/n" << endl;
		cin >> r; 
		
	}	while (r=='s');
		break;
		
		
		case 6:
		
	do{
	int x, i;
	cout << "\nImpresion de rectangulo \n \n";
		
		for (x=1;x<=5;x++){
			
			for (i=1;i<=10;i++){
				cout << "*";
			}
			cout << "\n";
		}
		
		cout << "\nDesea repetir el proceso? s/n" << endl;
		cin >> r; 
		
	}	while (r=='s');
	
		break;
		
		case 7:
	
	do{
		int x, i;
		
		for (x=1;x<=10;x++){
			cout << "\nTABLA DEL " << x << endl;
			for (i=1;i<=10;i++){
				cout << x << " x " << i << " = " << (x*i) << endl;
			}
			cout << "\n\n";
		}
		
		cout << "Desea repetir el proceso? s/n" << endl;
		cin >> r; 
		
	}	while (r=='s');
	
		break;
		
		
		
}  
cout << "\n Desea regresar al menu de opciones? s/n" << endl;
cin >> r;
cout << "\n \n";
} while (r=='s');
}
