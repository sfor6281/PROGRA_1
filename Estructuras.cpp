#include <iostream>
using namespace std;
//contiene variables de distinto o mismo tipo
struct Estudiante{
	int *codigo;
	string *nombre;
	int **notas;
};

main(){
	Estudiante estudiante;
		int fila=0,columna=0;
		cout<<"Cuantos estudiantes desea agregar:";
		cin>>fila;
		
		cout<<"Cuantas notas por estudiantes desea agregar:";
		cin>>columna;
		
		estudiante.codigo=new int[fila];
		estudiante.nombre=new string[fila];
		estudiante.notas=new int *[fila]; 
		for(int i=0;i<fila;i++){
			estudiante.notas[i]=new int[columna];
		}
		
		cout<<_______________"Ingreso de notas__________________"<<endl;
 		for(int i=0;i<fila;i++){
 			cout<<"Codigo:"<<i<<":";
 			cin>>estudiante.codigo[i];
 			cin.ignore();
 			cout<<"Nombre completo"<<i<<:;
 			getline(cin,estudiante.nombre[i]);
 			for(int ii=0;ii<columna;ii++)
 				cout<<"Ingrese Nota:"<<ii<<":";
 				cin>>*((estudiante.notas+i)+ii)
		 }
		 cout<<"______Mostrar datos_____"<<endl;
		 
 
 }
for(int ii=0;ii<columna;ii++){
	delete[] estudiante.notas[i];
}
		delete [] estudiante.codigo;
		delete [] estudiante.nombre;
		delete [] estudiante.notas;
//for (int i=0;i<4;i++){
//	cout<<"-----------------------------"<<endl;
//	cout<<"Ingrese codigo:";
//	cin>>estudiante.codigo[i];
//	cin.ignore();
//	cout<<"Ingrese Nombre completo:";
//	getline(cin,estudiante.nombre[i]);
//	cout<<"Ingrese Nota:";
//	cin>>estudiante.nota[i];
	
//	cout<<"Codigo:"<<estudiante.codigo[i]<<endl;
//	cout<<"Nombre completo:"<<estudiante.nombre[i]<<endl;
//	cout<<"Nota:"<<estudiante.nota[i]<<endl;
	
