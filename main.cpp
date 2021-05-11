//////////////////Librerias//////////////////
#include<iostream>
#include<stdlib.h>

using namespace std;
//////////////////Variables Globales//////////////////
const int MAX=17;

//////////////////Programa Principal//////////////////
int main(){
  int opc, id;
  int cont1=0, cont2=0,cont3=0;
  int pacientes=0;
  string name;
  int horario[]={700,730,800,830,900,930,1000,1030,1100,1130,1200,1230,1300,1330,1400,1430,1500};

  Paciente arreglo[MAX];

  cout<<"--------------------------"<<endl;
  cout<<"Bienvenido."<<endl;

  do{

    cout<<"--------------------------"<<endl;
    cout<<"Escoje la accion a realizar."<<endl;
    cout<<"1. Altas"<<endl;
    cout<<"2. Buscar"<<endl;
    cout<<"3. Modificar"<<endl;
    cout<<"4. Numero de pacientes"<<endl;
    cout<<"5. Informacion"<<endl;
    cout<<"6. Bajas"<<endl;
    cout<<"7. Salir"<<endl;
    cin>>opc;

    switch(opc){
      case 1:
        for(int i=0; i<MAX; i++){

         arreglo[i].altaPaciente();
         arreglo[i].setID(i+1234);
         arreglo[i].setHora(horario[i]);
        }
        break;
      case 2:
        cin.ignore(100,'\n');
        cout<<"Ingrese el nombre a buscar: ";
        getline(cin,name);
        for(int i=0; i<MAX; i++){
          if(arreglo[i].getNombre() == name){
            cont1++;
          }
        }
        if(cont1==1){
          for(int i=0; i<MAX; i++){
            arreglo[i].buscarPaciente(name);
          }
        }else{
         cout<<"No se han encontrado coincidencias"<<endl;
        }
        break;
      case 3:
        cout<<"Ingrese el ID: ";
        cin>>id;
        for(int i=0; i<MAX; i++){
          if(arreglo[i].getID() == id){
            cont3++;
          }
        }
        if(cont3==1){
          for(int i=0; i<MAX; i++){
            arreglo[i].modificarPaciente(id);
          }
        }else{
         cout<<"No se han encontrado coincidencias"<<endl;
        }
		break;    
      case 4:
        
        for(int i=0; i<MAX; i++){
         pacientes = pacientes + arreglo[i].numeroPaciente();
         
        }
        cout<<"Hay ["<<pacientes<<"] pacientes"<<endl;
        pacientes =0;
        break;
      case 5:
        for(int i=0; i<MAX; i++){
         arreglo[i].mostrarDatosPaciente();
        }
       break;
      case 6:
        cout<<"Ingrese el ID: ";
        cin>>id;
        for(int i=0; i<MAX; i++){
          if(arreglo[i].getID() == id){
            cont2++;
          }
        }
        if(cont2==1){
         for(int i=0; i<MAX; i++){
          arreglo[i].bajaPaciente(id);
         }
        }else{
          cout<<"No se han encontrado coincidencias"<<endl;
        }
        
        break;
      case 7:
        cout<<"Gracias por su preferencia"<<endl;
        cout<<"Bye Bye"<<endl;
        break;
      case 141002:
        cout<<"Creado por Panther"<<endl;
        cout<<"Encontraste un easter egg :)"<<endl;
        break;
      default:
        cout<<"No es una opcion."<<endl;
        break;
    }
  }while(opc !=7);
  system("PAUSE");
  return 0;
}
