#include <iostream>
#include <string>
#include"conio.h"
using namespace std;
const int MAX_USERS = 10; // N�mero m�ximo de usuarios
const string USERS[] = {"luis", "ricardo", "raul"}; // arreglo para usuarios
const string PASSWORDS[] = {"12345", "hola2", "ingresar"}; // areglo para password
// validacion de usuarios utilizando un dato tipo bolleano 
bool isValidUser(const string & username, const string & password) {
    for (int i = 0; i < MAX_USERS; i++) {
        if (USERS[i] == username && PASSWORDS[i] == password) {
            return true;
        }
    }
    return false;
}
int main() {
    string username, password;
    cout <<"BIENVENIDO AL SISTEMA"<<endl;
    cout << "Ingrese su nombre de usuario: ";
    cin >> username;
    cout << "Ingrese su contrase�a: ";
    cin >> password;
    if (isValidUser(username, password)) {
        cout << "Inicio de sesi�n exitoso. �Bienvenido, " << username << "!" << endl;
	   
	   
0
int main(){
	char letra;
	cout<<"Ingresa una letra"<<endl;
	cin>>letra;
	
	if(letra=='a'){ 
		cout<<"es una vocal";
	}
	else if(letra=='e'){
		cout<<"es vocal";
	}
	else if(letra=='i'){
		cout<<"es vocal";
	}
	else if(letra=='o'){
		cout<<"es vocal";
	}
	else if(letra=='u'){
		cout<<"es vocal";
	}
	else{
		cout<<"no es vocal";
	}
	return 0;										
}




int main(){
	int a;
	for (a=2;a<=100;a+=2){
	cout<<a<<endl;
	}
	
	return 0;
	cin.get();	
}

int main(){
	int a;
	for (a=2;a<=100;a+=2){
	cout<<a<<endl;
	}
	
	return 0;
	cin.get();	
}

int main(){
	string user="305";
	string password="que show";
	cout<<"Digita tu usuario"<<endl;
	cin>>user;
	cout<<"Digita tu contrase�a"<<endl;
	cin>>password;
	if(user==user and password==password){
		cout<<"Bienvenido";
	}
	else{
		cout<<"Tu contrase�a es incorrecta";
	}
}

int main(){
	float nota1,nota2,nota3,nota4,nota5,promedio;
	cout<<"Digita tu primera nota"<<endl;
	cin>>nota1;
	cout<<"Digita tu segunda nota"<<endl;
	cin>>nota2;
	cout<<"Digita tu tercera nota"<<endl;
	cin>>nota3;
	cout<<"Digita tu cuarta nota"<<endl;
	cin>>nota4;
	cout<<"Digita tu quinta nota"<<endl;
	cin>>nota5,
	promedio= nota1+nota2+nota3+nota4+nota5/5;
	if(promedio>=7){
		cout<<"Esta aprobado";
	}
	else{
		cout<<"Estas reprobado";
	}
	
}
 
int main(){
	int dia;
    cout<<"digita un n�mero de un dia de la semana"<<endl;
    cin>>dia;
    switch(dia){
    
	case 1:
    cout<<"Dia lunes";
    break;
	case 2:
	cout<<"Dia Martes";
	break;
	case 3:
	cout<<"Dia Mi�rcoles";
	break;
	case 4: 
	cout<< "Dia Jueves";
	break;
	case 5: 
	cout<<"Dia viernes";
	break;
	case 6:
	cout<<"Dia s�bado";
	break;
	case 7:
	cout<<"Dia Domingo";
	break;
	default: cout<<"no es un dia de la semana";
	break;
	    
	
	}
	return 0;
}


        
        
        
        
        
        
        
        
    } else {
        cout << "Credenciales incorrectas. Inicio de sesi�n fallido." << endl;
    }
    return 0;
}
