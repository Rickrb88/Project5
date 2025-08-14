 #include "Main.h"
 #include <stdio.h>
int main()
{
	float av;
	int x = 0;
	float soma = 0;
	int cond;

	do {
		printf("deseja entrar com um numero? (1-sim, 0-nao): ");
		scanf_s("%d", &cond);
		if (cond == 1) {
			printf("Digite um numero: ");
			scanf_s("%f", &av);
			soma += av;
			x = x + 1;
		}
	} while (cond == 1);

	float media = 0;
	if (x != 0) {
		media = soma / x;
		printf("A media dos numeros digitados e: %f\n", media);
	}

	return 0;

}
           