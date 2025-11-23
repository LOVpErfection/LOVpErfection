#include <iostream>

using namespace std;

int main() {
	int duracion_segundos = 385;
	float archivo_MB = 100.5f;
	
	cout << "** Calculadora de Tiempos y Datos **"<<endl;
	cout <<"Duracion total: "<<duracion_segundos<<" segundos"<<endl;
	cout <<"Peso del archivo: "<<archivo_MB<<" MB"<<endl;
	
	//Calculo de Tiempo
	int minutos = duracion_segundos/60; //Obtiene los minutos exactos
	int segundos = duracion_segundos % 60; //Obtiene los segundos gracias al operador modulo
	float tasa_datos = (archivo_MB/duracion_segundos); //Obtiene la tasa de datos
	
	cout <<"Duracion: "<<minutos<<":"<<segundos<<endl;
	cout <<"Tasa de Datos totales: "<<tasa_datos;
}