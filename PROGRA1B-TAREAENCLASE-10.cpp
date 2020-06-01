#include <iostream>
#include <string>
using namespace std;


struct empleados{
  int codigo;
  string nombre;
  string puesto;
  int departamento;
  float salario;
};


int main() {
  int n=2; // Ingresos de empleados
  // Creamos puntero departamento

  //Declaracion del puntero
  float *total, var=0.0;
  //Asignación del puntero
  total = &var;

  string *departamento=NULL;
  // Creamos el arreglo
  string depa[]={"Gerencia","Administración","Produccion"};
  // Le asignamos el arreglo al puntero
  departamento=depa;

  // Le asignamos la estructura al puntero
  empleados *empl;
  // Le asignamos un arreglo vacio de 10 espacios.
  empl= new empleados[n];

  // Ciclo para ingreso
  for (int i=0; i<n; i++){
    cout << "----------" << i+1 << "--------- \n";
    cout <<"Ingrese codigo de empleado: ";
    cin >> empl[i].codigo; // Cuando capturas integer
    cin.ignore(200,'\n'); //Ignora el buffer de cin

    cout << "Ingrese nombre de empleado: ";
    getline(cin,empl[i].nombre);//aca es cuando capturas string


    cout <<"Ingrese puesto de empleado: ";
    getline(cin,empl[i].puesto);
    //cin.ignore(200,'\n'); //Ignora el buffer de cin
    
    cout <<"\n";
    cout << " Gerencia, 2 Administracion y 3 Produccion\n";
    cout <<"Ingrese departamento de empleado: ";
    cin >>empl[i].departamento;


    cout <<"Ingrese salario de empleado: ";
    cin >>empl[i].salario;
    cout << "\n";

    *total+=empl[i].salario; // Almacenamos el salario de todos los empleados
  }
 
//Ciclo para mostrar informacion
 cout <<"codigo \t Nombre \t Puesto \t Departamento \t Salario \n";
 for(int i=0; i<n; i++){
   cout << empl[i].codigo << "\t \t";
   cout << empl[i].nombre << "\t";
   cout << empl[i].puesto <<"\t";
   cout << departamento[empl[i].departamento-1] <<"\t \t";
   cout << empl[i].salario <<"\t";
  cout << "\n";
 }
  cout <<"Total de planilla Es:";
  cout << *total;
}