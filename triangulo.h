#ifndef Triangulo_hpp
#define Triangulo_hpp

#include <iostream>
#include <GLFW/glfw3.h>
#include <math.h>
using namespace std;

class Triangulo {

public:
	Triangulo(float c[6]);

	void exibir(float R, float G, float B);

	void verificarTipo();
	string imprimirTipo();

	void escalonar(float val);
	void escalonarNU(float val); // Escalonação não uniforme dos dois pontos de baixo
	void transladar(float valX, float valY);
	void rotacionar(float angulo);

private:
	string tipo;
	float lados[3];
	float coordenadas[6];
};


#endif // !Triangulo_hpp
