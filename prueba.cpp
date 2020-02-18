#include<iostream>
using namespace std;

typedef struct Arreglo{
	int a[30][30];
	int filas,columnas;
	int *ptr;
}matriz;

int menuPrincipal();
matriz escribirDatos(int a[][],int,int);


int menuPrincipal(){
	int opc;
	cout<<"\n\tOperaciones que puede realizar:\n1.Escritura\n2.Lectura\n3.Actualizacion\n4.Busqueda secuencial"
	<<"\n5.Salir\n\nOpcion a realizar: "; cin>>opc;
	return opc;"
}


int main(){
	matriz m;
	m.ptr=&m.a[0][0];
	int opc;
	cout<<"Ingrese el numero de filas: "; cin>>m.filas;
	cout<<"Ingrese al numero de columnas: "; cin>>m.columnas;
	do{
	system("cls");
	opc=menuPrincipal();
	switch(opc){
		case 1: system("cls"); escribirDatos()
		break;
		case 2: system("cls");
		break;
	    case 3: system("cls");
	    break;
	    case 4: system("cls");
	    break; 	
	}while(opc!=5);
	
	}
	
	
	for(int i=0;i<m.filas;i++){
		for(int j=0;j<m.columnas;j++){
			cout<<"Insertar elementos ["<<i<<"] ["<<j<<"]: ";
			cin>>m.ptr[i][j];
		}
	}

	return 0;
}

matriz escribirDatos(int a[][],int filas, int columnas){
	cout<<"Ingresar elemento: "; cin
}
