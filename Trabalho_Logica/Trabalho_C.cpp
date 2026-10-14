# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# define tam 100


int main () {
	char produtos[tam][30];
	float precos[tam];
	int quantidade[tam], escolha = -1, opcao = -1, codigos[tam], i = 0, busca = -3, qntProduCadastrados = 0, encontrado;

	while (escolha != 0) {
		system("cls");

		printf("------- CADASTRO -------\n\n");
		printf("1 - Cadastrar\n");
		printf("2 - Consultar\n");
		printf("3 - Listar\n");
		printf("4 - Alterar\n");
		printf("5 - Excluir\n");
		printf("0 - Sair\n\n");
		printf("Digite sua opcao: ");
		scanf("%i", &escolha);

		opcao = -1;

		switch (escolha) {
			case 1:
				system("cls");

				while (opcao != 0 && qntProduCadastrados < tam) {
					printf("Codigo do produto %d: ", i + 1);
					scanf("%d", &codigos[i]);

					printf("Nome do produto: ");
					scanf("%29s", produtos[i]);

					getchar();

					printf("Preco: R$ ");
					scanf("%f", &precos[i]);

					getchar();

					printf("Quantidade: ");
					scanf("%d", &quantidade[i]);
					i++;
					qntProduCadastrados++;

					printf("\n0-Sair\n1-Continuar\n");
					scanf("%d", &opcao);

					system("cls");
				}

				if (qntProduCadastrados == tam) {
					printf("Limite de produtos atingido!\n");
					getchar();
					getchar();
				}

				break;

			case 2:
				system("cls");

				printf("Codigo do produto procurado: ");
				scanf("%d", &busca);

				encontrado = 0;

				for (int i = 0; i < qntProduCadastrados; i++) {
					if (codigos[i] == busca) {
						printf("\n----- PRODUTO ENCONTRADO -----\n\n");
						printf("Codigo = %d\n", codigos[i]);
						printf("Nome = %s\n", produtos[i]);
						printf("Preco = %.2f\n", precos[i]);
						printf("Quantidade = %d", quantidade[i]);

						encontrado = 1;
					}
				}

				if (encontrado == 0) {
					printf("Produto nao encontrado...\n");
				}

				getchar();
				getchar();
				break;

			case 3:
				system("cls");

				if (qntProduCadastrados == 0) {
					printf("Sem produtos cadastrados...");
				}

				for (int i = 0; i < qntProduCadastrados; i++) {
					printf("------- PRODUTO %d -------\n\n", i + 1);
					printf("Codigo = %d\n", codigos[i]);
					printf("Nome = %s\n", produtos[i]);
					printf("Preco = %.2f\n", precos[i]);
					printf("Quantidade = %d\n\n", quantidade[i]);
				}

				printf("\nQuantidade de produtos da listagem -> %d", qntProduCadastrados);

				getchar();
				getchar();
				break;

			case 4:
				system("cls");

				printf("Digite o codigo do produto que deseja alterar: ");
				scanf("%d", &busca);

				encontrado = 0;

				for (int i = 0; i < qntProduCadastrados; i++) {
					if (codigos[i] == busca) {
						printf("\n------- ALTERAR -------\n\n");

						printf("(Atual = %d)\n", codigos[i]);
						printf("Novo codigo: ");
						scanf("%d", &codigos[i]);

						printf("\n(Atual = %s)\n", produtos[i]);
						printf("Novo nome: ");
						scanf("%29s", produtos[i]);

						printf("\n(Atual = R$ %.2f)\n", precos[i]);
						printf("Novo preco: R$ ");
						scanf("%f", &precos[i]);

						printf("\n(Atual = %d)\n", quantidade[i]);
						printf("Nova quantidade: ");
						scanf("%d", &quantidade[i]);

						encontrado = 1;
					}
				}

				if (encontrado == 0) {
					printf("Produto nao encontrado...");
					getchar();
					getchar();
				}

				break;

			case 5:
				system("cls");

				printf("Digite o codigo do produto que deseja excluir: ");
				scanf("%d", &busca);

				encontrado = 0;

				for (int i = 0; i < qntProduCadastrados; i++) {
					if (codigos[i] == busca) {
						printf("Produto encontrado!\n");
						printf("Deseja excluir? (1 - Sim / 0 - Nao): ");
						scanf("%d", &opcao);

						if (opcao == 1) {
							for (int j = i; j < qntProduCadastrados - 1; j++) {
								codigos[j] = codigos[j + 1];

								for (int k = 0; k < 30; k++) {
									produtos[j][k] = produtos[j + 1][k];
								}

								precos[j] = precos[j + 1];
								quantidade[j] = quantidade[j + 1];
							}

							qntProduCadastrados--;
							i = qntProduCadastrados;
							printf("Produto excluido!");
						}

						encontrado = 1;
					}
				}

				if (encontrado == 0) {
					printf("Produto nao encontrado...");
				}

				getchar();
				getchar();
				break;

			case 0:
				system("cls");
				printf("Programa encerrado...\n");
				break;
		}
	}

	return 0;
}
