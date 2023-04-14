#ifndef Quadrado_hpp
#define Quadrado_hpp

#include <GLFW/glfw3.h>
#include <math.h>

using namespace std;

class Quadrado {
	
public:

	Quadrado(float c[8]);

	void exibir(float R, float G, float B);

	void escalonar(float val);
	void escalonarNU(float val); //Escalonação não uniforme pra espichar o quadrado
	void transladar(float valX, float valY);
	void rotacionar(float val);

private:

	float coordenadas[8];
};
#endif // !Quadrado_hpp
