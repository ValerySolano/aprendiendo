#include <iostream>
#include <vector>
#include <string>
#include <locale.h>
using namespace std;
// Funci�n para mostrar el men�
void mostrarMenu()
{
    cout << "************************************" << endl;
    cout << "            Men� principal          " << endl;
    cout << "************************************" << endl;
    cout << "1. Inventario de Autos" << endl;
    cout << "2. Registro de competencias" << endl;
    cout << "3. Reporte de autos en inventario" << endl;
    cout << "4. Reporte de competencia" << endl;
    cout << "5. Salir" << endl;
    cout << "Ingrese su eleccion: ";
}

// Funcion para mostrar el submenu de inventario de autos
void mostrarSubmenuInventario()
{
    cout << "************************************" << endl;
    cout << "     SubMen� Inventario Autos       " << endl;
    cout << "************************************" << endl;
    cout << "a. Ingresar auto al inventario" << endl;
    cout << "b. Consultar auto del inventario" << endl;
    cout << "c. Modificar auto del inventario" << endl;
    cout << "d. Eliminar auto del inventario" << endl;
    cout << "Ingrese su elecci�n: ";
}
char opcionSeleccionadaDelSubmenuInvatario(vector<string> codigos, vector<string> nombres, char subOpcion, char volver)
{
    mostrarSubmenuInventario();
    cin >> subOpcion;
    string codigo;
    string nombre;
    switch (subOpcion)
    {
    case 'a':
        cout<< "Codigo de Auto \n";
        cin>>codigo;
        codigos.push_back(codigo);
        cout<< "Nombre del Auto (modelo/marca):\n";
        cin>>nombre;
        nombres.push_back(nombre);
        /*
        cout<< "Velocidad M�xima(km/h):\n";
        int velocidad;
        cin>>velocidad;
        velocidades.push_back(velocidad);
        cout<< "Caballos de fuerza(HP):\n";
        float fuerza;
        cin>>fuerza;
        fuerzas.push_back(fuerza);
        cout<< "Equipo/Propietario:\n";
        string equipo;
        cin>>equipo;
        equipos.push_back(equipo);
        cout<< "Costo del Auto:\n";
        float costo;
        cin>>costo;
        costos.push_back(costo);
        cout<< "N�mero de identificaci�n de quien regristra el auto:\n";
        int identificacion;
        cin>> identificacion;
        identificaciones.push_back(identificacion);*/
    break;

    case 'b':
        cout<<"Por favor digite el codigo del auto...";
        cin>> codigo;
        cout<< codigos.size();
        for (int posicion = 0;posicion <  codigos.size(); posicion++) {
            if (codigos[posicion] == codigo){
                cout<<"El auto se encuentra registrado";
            }
        }
    break;

    default:
    cout << "Opcion invalida. Desea volver al menu principal? (s/n): ";
    cin >> volver;
    break;
    }
    return volver;
}
int main(){
vector<string> codigos; //Almacena Autos  de competencia
vector<string> nombres; // Almacena nombres de autos
vector<int> velocidades;// Velocidad m�xima
vector<float>fuerzas;// Caballos de fuerza
vector<string>equipos;// Equipo o propietario
vector<float>costos;//Costo del auto
vector<int>identificaciones;//Almacena n�mero de identificaci�n
    int opcion;
    char subOpcion;
    char volver;
    do
    {
        mostrarMenu();
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            do
            {
              volver = opcionSeleccionadaDelSubmenuInvatario(codigos, nombres,subOpcion, volver);
            } while (volver != 's' && volver != 'S');
        break;

        default:
            cout << "Opci�n inv�lida. Vuelva a intentarlo" << endl;
            break;
        }
    } while (opcion != 5);

return 0;
}
