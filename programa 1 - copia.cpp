#include<iostream>
using namespace std;

typedef struct Arreglo{
	float numero;
}vector;

//Prototipos de las funciones
void menuPrincipal();
vector escribirDatos(vector *,int);
vector lecturaDatos(vector *,int);
vector actualizarDatos(vector *,int,int);
vector modificarDatos(vector *,int);

void menuPrincipal(){
	cout<<"\n\tOperaciones que puede realizar:\n1.Escritura\n2.Lectura\n3.Actualizacion\n4.Busqueda secuencial"
	<<"\n5.Salir\n\nOpcion a realizar: ";
}

int main(){
	int opc,i=0,n;
	cout<<"Ingrese el numero de elementos que tendra el vector: "; cin>>n;
	vector a[n], *ptr;
	do{
	system("cls");
	menuPrincipal(); cin>>opc;
	switch(opc){
		case 1: system("cls"); ptr=&a[0];
		if(i<n){
        escribirDatos(ptr,i); i++;
	    }
	    else{
		cout<<"Arreglo lleno, no se pueden ingresar mas datos"<<endl; system("pause");
      	} break;
		case 2: system("cls");
		lecturaDatos(ptr,i); system("pause");
		break;
		case 3: system("cls"); actualizarDatos(ptr,i,n);
		break;
		case 4: system("cls");
		break;
		default: cout<<"\nOpcion no valida, vuelva a intentarlo"<<endl; system("pause"); break; 
	}
    }while(opc!=5);
	
	return 0;
}

vector escribirDatos(vector *ptr,int i){
	cout<<"Ingrese un numero de tipo decimal: "; cin>>ptr->numero;
	ptr++;
}

vector lecturaDatos(vector *ptr, int i){
	for(int j=0;j<i;j++){
		cout<<"Dato ["<<j+1<<"]: "<<ptr->numero<<endl;
		ptr++;
    }
}

vector actualizarDatos(vector *ptr,int i,int n){
	int m,op;
	cout<<"Que desea hacer:\n1.Modificar\n2.Insertar\n3.Eliminar\nOpcion: "; cin>>op;
	switch(op){
		case 1: system("cls"); cout<<"Que dato desea modificar: "<<endl; lecturaDatos(ptr,i);
		cout<<"Dato: "; cin>>m; modificarDatos(ptr,m); 
		break;
		case 2: system("cls");
		break;
		case 3: system("cls");
		break;
		default: cout<<"No selecciono una opcion valida"<<endl; system("pause"); break;
	}
}

vector modificarDatos(vector *ptr,int m){
	cout<<"Ingrese un numero de tipo decimal: "; cin>>ptr->numero;
}
