# include <stdio.h>
# include <stdlib.h>

int main () {
	int numb, res;
	
	printf("Digite um numero inteiro para a sua tabuada: ");
	scanf("%d", &numb);
	
	for (int i = 1; i <= 10; i++) {
		res = numb * i;
		printf("%d x %d = %d\n", numb, i, res);
	}
	
	
	return 0;
}