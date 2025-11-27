#include <iostream>
#include <string>
#include <algorithm>	//Servira para transform
#include <cctype> 	//Serivara para tolower
using namespace std;

int main(){
	string nombreDetective; 	//Para poder colocar cadenas de texto
	cout << "Bienvenido detective, por favor ingrese su nombre:"<<endl;
	cin >> nombreDetective;
	int nivelCuriosidad = 0;
	cout << "Ingrese su nivel de curiosidad: (1 a 10)"<<endl;
	cin >> nivelCuriosidad;
	
	if (cin.fail()) { 
    cout << "Entrada no valida. Se requiere un numero." << endl; 	// Verifica que se usen solo numeros, de lo contrario el programa no avanza
    return 1;
	}
	if (nivelCuriosidad>=1 && nivelCuriosidad <=10){ 	//Evalua para determinar si esta dentro del rango
		char evidencia;
		cout << "Cuenta con evidencia? (Y/N)"<<endl; 	//Usa 'Y' para si y 'N' para no
		cin >> evidencia; 
		
		if (evidencia != 'Y' || evidencia != 'y' || evidencia != 'N' || evidencia != 'n'){
			cout << "Advertencia: Entrada no valida, se asumira como 'no'"<<endl;
		}
		
		bool tieneEvidencia = ((evidencia == 'Y' || evidencia == 'y'));
		string luces;
		cout << "Cual es la posicion del interruptor para la luz?: (on / off)"<<endl;
		cin >> luces;
		
		//funcion que transforma "on" en minusculas sin importar la forma de escritura (On, oN, ON)
		transform(luces.begin(), luces.end(), luces.begin(), [](unsigned char c){return tolower(c); });
		
		if (luces != "on" && luces != "off"){
			luces = "off";
		}
		cout << "\n";
		
		
		bool resuelto = ((nivelCuriosidad>5 && tieneEvidencia) || (nivelCuriosidad >=3 && luces == "on"));
		string msjFinal = resuelto ? "Caso cerrado con exito, buenas noches Detective " + nombreDetective : "El misterio continua..."; //Concatenacion
		
		if (resuelto){
			char emocion;
			cout << "El misterio esta casi resulto, selecciona una letra sospechada"<<endl;
			cout <<"A - A******"<<endl<<"T - T*******"<<endl<<"M - M******* \n\n";
			cin >> emocion;
			emocion = tolower(emocion);
			
			switch (emocion){
				case 'a':
					cout << "Emocion: Alegria"<<endl;
					cout << "La emocion es una alegria muy brillante"<<endl;
				break;
				case 't':
					cout << "Emocion: Tristeza"<<endl;
					cout << "Bailemos en la obscura tristeza"<<endl;
				break;
				case 'm':
					cout << "Emocion: Misterio"<<endl;
					cout << "Misterio resuelto, es como una novela!"<<endl;
				break;
				default:
					cout << "Emocion desconocida"<<endl;
				break;
			}
		} else if (nivelCuriosidad <5){
			cout << "Necesitamos mas curiosidad"<<endl;
		} else {
			cout << "Necesitamos mas pistas"<<endl;
		}
		cout << msjFinal;
	} else { 	//Si no cumple la condicion se termina automaticamente el programa
		cout << "Por favor, use un numero valido"<<endl;
	}
	return 0;
}