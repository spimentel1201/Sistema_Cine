#ifndef PELICULA_H_INCLUDED
#define PELICULA_H_INCLUDED
#include <string>;
class Pelicula
{
private:
	string titulo;
    string[] genero;
    string[] idioma;
    int duracion;
    string director;
    string sinopsis;
public:
	void establecer_titulo();
	void establecer_duracion();
	void establecer_director();
	void establecer_sinopsis();
	void agregar_genero();
	void agregar_idioma();
	string obtener_titulo();
	int obtener_duracion();
	string obtener_director();
	string obtener_sinopsis();
	string[] obtener_generos();
	string[] obtener_idiomas();
	void mostrarDatos();
};
#endif // PELICULA_H_INCLUDED
