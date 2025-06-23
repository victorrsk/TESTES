#include <stdio.h>

char defconceito(int nota){
		if(nota<0 || nota>100){
			printf("NOTA INVALIDA\n");
			return 'x';
		} else if (nota>=90 && nota<=100){
			return 'A';
		} else if (nota>=80 && nota<=89){
			return 'B';
		} else if (nota>=70 && nota<=79){
			return 'C';
		} else if (nota>=60 && nota<=69){
			return 'D';
		} else{
			return 'F';
		}
	}
int main(){
	
	int nota;
	char conceito;
	
	printf("DIGITE A NOTA GERAL: \n");
	scanf("%d", &nota);
	
	conceito=defconceito(nota);
	
	if(conceito!='x'){
		printf("SEU CONCEITO: %c\n", conceito);
	}
	
	return 0;
}
