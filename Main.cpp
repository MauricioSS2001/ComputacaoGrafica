#include"utilities.h"


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

        int opcao = 0;
        // Lê os pontos
        float triangulo[6] = { -0.5, -0.5, 0, 0.5, 0.5, -0.5 };

        // Verifica se os pontos formam um triângulo
        float lado1 = sqrt(pow(triangulo[2] - triangulo[0], 2) + pow(triangulo[3] - triangulo[1], 2));
        float lado2 = sqrt(pow(triangulo[4] - triangulo[2], 2) + pow(triangulo[5] - triangulo[3], 2));
        float lado3 = sqrt(pow(triangulo[4] - triangulo[0], 2) + pow(triangulo[5] - triangulo[1], 2));

        float escalonacao;

        glfwSwapBuffers(window);

        while (opcao != 5) {
            glClear(GL_COLOR_BUFFER_BIT);
            cout << "\n=== Menu ===";
            cout << "\n1. Imprimir triangulo.";
            cout << "\n2. Escalonar triangulo";
            cout << "\n3. Transalacao do triangulo";
            cout << "\n4. Rotacao do triangulo";
            cout << "\n5. Encerrar";
            cout << "\nOpcao: ";
            cin >> opcao;

            switch (opcao) {
            case 1:

                exibeTriangulo(triangulo);

                verificarTipoTriangulo(lado1, lado2, lado3);
                glfwSwapBuffers(window);
                break;

            case 2:
                cout << "Digite por quantas vezes deseja escalonar o triangulo: ";
                cin >> escalonacao;

                escalonarT(triangulo, escalonacao);

                verificarTipoTriangulo(lado1, lado2, lado3);
                glfwSwapBuffers(window);
                break;

            case 3:
                float XTemp;
                float YTemp;

                cout << "Digite nova posicao em X: ";
                cin >> XTemp;
                cout << "Digite nova posicao em Y: ";
                cin >> YTemp;

                transladarT(triangulo, XTemp, YTemp);

                verificarTipoTriangulo(lado1, lado2, lado3);
                glfwSwapBuffers(window);
                break;

            case 4:
                float graus;

                cout << "Digite quantos graus quer rotacionar: ";
                cin >> graus;

                triangulo = rotacionarT(triangulo, graus);


                verificarTipoTriangulo(lado1, lado2, lado3);
                glfwSwapBuffers(window);

                break;

            case 5:
                return 0;
                break;

            default:
                
                break;
            }
           
        }

        // Atualiza a janela
        glfwSwapBuffers(window);
    }

    // Encerra o GLFW
    glfwTerminate();

    return 0;
}
