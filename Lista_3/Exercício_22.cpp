# include <stdio.h>
# include <stdlib.h>

int main () {
	
	for (int i = 10; i >= 0; i--) {
		printf("%d\n", i);
		if (i == 0) {
			printf("Fim da contagem!");
		}
	}
	
	
	return 0;
}