//Aluna: Thalia Araujo Levy.
//Matrícula: 2021100455.
//Turma: 962R.

#include<stdio.h>

// variáveis globais
int controladoraPilha = 0;
int controladoraLista = 0;
int controladoraFila = 0;
	
int escolherEstrutura(){
	int estruturaEscolhida;
	printf("\n\t- Menu de estruturas\n\n");
	printf("\t1 - Lista; \n\t2 - Fila; \n\t3 - Pilha; \n\t0 - Fechar programa. \n");
	printf("\n\tDigite o numero correspondente a estrutura que deseja: ");
	scanf("%d", &estruturaEscolhida);
	return estruturaEscolhida;
}

int escolherAcaoLista(){
	int acaoEscolhida;
	printf("\n\n\t- Menu de acoes da lista\n\n");
	printf("\t1 - Inserir valor; \n\t2 - Excluir valor; \n\t0 - Voltar ao menu anterior.\n");
	printf("\n\tDigite o numero corresponde a uma acao: ");
	scanf("%d", &acaoEscolhida);
	return acaoEscolhida;
}
	
int escolherAcaoFila(){
	int acaoEscolhida;
	printf("\n\n\t- Menu de acoes da fila\n\n");
	printf("\t1 - Inserir valor; \n\t2 - Excluir valor; \n\t0 - Voltar ao menu anterior.\n");
	printf("\n\tDigite o numero corresponde a uma acao: ");
	scanf("%d", &acaoEscolhida);
	return acaoEscolhida;
}

int escolherAcaoPilha(){
	int acaoEscolhida;
	printf("\n\n\t- Menu de acoes da pilha\n\n");
	printf("\t1 - Inserir valor; \n\t2 - Excluir valor; \n\t0 - Voltar ao menu anterior.\n");
	printf("\n\tDigite o numero corresponde a uma acao: ");
	scanf("%d", &acaoEscolhida);
	return acaoEscolhida;
}

void inserirItemNaLista(int vetorLista[10]){
	
}

void excluirItemDaLista(int vetorLista[10]){
	
}

void imprimirFila(int vetorFila[10]){
	for(int i = 1; i <= controladoraFila; i++){
		printf("\n\t%d", vetorFila[i-1]);
	}
}
			
void inserirItemNaFila(int vetorFila[10]){
	int numeroInserido;
	
	for(int i = 0; i <= controladoraFila; i++){
		if(controladoraFila == 10){
			printf("\n\tFila cheia! Nao e possivel adicionar mais itens a fila.\n");
			break;
		}else{
			printf("\tDigite o numero a ser inserido: ");
			scanf("%d", &numeroInserido);
			vetorFila[controladoraFila] = numeroInserido;
			controladoraFila++;
			break;
		}
	}
}

void excluirItemDaFila(int vetorFila[10]){		
	if(controladoraFila != 0){
		for(int i = 0; i < controladoraFila; i++){
			vetorFila[i] = vetorFila[i+1];
		}
		controladoraFila = controladoraFila-1;
	}else{
		printf("\n\tFila vazia! Nao ha itens a serem removidos.\n");
	}
}

void imprimirPilha(int vetorPilha[10]){
	for(int i = controladoraPilha; i >= 1; i--){
		printf("\n\t%d", vetorPilha[i-1]);
	}
}

void inserirItemNaPilha(int vetorPilha[10]){
	int numeroInserido;
	for(int i = 0; i <= controladoraPilha; i++){
		if(controladoraPilha == 10){
			printf("\n\tPilha cheia! Nao e possivel adicionar mais itens a pilha.\n");
			break;
		}else{
			printf("\tDigite o numero a ser inserido: ");
			scanf("%d", &numeroInserido);
			vetorPilha[controladoraPilha] = numeroInserido;
			controladoraPilha++;
			break;
		}
	}
}

void excluirItemDaPilha(int vetorPilha[10]){
	if(controladoraPilha != 0){
		controladoraPilha = controladoraPilha-1;
	}else{
		printf("\n\tLista vazia! Nao ha itens a serem removidos.\n");
	}
}

main(){
	printf("\n Aluna: Thalia Araujo Levy. \n Turma: 962R. \n Matricula: 2021100455.\n\n\n");
	
	int vetorLista[10];
	int vetorFila[10];
	int vetorPilha[10];
	int opcaoEstrutura;

	opcaoEstrutura = escolherEstrutura();
	
	while(opcaoEstrutura != 0){
		
		switch(opcaoEstrutura){
			case 1: {
				int opcaoAcao;
				opcaoAcao = escolherAcaoLista();
				
				while(opcaoAcao != 0){
					switch(opcaoAcao){
						case 1: {
							inserirItemNaLista(vetorLista);
							break;
						}
						case 2: {
							excluirItemDaLista(vetorLista);
							break;
						}
						default: {
							printf("\n\tOpcao invalida. Por favor, tente novamente. \n");
							break;
						}
					}
				//	imprimirLista(vetorLista);
					opcaoAcao = escolherAcaoLista();
				}
				break;
			}
			case 2: {
				int opcaoAcao;
				opcaoAcao = escolherAcaoFila();
				
				while(opcaoAcao != 0){
					switch(opcaoAcao){
						case 1: {
							inserirItemNaFila(vetorFila);
							break;
						}
						case 2: {
							excluirItemDaFila(vetorFila);
							break;
						}
						default: {
							printf("\n\tOpcao invalida. Por favor, tente novamente. \n");
							break;
						}
					}
					imprimirFila(vetorFila);
					opcaoAcao = escolherAcaoFila();
				}
				break;
			}
			case 3: {
				int opcaoAcao;
				opcaoAcao = escolherAcaoPilha();
				
				while(opcaoAcao != 0){
					switch(opcaoAcao){
						case 1: {
							inserirItemNaPilha(vetorPilha);
							break;
						}
						case 2: {
							excluirItemDaPilha(vetorPilha);
							break;
						}
						default: {
							printf("\n\tOpcao invalida. Por favor, tente novamente. \n");
							break;
						}
					}
					imprimirPilha(vetorPilha);
					opcaoAcao = escolherAcaoPilha();
				}
				break;
			}
			default: {
				printf("Opcao invalida. Por favor, tente novamente. \n");
				break;
			}
			
		}
		opcaoEstrutura = escolherEstrutura();
	}
	printf("\nPrograma finalizado.");
}
