# include <stdio.h>
# include <stdlib.h>

int main () {
	int a, b, c;
	
	printf("Valor de A: ");
	scanf("%d", &a);
	
	printf("Valor de B: ");
	scanf("%d", &b);
	
	
	
	system("cls");
	
	
	
	if (a == b) {
		c = a + b;
		
		printf("Valor de A + B = %d", c);
	} else {
		c = a * b;
		
		printf("Valor de A * B = %d", c);
	}
	
	
	
	
	
	return 0;
}