#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
class Persona
{
private:
	string nombre;
    int edad;
    string usuario;
    string contrasenia;
    string tipo;
public:
	void establecer_nombre();
	void establecer_edad();
	void establecer_usuario();
	void establecer_contrasenia();
	void establecer_tipo();
	string obtener_nombre();
	int obtener_edad();
	string obtener_usuario();
	string obtener_contrasenia();
	string obtener_tipo();
	void mostrarDatos();
};
#endif // PERSONA_H_INCLUDED
