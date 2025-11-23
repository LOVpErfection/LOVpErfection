#include <iostream>
#include <string>

using namespace std;

int main() {
    //Valores del primer video
    string titulo1 = "45 days Ago";
    float duracion_segundos = 208.2;
    int alto = 1720;
    int ancho = 1980;
    float tamanio_mb = 3200;
    bool procesamiento1 = true;
    //Valores segundo video
    string titulo2 = "12 days Ago";
    float duracion_segundos2 = 189;
    int alto2 = 1920;
    int ancho2 = 980;
    float tamanio_mb2 = 2745;
    bool procesamiento2 = true;
    
	//Muestra video 1
    cout <<"== Descripcion del video 1 ==\n";
    cout <<"Titulo: "<<titulo1<<endl;
    cout <<"Duracion en segundos: "<<duracion_segundos<<endl;
    cout <<"Tamanio en MB: "<<tamanio_mb<<endl;
    //Muestra video 2
    cout <<"== Descripcion del video 2 ==\n";
    cout <<"Titulo: "<<titulo2<<endl;
    cout <<"Duracion en segundos: "<<duracion_segundos2<<endl;
    cout <<"Tamanio en MB: "<<tamanio_mb2<<endl;
    // Calculos principales
    float duracion_total = (duracion_segundos + duracion_segundos2)/60; //Duracion total de ambos videos juntos
    float tamanio_total = (tamanio_mb + tamanio_mb2)/1024; //Peso Total de ambos archivos pasado a GB
    int promedio_A1 = (alto + alto2)/2; //Promedio de ambas resoluciones aspecto alto
    int promedio_C1 = (ancho + ancho2)/2; //Promedio de ambas resoluciones aspecto ancho
    int calidad1 = (alto * ancho);
    int calidad2 = (alto2 * ancho2);
    //Muestra de Datos
    cout <<""<<endl;
    cout <<"Tamanio combinado: "<<tamanio_total<<"GB"<<endl;
    cout <<"Duracion de ambos videos en minutos: "<<duracion_total<<endl;
    cout <<"Resolucion Promedio (Alto): "<<promedio_A1<<endl;
    cout <<"Resolucion Promedio (Ancho): "<<promedio_C1<<endl;
    //Estructura condicional
    cout <<""<<endl;
    cout << "Comparacion de calidad"<<endl;
    if (calidad1 > calidad2){
        std::cout <<"Video 1 tiene mayor calidad";
    } else if (calidad1 < calidad2){
        std::cout <<"Video 2 tiene mayor calidad";
    } else{
        std::cout <<"Ambos tienen la misma calidad";
    }
    return 0;
}