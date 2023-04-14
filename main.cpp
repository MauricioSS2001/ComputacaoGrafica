#include "triangulo.h"
#include "quadrado.h"

int main()
{
    // Inicializa o GLFW
    glfwInit();

    // Cria a janela
    GLFWwindow* window = glfwCreateWindow(1920, 1080, "Triangulo", NULL, NULL);
    glfwMakeContextCurrent(window);

    // Loop principal
    while (!glfwWindowShouldClose(window))
    {

        // Verifica eventos
        glfwPollEvents();

        // Limpa a tela
        glClear(GL_COLOR_BUFFER_BIT);

        //muda cor de fundo pra azul escuro
        glClearColor(0.0f, 0.2f, 0.3f, 1.0f);

        //Tamanhos base pro triangulo e quadrado
        //Cada linha equivale a um vértice da forma geométrica
        float coordenadasTriangulo[6] = { 
            -0.5, -0.5,
             0,    0.5,
             0.5, -0.5 
        };
        float coordenadasQuadrado[8] =  { 
            -0.5, -0.5,
             0.5, -0.5,
             0.5,  0.5,
            -0.5,  0.5 
        };

        //criando todos objetos que vão ser usados na imagem
        Triangulo T1(coordenadasTriangulo);
        Triangulo T2(coordenadasTriangulo);
        Triangulo T3(coordenadasTriangulo);
        Triangulo T4(coordenadasTriangulo);
        Triangulo T5(coordenadasTriangulo);
        Triangulo T6(coordenadasTriangulo);
        Triangulo T7(coordenadasTriangulo);
        Quadrado Q1(coordenadasQuadrado);
        Quadrado Q2(coordenadasQuadrado);
        Quadrado Q3(coordenadasQuadrado);
        Quadrado Q4(coordenadasQuadrado);
        Quadrado Q5(coordenadasQuadrado);
        Quadrado Q6(coordenadasQuadrado);

        //Chão marrom
        Q1.escalonar(2.5);
        Q1.transladar(0, -1.5);
        Q1.exibir(0.5, 0.25, 0);

        //Casa roxa
        Q2.escalonar(-0.66);
        Q2.transladar(-0.02, 0);
        Q2.exibir(0.3, 0, 0.2);

        //Triangulo 1 do telhado
        T1.escalonar(0.4);
        T1.escalonarNU(0.7);
        T1.transladar(-0.3, 0.3);
        T1.exibir(0.4, 0.1, 0);

        //Triangulo 2 do telhado
        T2.escalonar(0.4);
        T2.escalonarNU(0.7);
        T2.transladar(0.119, 0.638);
        T2.rotacionar(180);
        T2.exibir(0.4, 0.1, 0);

        //Triangulo 3 do telhado
        T3.escalonar(0.4);
        T3.escalonarNU(0.7);
        T3.transladar(-0.022, 0.30);
        T3.exibir(0.4, 0.1, 0);

        //Triangulo 4 do telhado
        T4.escalonar(0.4);
        T4.escalonarNU(0.7);
        T4.transladar(0.397, 0.638);
        T4.rotacionar(180);
        T4.exibir(0.4, 0.1, 0);
        
        //Triangulo 5 do telhado
        T5.escalonar(0.4);
        T5.escalonarNU(0.7);
        T5.transladar(0.256, 0.30);
        T5.exibir(0.4, 0.1, 0);

        //Janela 1
        Q3.escalonar(0.1);
        Q3.transladar(-0.25, 0);
        Q3.exibir(0.6, 0.1, 0.2);

        //Janela 2
        Q4.escalonar(0.1);
        Q4.transladar(0.2, 0);
        Q4.exibir(0.6, 0.1, 0.2);

        //Porta
        Q5.escalonar(0.2);
        Q5.escalonarNU(2);
        Q5.rotacionar(90);
        Q5.escalonarNU(0.7);
        Q5.transladar(0.2, -0.23);
        Q5.exibir(0, 0, 0);

        //Maçaneta
        T5.escalonar(0.03);
        T5.transladar(0.02, -0.15);
        T5.exibir(1, 1, 0);

        //Tronco da arvore
        Q6.escalonar(0.4);
        Q6.escalonarNU(2);
        Q6.rotacionar(90);
        Q6.escalonarNU(0.3);
        Q6.transladar(0.88, -0.4);
        Q6.exibir(0.3, 0.15, 0);

        //Folhas da arvore
        T7.escalonar(0.8);
        T7.escalonarNU(0.3);
        T7.transladar(0.7, 0.3);
        T7.exibir(0.1, 0.8, 0.1);
        
        glfwSwapBuffers(window);
    }

    // Encerra o GLFW
    glfwTerminate();

    return 0;
}
