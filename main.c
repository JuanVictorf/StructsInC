#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


typedef struct empresa{
	char nomeEmpresa[50];
	char areaAtuacao[50];
	float valorAtual;
	float valorAnterior;
}empresa; 


int main() {
	empresa vetEmpresa[2];

	int i;
	for( i = 0; i <= 1; i++){
		
		printf("Digite o nome da Empresa: \n ");
		scanf("%s", &vetEmpresa[i].nomeEmpresa);
		printf("Qual o seguimento da Empresa: \n");
		scanf("%s", &vetEmpresa[i].areaAtuacao);
		printf("Valor Atual da Acao: \n");
		scanf("%f", &vetEmpresa[i].valorAtual);
		printf("Valor Anterior da acao: \n");
		scanf("%f", &vetEmpresa[i].valorAnterior);
		
	}
	
	float subtracao;
	float variacaoPct;
	for(i = 0; i <= 1; i++){
		subtracao = vetEmpresa[i].valorAtual - vetEmpresa[i].valorAnterior;
		variacaoPct = subtracao * 0.1;
		printf("Nome da Empresa: %s\n", vetEmpresa[i].nomeEmpresa);
		printf("O seguimento da Empresa: %s\n", vetEmpresa[i].areaAtuacao);
		printf("O valor da cotacao atual: %f\n", vetEmpresa[i].valorAtual);
		printf("Valor Anterior da acao: %f\n", vetEmpresa[i].valorAnterior);
		printf("Variacao em porcentagem: %2.f\n", variacaoPct);
	}
	
	
	
}
