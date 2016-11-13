/*   _                         _        __     __   _ _
    | | ___   __ _  ___     __| | __ _  \ \   / /__| | |__   __ _
 _  | |/ _ \ / _` |/ _ \   / _` |/ _` |  \ \ / / _ \ | '_ \ / _` |
| |_| | (_) | (_| | (_) | | (_| | (_| |   \ V /  __/ | | | | (_| |
 \___/ \___/ \__, |\___/   \__,_|\__,_|    \_/ \___|_|_| |_|\__,_|
             |___/ By: Luis Eduardo, Tiago, Luis Felipe, Danillo e Daniel.
*/

// MATRIZ - JOGO!
int matriz[3][3];

// Quantas vezes cada jogador jogou;
int contjogador1 = 0;
int contjogador2 = 0;

// Nome dos Jogadores, [10] pouco? muda ai...
char jogador1[10+1];
char jogador2[10+1];

// Verifica se é o jogador 1 ou 2, pode ser modificado depois.
int jogador = 0;

// ================================================*
void menu();
void startjogo();
void atribui(int valor, int linha, int coluna, int player);
void mostramatriz();
void quantasvezesjogou();
void verificavitoria(int valor);
void verificavitorias(int valor, int valor1, int valor2, int valor3, int valor4, int valor5, int valor6);
// ================================================*

// Menu jogo da velha
void menu()
{
	int valormenu = 0;

	// PRINT MENU
	printf("     _                         _        __     __   _ _           \n");
	printf("    | | ___   __ _  ___     __| | __ _  \\ \\   / /__| | |__   __ _ \n");
	printf(" _  | |/ _ \\ / _` |/ _ \\   / _` |/ _` |  \\ \\ / / _ \\ | '_ \\ / _` |\n");
	printf("| |_| | (_) | (_| | (_) | | (_| | (_| |   \\ V /  __/ | | | | (_| |\n");
	printf(" \\___/ \\___/ \\__, |\\___/   \\__,_|\\__,_|    \\_/ \\___|_|_| |_|\\__,_|\n");
	printf("             |___/\n\n");


	printf("\t[1] JOGAR\n\t[2] RANK\n\t[3] CREDITOS\n\t[4] SAIR\n");
	printf("Escolha uma opcao: ");

	// SWITCH MENU
	scanf("%d", &valormenu);

	switch (valormenu)
	{
		case 1:
			startjogo();
			break;
		case 2:
			printf("print Rank\n");
			break;
		case 3:
			printf("Creditos!\n");
			break;
		case 4:
			exit(EXIT_SUCCESS);
			break;
		default:
			printf("Valor informado nao eh valido!\n");
			menu();
	}
}



// INICIAR O JOGO, NOMES DOS 2 JOGADORES e quem vai ser "X" e "O".
void startjogo() {
	// Linha e Coluna, j & i;
	int linha = 0;
	int coluna = 0;

	/*
	* Nome do jogador 1 e 2
	* " %[^\n]s" serve para não pular a linha quando tiver nome com espaço.
	*/
	printf("Nome do jogador 1 para ser (X)\n");
	scanf(" %[^\n]s", jogador1);
	printf("Nome do jogador 2 para ser (O)\n");
	scanf(" %[^\n]s", jogador2);
	printf("Jogador: %s ficou com (X), Jogador: %s ficou com (O)\n", jogador1, jogador2);

	// 9 jogador o maximo de vezes que pode ser jogado, 3x3 = 9. Matriz só cabe 9 elementos;
	for (jogador = 0; jogador < 9; jogador++)// valor 3 para ser + rapido
	{
		printf("\t_____________________\n");
		mostramatriz();
		// temporario só pra dizer qual vez tá;
		/****************************************************
		*						REMOVER						*
		* Foi colocado valor 1 e 5 para melhorar a contagem *
		* 1*3 = 3, 5x3 = 15, como tava ia ficar 2*3 = 9,	*
		* porem podia ter um 1+2 = 3.						*
		*													*
		****************************************************/
		if (jogador % 2 == 0)
		{
			printf("\t_____________________\n");
			printf("\n\t\tJogador 1\n");
			printf("Informe a linha: ");
			scanf("%d", &linha);
			printf("Informe a coluna: ");
			scanf("%d",  &coluna);
			
			/*coluna e linha >= 1 && coluna e linha >=1;
			* Caso jogador informe um valor errado o jogo vai entender e vai pedir pra ele jogar novamente;
			* jogador --; não vai mudar de jogador;
			* contjogador1 & contjogador2 para deixar certo a contagem de qts vezes cada jogador jogou.
			*/
			if (linha >= 1 && linha <=3 && coluna >= 1 && coluna <= 3)
			{
				if ((matriz[linha-1][coluna-1]) == 0) // Verifica se a posição é valida e adiciona o valor
				{
					atribui(1, linha, coluna, 1);
				}
				else  //Nesse else, ele verifica se os valor na posição informada já esta sendo ocupado 
				{
					jogador--;
				}
			}
			else
			{
				printf("--\nValor informado nao eh valido\n");
				jogador--;
			}
		}
		else {
			printf("\t_____________________\n");
			printf("\n\t\tJogador 2\n");
			printf("Informe a linha: ");
			scanf("%d", &linha);
			printf("Informe a coluna: ");
			scanf("%d",  &coluna);
			// coluna e linha >= 1 && coluna e linha >=1;
			if (linha >= 1 && linha <=3 && coluna >= 1 && coluna <= 3)
			{
				if ((matriz[linha-1][coluna-1]) == 0) // Verifica se a posição é valida e adiciona o valor
				{
					atribui(5, linha, coluna, 2);
				}
				else //Nesse else, ele verifica se os valor na posição informada já esta sendo ocupado
				{
					jogador--;
				}
			}
			else
			{
				printf("--\nValor informado nao eh valido\n");
				jogador--;
			}
		}
		verificavitoria(3);
		verificavitoria(15);
	}
}


/*
* Função criada para atribuir valores a matriz(jogo da velha)
* e fazer a contagem de quantas vezes cada jogador jogou.
*/
void atribui(int valor, int linha, int coluna, int player)
{
	// jogador == 1, adiciona +1 ao jogador 1;
	(player == 1) ? (contjogador1++) : (contjogador2++);
	// linha-1 e coluna-1 pq começa em [0] [0];
	matriz[linha-1][coluna-1] = valor;
}



/*
* Função criada para mostrar a matriz(Jogo da Velha).
*/
void mostramatriz()
{
	// Linha e Coluna;
	//   i   &   J
	int linha = 0;
	int coluna = 0;
	for ( linha=0; linha<3; linha++)
	{
		printf("\n");
		for ( coluna=0; coluna<3; coluna++)
		{
			printf ("\t| %d |", matriz[linha][coluna]);// tabela temporaria!
  		}
	}
	printf("\n");
}

/*
* Função criada para mostrar quantas vezes cada jogador jogou,
* Pode ser aprimorada no futuro ou colocando um printf no main(jogo.c).
*/
void quantasvezesjogou(){
	printf("\nJogador: %s jogou %d vezes\nJogador: %s jogou %d vezes\n", jogador1, contjogador1, jogador2, contjogador2);
}

/*
* Verifica se o jogador conseguio a pontução 3 ou 15 para vitoria
*/

void verificavitoria(int valor) {
	//linhas
	verificavitorias(valor, 1, 1, 1, 2, 1, 3);
	verificavitorias(valor, 2, 1, 2, 2, 2, 3);
	verificavitorias(valor, 3, 1, 3, 2, 3, 1);
	verificavitorias(valor, 1, 1, 2, 1, 3, 1);
	verificavitorias(valor, 2, 1, 2, 2, 2, 3);
	verificavitorias(valor, 3, 1, 3, 2, 3, 3);
	verificavitorias(valor, 3, 1, 2, 2, 1, 3);
	verificavitorias(valor, 1, 1, 2, 2, 3, 3);
	verificavitorias(valor, 1, 2, 2, 1, 3, 2);
	verificavitorias(valor, 1, 3, 2, 3, 3, 3);

}

void verificavitorias(int valor, int valor1, int valor2, int valor3, int valor4, int valor5, int valor6) {
	//linhas
	if (matriz[valor1-1][valor2-1] + matriz[valor3-1][valor4-1] + matriz[valor5-1][valor6-1] == valor)
	{
		if (jogador % 2 == 0)
		{
			printf("Jogador 2 Ganhou\n");
		}
		else {
			printf("Jogador 1 Ganhou\n");
		}
		quantasvezesjogou();
		exit(EXIT_SUCCESS);
	}
}
