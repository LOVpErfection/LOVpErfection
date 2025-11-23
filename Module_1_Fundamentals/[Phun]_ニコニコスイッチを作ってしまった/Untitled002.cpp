#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int resolucion_alto = 1070;
	float fps = 80.0f;
	
	cout<<"== Optimizador de rendimiento =="<<endl;
	cout<<"Resolucion: "<<resolucion_alto<<" p"<<endl;
	cout<<"Frames por segundo: "<<fps<<" fps"<<endl;
	//1. Grupo principal (Extremo, medio, bajo)
	if (resolucion_alto>=2160){
		//Anidado para los fps
		if(fps >= 60.0){
			cout<<"Nivel de Procesamiento: Extremo-Alto (4K @ 60 FPS o superior)"<<endl;
		}else{
			cout<<"Nivel de Procesamiento: Extremo-Bajo (4K Estandar)"<<endl;
		}
	} else if(resolucion_alto == 1080){
		if(fps >= 60.0){
			cout<<"Nivel de Procesamiento: Medio-Alto (FULL HD @ 60 FPS o superior)"<<endl;
		}else{
			cout<<"Nivel de Procesamiento: Medio-Bajo (FULL HD Estandar)"<<endl;
		}
	} else {
		if(fps >= 60.0){
			cout<<"Nivel de Procesamiento: Minimo-Alto (HD @ 60 FPS o superior)"<<endl;
		}else{
			cout<<"Nivel de Procesamiento: Minimo-Bajo (HD Estandar)"<<endl;
		}
	}
}