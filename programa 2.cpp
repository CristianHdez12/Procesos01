#include<iostream>
using namespace std;

typedef struct Arreglo{
	int a[20][20];
}matriz;

//Prototipos de las funciones
int menuPrincipal();
int escribirDatos(int,int);
void mostrarDatos(int a[20][20],int,int);


int menuPrincipal(){
	int opc;
	cout<<"\n\tOperaciones que puede realizar:\n1.Escritura\n2.Lectura\n3.Actualizacion\n4.Busqueda secuencial"
	<<"\n5.Salir\n\nOpcion a realizar: "; cin>>opc;
	return opc;
}


int main(){
	matriz m;
	int opc=0,f=0,c=0,i=0,j=0;
	cout<<"Ingrese el numero de filas de la matriz: "; cin>>f;
	cout<<"Ingrese el numero de columnas de la matriz: "; cin>>c;
	do{
	system("cls");
	opc=menuPrincipal();
	switch(opc){
		case 1: system("cls"); 
		if(i<f){
			if(j<c){
			m.a[i][j]=escribirDatos(i,j); j++;
		   }
		   else{
		   	i++;
		   	if(i<f){
		   		j=0; 
		   		m.a[i][j]=escribirDatos(i,j); j++;
			   }
			else{
				cout<<"Arreglo lleno"<<endl; system("pause");
			}
		   }	
		}
		else{
				cout<<"Arreglo lleno"<<endl; system("pause");
		}
		break;
		case 2: system("cls"); mostrarDatos(m.a,i,j); system("pause");
		break;
		case 3: system("cls");
		break;
		case 4: system("cls");
		break;
	}	
	}while(opc!=5);
	return 0;
}

int escribirDatos(int i,int j){
	int valor;
	cout<<"Ingrese el dato ["<<i<<"]["<<j<<"]: "; cin>>valor;
	return valor;
}

void mostrarDatos(int a[20][20],int i,int j){
	for(int k=-1;k<i-1;k++){
		for(int l=0;l<j;l++){
			cout<<"Dato ["<<k+1<<"]["<<l<<"]: "<<a[k+1][l]<<endl;
		}
	}
	
}

void modificarDatos(){
	int pf,pc;
	cout<<"Dato: "; cin>>
}
