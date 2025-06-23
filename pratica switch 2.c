#include <stdio.h>

//&

int main(){
	
	 float nota, media;
	 int esc;
	 
	 printf("===MENU ACADEMICO===");
	 printf("\n");
	 printf("ESCOLHA UM NUMERO: \n");
	 printf("\n");
	 printf("1-VERIFICAR SITUACAO DO ALUNO\n");
	 printf("2-VERIFICAR CONCEITO POR NOTA\n");
	 printf("3-SAIR\n");
	 printf("\n");
	 scanf("%d", &esc);
	 
	 switch(esc){
	 	case 1:
	 		printf("INFORME A MEDIA DO ALUNO: \n");
	 		scanf("%f", &media);
	 		
	 		if (media>=7){
	 			printf("ALUNO APROVADO");
			}
			else if (media>=5 && media<=5.9){
				printf("ALUNO EM RECUPERACAO");
			}else{
				printf("ALUNO REPROVADO");
			}
			break;
		case 2:
			printf("INFORME A NOTA DO ALUNO: \n");
			scanf("%f", &nota);
			
			if(nota>=9){
				printf("CONCEITO A\n");
			} else if(nota>=7){
				printf("CONCEITO B\n");
			} else if(nota>=5){
				printf("CONCEITO C\n");
			} else if(nota>=3){
				printf("CONCEITO D\n");
			} else{
				printf("CONCEITO F\n");
			}
			break;			
		case 3:
			printf("CONSULTA ACADEMICA CANCELADA");
			break;
	 }
	 
}
