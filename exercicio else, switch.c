#include <stdio.h>

//o foco aqui era somente praticar o if, else e switch, pra fixar mesmo, vou fazer outros exercicios sim, mas senti que esse foi interessante para se revisar
//pensei em incrementar o while, creio que ele caberia nesa situação, na linha 37, onde ao inves do programa se encerrar, a mensagem de resposta inválida se repetisse ate que fosse inserido um dos dois valores válidos
//na resposta, o programa só funciona com o "S" e "N", tentei fazer com S e Sim, N e Nao, sei que é simples de fazer isso, mas tava com preguica e era tarde

int main(){
	
	int nota, notarec;
	char conceito, resp;
		
	printf("INFORME SUA NOTA GERAL: \n");
	scanf("%d", &nota);

	//invalida a nota caso seja menor que zero ou maior que cem
	if(nota<0 || nota>100){
		printf("NOTA INVALIDA\n");
	//é aquele esquema de nota tipo americana, nota A, B, C...
	//atribui o conceito baseado na nota geral do aluno à variável (conceito),  apos atribuição do valor á varivél, é mostrado na tela o conceito que o aluno recebeu
	} else if(nota >= 90){
		conceito='A';
		printf("CONCEITO: %c\n", conceito);
	} else if(nota>=80 && nota<=89){
		conceito='B';
		printf("CONCEITO: %c\n", conceito);
	} else if(nota>=70 && nota<=79){
		conceito='C';
		printf("CONCEITO: %c\n", conceito);
	//caso a nota esteja entre 60 e 69, o aluno nao está reprovado, mas também nao é aprovado, ele tem direito a uma recuperação
	} else if(nota>=60 && nota<=69){
		conceito='D';
		printf("CONCEITO: %c\n", conceito);
		printf("\n");
	//a pergunta á respeito da recuperação é feita
		printf("VOCE TEM DIREITO A RECUPERACAO, DESEJA REALIZA-LA?: \n");
		scanf(" %c", &resp);
	//se a resposta for "SIM", deverá ser digitada a nota da recuperacao	
		if(resp=='s'){
			printf("DIGITE A NOTA DA RECUPERACAO: \n");
			scanf("%d", &notarec);
	//mesmo esquema da invalidacao da nota caso a mesma seja menor que zero ou maior que cem	
			if(notarec<0 || notarec>100){
				printf("NOTA DA RECUPERACAO INVALIDA");
	//se a nota for maior ou igual a 70, o aluno está aprovado, caso seja menor, ele está reprovado 
			} else if(notarec>=70){
				printf("NOTA RECUPERADA");
			} else{
				printf("REPROVADO\n");
			}
	//se a resposta para a recuperacao for "NAO" o aluno estará automaticamente reprovado, pois nao estava aprovado e a unica maneira de recuperar a nota, seria por meio da recuperação
		} else if(resp=='n'){
			printf("REPROVADO");
		} else{
	//e caso seja digitado outra coisa além de SIM ou NAO, o programa dará "RESPOSTA INVÁLIDA"
			printf("RESPOSTA INVALIDA");
		}
	//aqui o programa só continua normalmente, fora do bloco executado caso a nota seja entre 60 e 69, onde se for menor que 59, ele é instantâneamente reprovado, sem chance à recuperação
	} else{
		conceito='F';
		printf("CONCEITO: %c\n", conceito);
	}
	//só mostra mensagens de acordo com o conceito recebido pelo aluno
	switch(conceito){
		case 'A':
			printf("OTIMO DESEMPENHO\n");
			break;
		case 'B':
			printf("CONTINUE ASSIM\n");
			break;
		case 'C':
			printf("CONSEGUIU, MAS PODE MELHORAR\n");
			break;
		case 'F':
			printf("RE-PRO-VA-DO\n");
			break;
	}
}
	
