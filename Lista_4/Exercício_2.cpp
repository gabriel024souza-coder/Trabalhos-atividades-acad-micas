# include <stdio.h>

int main () {
	int v[6];
	
	for (int i = 0; i < 6; i++) {
		printf("%d - Digite o valor inteiro: ", i + 1);
		scanf("%d", &v[i]);
	}
	
	printf("\n");
	
	for (int i = 0; i < 6; i++) {
		printf("%d ", v[i]);
	} 
	
	
	return 0;
}
