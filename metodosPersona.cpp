#include <string>
#include "Persona.h"

void Persona::registrar_nombre(string nom){
    Persona.nombre=nom;
}
void Persona::registrar_edad(int eda){
    Persona.edad=eda;
}
void Persona::registrar_usuario(string use){
    Persona.usuario=use;
}
void Persona::registrar_contrasenia(string cont){
    Persona.contrasenia=cont;
}
void Persona::registrar_tipo(string tip){
    Persona.tipo=tip;
}
string Persona::obtener_nombre(){
    return nombre;
}
int Persona::obtener_edad(){
    return edad;
}
string Persona::obtener_usuario(){
    return usuario;
}
string Persona::obtener_contrasenia(){
    return contrasenia;
}
string Persona::obtener_tipo(){
    return tipo;
}
