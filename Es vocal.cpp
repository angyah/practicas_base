#include <iostream>					
using namespace std;
int main(){
	char letra;
	cout<<"Bienvenido"<<endl;
	cout<<"Ingresa una letra por favor"<<endl;
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
