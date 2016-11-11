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
// ================================================*
void menu();
void startjogo();
void atribui(int valor, int x, int y);
void mostramatriz();
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


	printf("\t[1] JOGAR\n\t[2] RANK\n\t[3] CREDITOS\n");
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
		default:
			printf("Valor informado nao eh valido!\n");
			menu();
	}
}



// INICIAR O JOGO, NOMES DOS 2 JOGADORES e qual vai ser "X" e "O".
void startjogo() {
	// var jogadores
	char jogador1[10];
	char jogador2[10];
	// Linha e Coluna, j & i;
	int linha = 0;
	int coluna = 0;
	// Contador
	int cont = 0;
	// variave oi é só um teste!
	int oi = 1;
	// Nome dos jogadores
	printf("Nome do jogador 1 para ser (X)\n");
	scanf(" %[^\n]s", jogador1);
	printf("Nome do jogador 1 para ser (O)\n");
	scanf(" %[^\n]s", jogador2);
	printf("Jogador: %s ficou com (X), Jogador: %s ficou com (O)\n", jogador1, jogador2);
	// 9 é o maximo de vezes que pode ser jogado, 3x3 = 9. Matriz só cabe 9 elementos;
	for (cont = 0; cont < 3; cont++)// valor 3 para ser + rapido
	{
		// variavel de teste!
		oi++;
		printf("qual posicao deseja jogar?\n");
		// temporario só pra dizer qual vez tá;
		printf("%d\n", cont);
			if (oi % 2 == 0){
				scanf("%d %d", &linha, &coluna);
				atribui(1, linha, coluna);
			}
			else {
				scanf("%d %d", &linha, &coluna);
				atribui(2, linha, coluna);
			}
		mostramatriz();
	}
}


// ATRIBUIR VALOR A MATRIZ & POSICAO DA MATRIZ
void atribui(int valor, int linha, int coluna)
{
	// linha-1 e coluna-1 pq começa em [0] [0]
	matriz[linha-1][coluna-1] = valor;
}


// MOSTRA A MATRIZ, JOGO DA VELHA...
/*
* Falta colocar as | e ___ pra ficar bonito...
	
	1 | 2 | 1
	1 | 2 | 1
 	2 | 1 | 2

*/
void mostramatriz()
{
	// Linha e Coluna;
	//   i   &   J
	int linha = 0;
	int coluna = 0;
	for ( linha=0; linha<3; linha++){
		printf("\n");
		for ( coluna=0; coluna<3; coluna++)
	{
     printf ("%d", matriz[linha][coluna]);
  	}
  }
  printf("\n");
}
