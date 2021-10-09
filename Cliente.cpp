#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona{
  // atributos
  private : string nit;
  // constructor
  public :
  Cliente(){
  }
  Cliente(string nom,string ape,string dir,string f,int tel,string n) : Persona(nom,ape,dir,f,tel){ 
  nit = n;
  }
   void agregar(){
	    	cout<<"_________________________"<<endl;
	    	cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fn<<","<<telefono<<endl;
	    }
  // METODOS
  //set (modificar)
  void setNit(string n){nit = n;}
  void setNombres(string nom){nombres = nom;}
  void setApellidos(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setFn(string f){
	fn = f;
}
  void setTelefono(int tel){telefono = tel;}
  //get (mostrar)
  string getNit(){	return nit;}
  string getNombres(){	return nombres;}
  string getApellidos(){	return apellidos;}
  string getDireccion(){	return direccion;}
  string getFn(){
	return fn;
}
  int getTelefono(){	return telefono;}
  

};
