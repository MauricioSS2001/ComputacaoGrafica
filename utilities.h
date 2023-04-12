#include <iostream>
#include <GLFW/glfw3.h>
#include <math.h>

using namespace std;

//Verifica tipo do triângulo
void verificarTipoTriangulo(float lado1, float lado2, float lado3)
{
    if (lado1 == lado2 && lado2 == lado3)
    {
        cout << "Tipo de triangulo: Equilatero";
    }
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
    {
        cout << "Tipo de triangulo: Isosceles";
    }
    else
    {
        cout << "Tipo de triangulo: Escaleno";
    }
}

//
void exibeTriangulo(float triangulo[6]) {

    glBegin(GL_TRIANGLES);
    glVertex2f(triangulo[0], triangulo[1]);
    glVertex2f(triangulo[2], triangulo[3]);
    glVertex2f(triangulo[4], triangulo[5]);
    glEnd();
}

int AcharPonto(float x1, float y1, float x2, float y2, float x3, float y3) {

    int ponto = 0;
    if (x1 < x2 && x1 < x3) {
        ponto = 1;
    }
    else {
        ponto = 0;
    };
    return ponto;

}

float escalonarT(float triangulo[6], float val) {

    for (int i = 0; i < 6; i++)
    {
        triangulo[i] = triangulo[i] * val;
    }

    exibeTriangulo(triangulo);

    return triangulo;
}

float transladarT(float triangulo[6], float valX, float valY) {
    
    triangulo[0] += valX;
    triangulo[1] += valY;
    triangulo[2] += valX;
    triangulo[3] += valY;
    triangulo[4] += valX;
    triangulo[5] += valY;

    exibeTriangulo(triangulo);

    return triangulo[6];

}

float rotacionarT(float triangulo[6], float angulo) {
    float valX1;
    float valY1;

    valX1 = triangulo[0];
    valY1 = triangulo[1];

    float Xauxiliar;
    float Yauxiliar;

    angulo = angulo * 3.14 / 180.0;

    triangulo[0] -= valX1;
    triangulo[1] -= valY1;
    Xauxiliar = cos(angulo) * triangulo[0] - sin(angulo) * triangulo[1];
    Yauxiliar = sin(angulo) * triangulo[0] + cos(angulo) * triangulo[1];
    triangulo[0] = Xauxiliar + valX1;
    triangulo[1] = Yauxiliar + valY1;

    triangulo[2] -= valX1;
    triangulo[3] -= valY1;
    Xauxiliar = cos(angulo) * triangulo[2] - sin(angulo) * triangulo[3];
    Yauxiliar = sin(angulo) * triangulo[2] + cos(angulo) * triangulo[3];
    triangulo[2] = Xauxiliar + valX1;
    triangulo[3] = Yauxiliar + valY1;

    triangulo[4] -= valX1;
    triangulo[5] -= valY1;
    Xauxiliar = cos(angulo) * triangulo[4] - sin(angulo) * triangulo[5];
    Yauxiliar = sin(angulo) * triangulo[4] + cos(angulo) * triangulo[5];
    triangulo[4] = Xauxiliar + valX1;
    triangulo[5] = Yauxiliar + valY1;

    exibeTriangulo(triangulo);

    return triangulo[6];
}
