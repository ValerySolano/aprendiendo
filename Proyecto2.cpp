#include <iostream>
#include <vector>
#include <string>
#include <locale.h>
using namespace std;
// Funci�n para mostrar el men�
void mostrarMenu()
{
    cout << "************************************" << endl;
    cout << "            Men� principal         " << endl;
    cout << "************************************" << endl;
    cout << "1. Inventario de Autos" << endl;
    cout << "2. Registro de competencias" << endl;
    cout << "3. Reporte de autos en inventario" << endl;
    cout << "4. Reporte de competencia" << endl;
    cout << "5. Salir" << endl;
    cout << "Ingrese su elecci�n: ";
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
char opcionSeleccionadaDelSubmenuInvatario(char subOpcion, char volver)
{
    mostrarSubmenuInventario();
    cin >> subOpcion;
    switch (subOpcion)
    {
    case 'a':
        cout << "Ingresar auto al inventario" << endl;
        break;
    default:
        cout << "Opci�n inv�lida. Desea volver al men� principal? (s/n): ";
        cin >> volver;
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

    mostrarMenu();

    cout<< "========================================================== \n";
    cout<< "             INGRESAR AUTO A INVENTARIO                   \n";
    cout<< "==========================================================\n";
    cout<< "C�digo de Auto \n";
    string codigo;
    cin>>codigo;
    codigos.push_back(codigo);
    cout<< "Nombre del Auto (modelo/marca):\n";
    string nombre;
    cin>>nombre;
    nombres.push_back(nombre);
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
    identificaciones.push_back(identificacion);
    cout<< "==========================================================\n";
    cout<< "Est� seguro de que desea regristrar este auto?(S/N):\n";
    char regristra;
    cin>> regristra;



    cout<< "==========================================================\n";
    cout<< "            CONSULTAR AUTO EN INVENTARIO                  \n";
    cout<< "==========================================================\n";
    cout<< "Ingresa el c�digo de Auto para consultar:\n";
    cout<< "Buscando auto con C�digo:\n";
    cout<< "==========================================================\n";
    cout<< "             Datos del  Auto Encontrado:                  \n";
    cout<< "==========================================================\n";
    cout<< "C�digo de Auto:\n";
    cout<< "Nombre del Auto\n";
    cout<< "Velocidad M�xima\n";
    cout<< "Caballos de Fuerza:\n";
    cout<< "Equipo/Propietario:\n";
    cout<< "Costo del Auto:\n";
    cout<< "N�mero de identificaci�n del regristrador:\n";
    cout<< "==========================================================\n";
    cout<< "Desea volver al men� principal?(S/N):\n";



    cout<< "==========================================================\n";
    cout<< "            MODIFICAR AUTO EN UNVENTARIO                  \n";
    cout<< "==========================================================\n";
    cout<< "Ingrese el C�digo de Auto que desea modificar:\n";
    cout<< "Buscando auto con C�digo:\n";
    cout<< "==========================================================\n";
    cout<< "            Datos del Auto en Encontrado:                 \n";
    cout<< "==========================================================\n";
    cout<< "C�digo de Auto:\n";
    cout<< "Nombre del Auto:\n";
    cout<< "Velocidad M�xima:\n";
    cout<< "Caballos de Fuerza:\n";
    cout<< "Equipo/Propietario:\n";
    cout<< "Costo del Auto:\n";
    cout<< "N�mero de identificaci�n:\n";
    cout<< "Deseas modificar la velocidad M�xima y los Caballos de Fuerza?(S/N):\n";
    cout<< "Ingrese la nueva velocidad M�xima (km/h):\n";
    cout<< "Ingrese los nuevos caballos de Fuerza (HP):\n";
    cout<< "==========================================================\n";
    cout<< "       Los datos han sido actualizados exitosamente       \n";
    cout<< "==========================================================\n";
    cout<< "Los cambios se han guardado en el archivo AUTOS.TXT:\n";
    cout<< "";
    cout<< "==========================================================\n";
    cout<< "Desea volver al men� principal? (S/N):\n";



    cout<< "==========================================================\n";
    cout<< "             ELIMINA AUTO DEL INVENTARIO                  \n";
    cout<< "==========================================================\n";
    cout<< "Ingresa el C�digo de Auto que desea eliminar:\n";
    cout<< "Buscando auto con C�digo:\n";
    cout<< "==========================================================\n";
    cout<< "               Datos del Auto a Eliminar:                 \n";
    cout<< "==========================================================\n";
    cout<< "C�digo de Auto:\n";
    cout<< "Nombre del Auto:\n";
    cout<< "Velocidad M�xima:\n";
    cout<< "Caballos de Fuerza:\n";
    cout<< "Equipo/Propietario:\n";
    cout<< "Costo del Auto:\n";
    cout<< "N�mero de identificaci�n del registrador:\n";
    cout<< "�Est� seguro de que desea eliminar este auto? (S/N):\n";
    cout<< "=========================================================\n";
    cout<< "El auto ha sido eliminado exitosamente.\n";
    cout<< "=========================================================\n";
    cout<< "Los cambios se han actualizado en el archivo AUTOS.TXT.\n";
    cout<< "=========================================================\n";
    cout<< "Desea volver al men� principal? (S/N):\n";



    cout<< "=========================================================\n";
    cout<< "            REGRISTRO DE AUTO A COMPETENCIA              \n";
    cout<< "=========================================================\n";
    cout<< "Generando C�digo de Competencia �nico...\n";
    cout<< "Ingrese el C�digo de Auto 1 (formato:):\n";
    cout<< "Ingrese el C�digo de Auto 2 (formato:):\n";
    cout<< "Seleccione la Categor�a de la Carrera:\n";
    cout<< "1. Sprint \n";
    cout<< "2. Endurance \n";
    cout<< "3. Drift \n";
    cout<< "Seleccione una opci�n: \n";
    cout<< "Ingresa la Fecha de la competencia (Dia/Mes/A�o):\n";

    cout<< "Seleccione el Estado de la Competencia:\n";
    cout<< "1. En proceso \n";
    cout<< "2. Cancelada \n";
    cout<< "3. Finalizada \n";
    cout<< "Seleccione una opci�n \n";
    cout<< "========================================================\n";
    cout<< "           La inscripci�n ha sido exitosa.              \n";
    cout<< "========================================================\n";
    cout<< "La competencia ha sido registrada en COMPETENCIAS.TXT: \n";
    cout<< "C�digo de Competencia: \n";
    cout<< "C�digo de Auto 1: \n";
    cout<< "C�digo de Auto 2: \n";
    cout<< "Categor�a:\n";
    cout<< "Fecha:\n";
    cout<< "Estado:\n";
    cout<< "Ganador:\n";
    cout<< "========================================================\n";
    cout<< "�Desea volver al Men� principal? (S/N):\n";


    cout<<"=========================================================\n";
    cout<<"                CONSULTAR COMPETENCIA                    \n";
    cout<<"=========================================================\n";
    cout<<"Ingrese el C�digo de Competencia (formato:):\n";
    cout<<"Buscando competencia...\n";
    cout<<"=========================================================\n";
    cout<<"                 RESULTADOS DE B�SQUEDA                  \n";
    cout<<"=========================================================\n";
    cout<<"Competencia encontrada:\n";
    cout<<"C�digo de Competencia\n";
    cout<<"C�digo de Auto 1:\n";
    cout<<"C�digo de Auto 2:\n";
    cout<<"Categor�a:\n";
    cout<<"Fecha:\n";
    cout<<"Estado:\n";
    cout<<"Ganador:\n";
    cout<<"=========================================================\n";
    cout<<"�Desea volver al Men� principal? (S/N):\n";



    cout<<"=========================================================\n";
    cout<<"             REPORTE DE AUTOS EN INVENTARIO              \n";
    cout<<"=========================================================\n";
    cout<<"Generando reporte...\n";
    cout<<"=========================================================\n";

    cout<<"| C�digo      | Nombre            | Vel. M�x  | Caballos  | Costo     | ID Reg.  |\n";
    cout<<"|-------------|-------------------|-----------|-----------|-----------|----------|\n";
    cout<<"|             |                   |           |           |           |          |\n";
    cout<<"|             |                   |           |           |           |          |\n";
    cout<<"|             |                   |           |           |           |          |\n";
    cout<<"==========================================================\n";
    cout<<"�Volver al men�? (S/N):\n";



    cout<<"=========================================================\n";
    cout<<"                  CONSULTAR COMPETENCIA                  \n";
    cout<<"=========================================================\n";
    cout<<"Ingrese el C�digo de la Competencia (formato:):\n";
    cout<<"Buscando competencia...\n";
    cout<<"=========================================================\n";
    cout<<"                  RESULTADOS DE B�SQUEDA                 \n";
    cout<<"=========================================================\n";
    cout<<"Competencia encontrada:\n";
    cout<<"C�digo de Competencia:\n";
    cout<<"C�digo de Auto Ganador:\n";
    cout<<"C�digo  de Auto Perdedor:\n";
    cout<<"Categor�a:\n";
    cout<<"Fecha:\n";
    cout<<"Estado:\n";
    cout<<"=========================================================\n";
    cout<<"�Desea volver al Men� principal? (S/N):\n";



 return 0;
}
