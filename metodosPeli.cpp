#include <string>
#include "Pelicula.h"
void Pelicula::establecer_titulo(string tit){
    Pelicula.titulo=tit;
}
void Pelicula::establecer_duracion(int dur){
    Pelicula.duracion=dur;
}
void Pelicula::establecer_director(string dir){
    Pelicula.director=dir;
}
void Pelicula::establecer_sinopsis(string sin){
    Pelicula.sinopsis=sin;
}
void Pelicula::agregar_genero(){
}
void Pelicula::agregar_idioma(){
}
void Pelicula::string obtener_titulo(){
    return titulo;
}
string[] Pelicula::string[] obtener_generos(){
    return generos[];
}
string[] Pelicula::string[] obtener_idiomas(){
    return idiomas[];
}
int Pelicula::obtener_duracion(){
    return duracion;
}
string Pelicula::obtener_director(){
    return director;
}
string Pelicula::obtener_sinopsis(){
    return sinopsis;
}
void Pelicula::void mostrarDatos(){
    cout << "Titulo: " << Pelicula.titulo<<endl;
    cout << "Genero: " << endl;
    cout << "Idioma: " << endl;
    cout << "Director: "<< Pelicula.director<<endl;
    cout << "Duracion: "<< Pelicula.duracion<<endl;
    cout << "Sinopsis: " << Pelicula.sinopsis<<endl;
}
