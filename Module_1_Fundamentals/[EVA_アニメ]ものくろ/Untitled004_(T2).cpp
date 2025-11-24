#include <iostream>
#include <string> //Cadena de caracteres
#include <cmath> //Biblioteca para operaciones complejas

using namespace std;

int main() {
	//Valores para personaje
	float opacidad_personajes = 0.9f; //Se usa 'f' para indicar estrictamente que es float
	float brillo_personajes = 0.8f;
	int desenfoque_personajes = 2;
	float tiempo_personajes = 15.5f;
	//Valores para fondo
	float opacidad_fondo = 1.0f;
	float brillo_fondo = 1.2f;
	int desenfoque_fondo = 1;
	float tiempo_fondo = 22.0f;
	//Valores para efecto
	float opacidad_efectos = 0.7f;
	float brillo_efectos = 1.8f;
	int desenfoque_efectos = 5;
	float tiempo_efectos = 8.3f;
	
	// 1.Promedios
	float opacidad_promedio = (opacidad_personajes + opacidad_fondo + opacidad_efectos)/3.0f; //Promedio de opaciodad
	cout << "Opacidad Promedio: "<<opacidad_promedio<<endl;
	
	// 2.Condicional para evaluar la capa con mayor brillo
	cout << "\n== Analisis de brillo =="<<endl;
	if (brillo_personajes > brillo_fondo && brillo_personajes > brillo_efectos){
		cout << "Mayor Brillo: Capa de personajes"<<endl;
	} else if (brillo_fondo > brillo_efectos){
		cout << "Mayor brillo: Capa de fondo"<<endl;
	} else {
		cout << "Mayor brillo: Capa de efectos"<<endl;
	}
	// 3. Tiempo Total
	float tiempo_total = tiempo_personajes + tiempo_fondo + tiempo_efectos; //Tiempo total de procesamiento
	cout << "Tiempo total de procesamiento: "<<tiempo_total<<endl;
	// 4.Verificacion si todo esta listo para renderizar
	bool listo_render = (opacidad_personajes>0.5f) &&(opacidad_fondo>0.5f) && (opacidad_efectos>0.5f); //Bool simplifica la evaluacion, evitando usar lineas estra de codigo
	cout << "\n== Estado de Rendereizado =="<<endl;
	cout << "Listo para renderizar: " << (listo_render ? "Listo" : "Negativo, necesita refinar")<<endl<<endl; //Uso del operador ternario 
	
	//Reto avanzado
	// 1. Costo computacional (tiempo * desenfoque)
	float costo_total = (tiempo_personajes * static_cast<float>(desenfoque_personajes)) + (tiempo_fondo * static_cast<float>(desenfoque_fondo)) + (tiempo_efectos * static_cast<float>(desenfoque_efectos)); //Static_cast forza a una variable int a ser float
	cout << "Costo Computacional total: "<<costo_total<<endl;
	bool excede_limite_seguro = ((brillo_personajes > 1.5f) || (desenfoque_personajes > 8) || (brillo_fondo > 1.5f) || (desenfoque_fondo > 8) || (brillo_efectos > 1.5f) || (desenfoque_efectos > 8));
	cout << "\n== Analisis de limites =="<<endl;
	cout << "Estado: " << (excede_limite_seguro ? "Limite Excedido":"Limite seguro")<<endl;
}