#include <iostream>
#include <string>
using namespace std;
int main(){
	const numAlumnos = 10; //varia dependienndo el numero de alumnos
	int asistencia[numAlumnos];
	
	for(int j=0; j < numAlumnos; j++){
		asistencia[j] =0;
	}
	cout<<"Bienvenidos al sistema de asistencia: "<<endl;
	cout<<"Registra la asistencia de los alumnos: "<<endl;
	cout<<"Registra el nombre de los alumnos e indica si asistieron: "<<endl;
		string nombre;
		char asistio;
	
		cout<<"Alumno: "<<j+1<<" : ";
		cin>>nombre;
	for(int j = 0; j < numAlumnos; j++){
		cout<<"�Asistio? (S/N):";
		cin>>asistio;
		
		 if(asistio ==�S� || asistio == �s�){
			asistencia[j] = 1;
	   }
		
	}
	int faltas = 0;
	for (int j = 0; j < numAlumnos; j++){
		if (asistencia[j] == 0){
			faltas++;
		}
	}
	cout<< "Numero de alumnos que faltaron"<<faltas<<endl;
	cout<< "Numero de alumnos que asistieron"<<asistencia<<endl;
	
	return 0;
}
