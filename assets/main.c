#include "header.h"

int main(){
	setlocale(LC_ALL,"Portuguese");

	int option = 10;

	Lista *li;
	li = criar_lista();

	Alunos dados_alunos[10];{
		dados_alunos[0].matricula = 1;
		dados_alunos[0].n1 = 6.7;
		dados_alunos[0].n2 = 8.1;
		dados_alunos[0].n2 = 9.3;
		strcpy(dados_alunos[0].nome, "Alysson");

		dados_alunos[1].matricula = 2;
		dados_alunos[1].n1 = 5.9;
		dados_alunos[1].n2 = 9.1;
		dados_alunos[1].n2 = 4.3;
		strcpy(dados_alunos[1].nome, "Carlos");
	}

	while(option >= 0){
			printf(" --- Bem vindo --- \n");
			printf("1 - Inserir elemento no final da lista\n");
			printf("2 - Imprimir lista\n");
			printf("3 - Limpar tela\n");
			printf("4 - Sair\n\n| ");

			scanf("%d", &option);

			if(option == 1){
				inserir_final(li, dados_alunos[0]);
				inserir_final(li, dados_alunos[1]);
			}
		
			if(option == 2){
				imprime_lista(li);
			}

			if(option == 3){
				system("clear");
			}

			if(option == 4){
				option = -1;
			}

			printf("\n\n\n");
			
	}

	libera_lista(li);

}