#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
void abir_archivo();
int main()
	void abrir_archivo();
	return 0;
}
void abrir_archivo(){
	ifstream archivo;
	string contenido;
	char continuar;
	archivo.open("archivo.txt",ios::in);
	if (archivo.fail()){
		cout<<"no se puede leer el archivo";
	exit(1);
	}else{
		do{
			cout<<"ingrese nombre;
		getline(cin,continuar);
		archivo<<nombre<<endl;
	}
		while(conrinuar==´s´||(continuar==´S´));
	archivo.close()}
	}
}
