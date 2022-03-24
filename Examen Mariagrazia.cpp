#include <iostream>
using namespace std;

int main()
{
    // Declarar la cantidad de notas por si el valor cambia
    const int cantidadNotas = 5;
    double notas[cantidadNotas];
    // Solicitar notas
    for (int i = 0; i < cantidadNotas; i++)
    {
        cout << "Ingrese la nota " << i + 1 << ": ";
        // Guardar en el arreglo
        cin >> notas[i];
    }

    
    double sumatoria = 0;
  
    for (int i = 0; i < cantidadNotas; i++)
    {
        sumatoria = sumatoria + notas[i];
        cout << "Nota " << i + 1 << " . Calificacion: " << notas[i] << endl;
    }
    double promedioFinal = sumatoria / cantidadNotas;
    
    string categoria = "";
    if (promedioFinal >18)
    {
        categoria = "Sobresaliente - Aprobado";
    }
    else if (promedioFinal >15)
    {
        categoria = "Muy Bueno - Aprobado";
    }
    else if (promedioFinal >12)
    {
        categoria = "Bueno - Aprobado";
    }
    else if (promedioFinal >9)
    {
        categoria = "Regular - Aprobado";
    }
    else if (promedioFinal <10)
    {
        categoria = "Mejorable - Desaprobado";
    }
    else if (promedioFinal <6)
    {
        categoria = "Deficiente - Aprobado";
    }
    
    // Imprimir resultados
    cout << "Total notas parciales: " << sumatoria << endl;
    cout << "Promedio notas parciales: " << promedioFinal << endl;
    cout << "Nota final: " << promedioFinal << ". Obtiene " << categoria << endl;
}