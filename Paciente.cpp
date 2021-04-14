//////////////////Librerias//////////////////
#include "Paciente.h"
#include<iostream>
#include<stdlib.h>

using namespace std;
//////////////////Constructores//////////////////
Paciente::Paciente(){
  this -> nombre = "";
  this -> edad = 0;
  this -> sexo = "";
  this -> estadoC = "";
  this -> correo = "";
  this -> ID = 0;
}
Paciente::Paciente(string _nombre, int _edad, string _sexo, string _estadoC, string _correo, int _ID, int _hora, int _examen){
  this -> nombre = _nombre;
  this -> edad = _edad;
  this -> sexo = _sexo;
  this -> estadoC = _estadoC;
  this -> correo = _correo;
  this -> ID = _ID;
  this -> hora = _hora;
  this -> examen = _examen;
}
//////////////////Setters//////////////////
void Paciente::setNombre(string _nombre){
  this -> nombre = _nombre;
}
void Paciente::setEdad(int _edad){
  this -> edad = _edad;
}
void Paciente::setSexo(string _sexo){
  this -> sexo = _sexo;
}
void Paciente::setEstadoC(string _estadoC){
  this -> estadoC = _estadoC;
}
void Paciente::setCorreo(string _correo){
  this -> correo = _correo;
}
void Paciente::setID(int _ID){
  this -> ID = _ID;
}
void Paciente::setHora(int _hora){
  this -> hora = _hora;
}
void Paciente::setExamen(int _examen){
  this -> examen = _examen;
}
//////////////////Getters//////////////////
string Paciente::getNombre(){
  return nombre;
}
int Paciente::getEdad(){
  return edad;
}
string Paciente::getSexo(){
  return sexo;
}
string Paciente::getEstadoC(){
  return estadoC;
}
string Paciente::getCorreo(){
  return correo;
}
int Paciente::getID(){
  return ID;
}
int Paciente::getHora(){
  return hora;
}
int Paciente::getExamen(){
  return examen;
}
//////////////////Metodos//////////////////
void Paciente::altaPaciente(){
  cout<<">"<<endl;
  cout<<"Escoje el tipo de cita: "<<endl;
  cout<<"1. Examen rapido"<<endl;
  cout<<"2. Examen PCR"<<endl;
  cout<<"3. Tomar Ambos"<<endl;
  cin>>examen;
  cin.ignore(100,'\n');
  cout<<"Ingresa tu nombre: ";
  getline(cin,nombre);
  cout<<"Ingresa tu edad: ";
  cin>>edad;
  cout<<"Ingresa tu sexo (M/F): ";
  cin>>sexo;
  cout<<"Ingresa tu estado civil (S/C): ";
  cin>>estadoC;
  cout<<"Ingresa tu correo electronico: ";
  cin>>correo;
  return;
}
void Paciente::buscarPaciente(string name){
  if(nombre == name){
    cout<<"Nombre: "<<getNombre()<<endl;
    cout<<"Edad: "<<getEdad()<<endl;
    cout<<"Sexo: "<<getSexo()<<endl;
    cout<<"Estado Civil: "<<getEstadoC()<<endl;
    cout<<"Correo: "<<getCorreo()<<endl;
    precioAnalisis();
    cout<<"Hora: "<<getHora()<<endl;
    cout<<"ID: "<<getID()<<endl;
  }
}
void Paciente::modificarPaciente(int id){
  int  year, exam;
  string name, sex, ec, mail;

  if(ID == id){
    cout<<"--------------------------"<<endl;
    cout<<"Nombre: "<<getNombre()<<endl;
    cout<<"Edad: "<<getEdad()<<endl;
    cout<<"Sexo: "<<getSexo()<<endl;
    cout<<"Estado Civil: "<<getEstadoC()<<endl;
    cout<<"Correo: "<<getCorreo()<<endl;
    cout<<"Examen: "<<getExamen()<<endl;
    cout<<"Hora: "<<getHora()<<endl;
    cout<<"ID: "<<getID()<<endl;
    
    cin.ignore(100,'\n');
    cout<<"Ingresa el nuevo nombre: ";
    getline(cin,name);
    cout<<"Ingrese la nueva edad: ";
    cin>>year;
    cout<<"Ingrese el nuevo sexo (M/F): ";
    cin>>sex;
    cout<<"Ingrese el nuevo estado civil (S/C): ";
    cin>>ec;
    cout<<"Ingrese el nuevo correo: ";
    cin>>mail;
    cout<<"Ingrese el nuevo examen: "<<endl;
    cout<<"1. Examen rapido"<<endl;
    cout<<"2. Examen PCR"<<endl;
    cout<<"3. Tomar Ambos"<<endl;
    cin>>exam;

    setNombre(name);
    setEdad(year);
    setSexo(sex);
    setEstadoC(ec);
    setCorreo(mail);
    setExamen(exam);
  }
}
int Paciente::numeroPaciente(){
  int cont=0;
  if(nombre !=""){
    cont=1;
  }
  return cont;
}
void Paciente::mostrarDatosPaciente(){
  cout<<"--------------------------"<<endl;
  cout<<"Nombre: "<<getNombre()<<endl;
  cout<<"Edad: "<<getEdad()<<endl;
  cout<<"Sexo: "<<getSexo()<<endl;
  cout<<"Estado Civil: "<<getEstadoC()<<endl;
  cout<<"Correo: "<<getCorreo()<<endl;
  precioAnalisis();
  cout<<"Hora: "<<getHora()<<endl;
  cout<<"ID: "<<getID()<<endl;
  
}
void Paciente::bajaPaciente(int id){
  if(ID == id){
   cout<<"Nombre: "<<getNombre()<<endl;
   cout<<"Edad: "<<getEdad()<<endl;
   cout<<"Sexo: "<<getSexo()<<endl;
   cout<<"Estado Civil: "<<getEstadoC()<<endl;
   cout<<"Correo: "<<getCorreo()<<endl;
   precioAnalisis();
   cout<<"Hora: "<<getHora()<<endl;
   cout<<"ID: "<<ID<<endl;

    setNombre("");
    setEdad(0);
    setSexo("");
    setEstadoC("");
    setCorreo("");
    setExamen(0);
    setHora(0);
  }
}
void Paciente::precioAnalisis(){
  if(examen == 1){
    cout<<"------Examen Rapido------"<<endl;
    cout<<"Precio: $150.00"<<endl;
  }else if(examen == 2){
    cout<<"------Examen PCR------"<<endl;
    cout<<"Precio: $950.00"<<endl;
  }else if(examen == 3){
    cout<<"------Examen Rapido------"<<endl;
    cout<<"Precio: $150.00"<<endl;
    cout<<"------Examen PCR------"<<endl;
    cout<<"Precio: $950.00"<<endl;
  }
}
