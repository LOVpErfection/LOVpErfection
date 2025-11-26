#include <iostream>
using namespace std;  

int main() {
    int opc = 0;
    cout << "Ingresa una opcion: " << endl
         << "1-Positivo/Negativo" << endl
         << "2-Mayor de edad" << endl
         << "3-Ambos iguales a 10?" << endl  
         << "4-Par o impar" << endl
         << "5-Nota de aprobacion" << endl;
    cin >> opc;
    switch (opc) {
    case 1: {
        int numero;
        cout << "Ingrese un numero mayor o menor a cero " << endl;
        cin >> numero;
        bool es_positivo = (numero > 0);
        cout << "Estado: " << (es_positivo ? "Positivo" : (numero < 0 ? "Negativo" : "Cero")) << endl;
        break;
    }
    case 2: {
        int edad;
        cout << "Ingrese su edad:" << endl;
        cin >> edad;
        bool mayorE = (edad >= 18);
        cout << "== Analizando ==" << endl;
        cout << "Veredicto: " << (mayorE ? "Mayor" : "Menor") << endl;  
        break;
    }
    case 3: {
        cout << "Ingrese el primer valor" << endl;
        int valor1, valor2;
        cin >> valor1;
        cout << "Ingrese el valor 2" << endl;
        cin >> valor2;
        bool son_iguales = (valor1 == 10 && valor2 == 10);
        cout << "Comprobacion: " << (son_iguales ? "Ambos iguales a 10" : "Uno o ambos diferentes a 10") << endl;
        break;
    }
    case 4: {
        int valor;
        cout << "Ingresa el valor" << endl;
        cin >> valor;
        bool es_par = (valor % 2 == 0);
        cout << "Analisis: " << (es_par ? "Par" : "Impar") << endl;
        break;
    }
    case 5: {
        cout << "Ingrese su calificacion:" << endl;
        float nota;
        cin >> nota;
        bool aprobado = (nota >= 6.0f && nota <= 10.0f);
        cout << "Status: " << (aprobado ? (nota == 10.0f ? "Excelente" : "Aprobado") : "Reprobado") << endl;
        break;  
    }
    default:
        cout << "Error de seleccion" << endl;
    }
    return 0;
}