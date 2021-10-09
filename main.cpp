#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion,fn,cod_empleado,puesto;
	int telefono;
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese fecha de nacimiento:";
	cin>>fn;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	cout<<"Ingrese el codigo del empleado:"; //nuevo
	cin>>cod_empleado;
	cout<<"Ingrese el puesto:"; //nuevo dos
	cin>>puesto;
	// instanciar un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,fn,telefono,nit);
	obj.agregar();
	cout<<"Ingrese Nit: ";
	cin>>nit;
	obj.setNit(nit);
	obj.agregar();
	// instanciar un objeto y utilizar get and set
	
/*	Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	//obj.mostrar();
	cout<<"Nit: "<<obj.getNit()<<endl;
	cout<<"Nombres: "<<obj.getNombres()<<endl;
	cout<<"Apellidos: "<<obj.getApellidos()<<endl;
	cout<<"Direccion: "<<obj.getDireccion()<<endl;
	cout<<"Telefono: "<<obj.getTelefono()<<endl;
*/	
}
