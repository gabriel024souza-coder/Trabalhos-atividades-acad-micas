# include <stdio.h>

int main () {
	int voto = -1, acumulador1 = 0, acumulador2 = 0, acumulador3 = 0, totalVotos;
	
	while (voto != 0) {
		printf("-------------------------------------\n");
		printf("OBS: Para encerrar a votacao, digite 0.\n\n");
		printf("1 - Primeiro candidato\n");
		printf("2 - Segundo candidato\n");
		printf("3 - Terceiro candidato\n\n");
		printf("Digite o numero do candidato que deseja votar: ");
		scanf("%d", &voto);
		
		printf("\n");
		
		switch (voto) {
			case 0: 
				break;
			case 1:
				acumulador1++;
				break;
			case 2:
				acumulador2++;
				break;
			case 3:
				acumulador3++;
				break;
			default:
				printf("Candidato invalido");
		}
	}
	
	totalVotos = acumulador1 + acumulador2 + acumulador3;
	
	
	printf("Votos do candidato 1 = %d\n", acumulador1);
	printf("Votos do candidato 2 = %d\n", acumulador2);
	printf("Votos do candidato 3 = %d\n", acumulador3);
	printf("Total de votos = %d\n\n", totalVotos);
	
	if (acumulador1 > acumulador2 && acumulador1 > acumulador3) {
		printf("O candidato 1 e o vencedor");
	} else if (acumulador2 > acumulador1 && acumulador2 > acumulador3) {
		printf("O candidato 2 e o vencedor");
	} else if (acumulador3 > acumulador1 && acumulador3 > acumulador2){
		printf("O candidato 3 e o vencedor");
	} else {
		printf("Nenhum candidato e ganhador...");
	}




	
	return 0;
}