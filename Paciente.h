#ifndef PACIENTE_H
#define PACIENTE_H

//////////////////Clase//////////////////
class Paciente{
  private:
   string nombre;
   int edad;
   string sexo;
   string estadoC;
   string correo;
   int ID;
   int hora;
   int examen;
  public:
   //Constructores
   Paciente();
   Paciente(string, int, string, string, string, int, int, int);
   //Setters
   void setNombre(string);
   void setEdad(int);
   void setSexo(string);
   void setEstadoC(string);
   void setCorreo(string);
   void setID(int);
   void setHora(int);
   void setExamen(int);
   //Getters
   string getNombre();
   int getEdad();
   string getSexo();
   string getEstadoC();
   string getCorreo();
   int getID();
   int getHora();
   int getExamen();
   //Metodos
   void altaPaciente();
   void buscarPaciente(string name);
   void modificarPaciente(int id);
   int numeroPaciente();
   void mostrarDatosPaciente();
   void bajaPaciente(int id);
   void precioAnalisis();
};

#endif
