# include <stdio.h>
# include <stdlib.h>

int main () {
	float base, altura, area;
	
	printf("Base do retangulo: ");
	scanf("%f", &base);
	
	printf("Sua altura: ");
	scanf("%f", &altura);
	
	area = base * altura;
		
	
	system("cls");
	
	
	printf("Area do retangulo = %.1f", area);
	
	
	
	return 0;
}