# include <stdio.h>


void expressarIdade(int dia, int mes, int ano) {
	int anosN, mesesN, diasN;

	anosN = 2026 - ano;
	mesesN = 10 - mes;
	diasN = 21 - dia;

	if (diasN < 0) {
		mesesN--;
		diasN = diasN + 30;
	}

	if (mesesN < 0) {
		anosN--;
		mesesN = mesesN + 12;
	}

	printf("\nIdade: %d anos, %d meses e %d dias", anosN, mesesN, diasN);
}


int main () {
	int dia, mes, ano;

	printf("Dia do seu nascimento: ");
	scanf("%i", &dia);

	printf("Mes: ");
	scanf("%i", &mes);

	printf("E ano: ");
	scanf("%d", &ano);


	expressarIdade(dia, mes, ano);

	return 0;
}