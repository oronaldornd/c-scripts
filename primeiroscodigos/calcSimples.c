#include <stdio.h>

int main(){
	int opcao;
	float num1, num2, resultado;

	do {
		printf("\n=== CALCULADORA SIMPLES ===\n");
		printf("1. Somar\n");
		printf("2. Subtrair\n");
		printf("3. Multiplicar\n");
		printf("4. Dividir\n");
		printf("0. Sair\n");
		printf("Escolha uma opção: ");
		scanf("%d", &opcao);

		if (opcao == 0) {
			printf("Encerrando o programa .\n");
			break;
		}
		printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        // Executa a operação escolhida
        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Erro: divisão por zero!\n");
                }
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (1);  // Laço infinito, até o usuário digitar 0

    return 0;
}

