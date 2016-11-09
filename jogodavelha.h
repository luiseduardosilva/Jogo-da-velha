/*   _                         _        __     __   _ _           
    | | ___   __ _  ___     __| | __ _  \ \   / /__| | |__   __ _ 
 _  | |/ _ \ / _` |/ _ \   / _` |/ _` |  \ \ / / _ \ | '_ \ / _` |
| |_| | (_) | (_| | (_) | | (_| | (_| |   \ V /  __/ | | | | (_| |
 \___/ \___/ \__, |\___/   \__,_|\__,_|    \_/ \___|_|_| |_|\__,_|
             |___/ By: Luis Eduardo, Tiago, Luis Felipe, Danillo e Daniel.
*/

// MATRIZ - JOGO!
int matriz[3][3];

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
	int posx = 0;
	int posy = 0;
	int cont = 0;
	int oi = 1;
	// Nome dos jogadores
	printf("Nome do jogador 1 para ser (X)\n");
	scanf(" %[^\n]s", jogador1);
	printf("Nome do jogador 1 para ser (O)\n");
	scanf(" %[^\n]s", jogador2);
	printf("Jogador: %s ficou com (X), Jogador: %s ficou com (O)\n", jogador1, jogador2);
	while (cont != 9){
		cont++;
		oi++;
		printf("qual posicao deseja jogar?\n");
		printf("%d\n", cont);
			if (oi % 2 == 0){
				scanf("%d %d", &posx, &posy);
				(posy && posx != 1 || 2 || 3) ? (printf("erro\n")) : (printf("foi\n"));
				atribui(1, posx, posy);
			}
			else {
				scanf("%d %d", &posx, &posy);
				(posy && posx != 1 || 2 || 3) ? (printf("erro\n")) : (printf("Foi\n"));
				atribui(2, posx, posy);
			}
	}
}


// ATRIBUIR VALOR A MATRIZ & POSICAO DA MATRIZ
void atribui(int valor, int x, int y)
{
	// x-1 e y-1 pq começa em [0] [0]
	matriz[x-1][y-1] = valor;
}


// MOSTRA A MATRIZ, JOGO DA VELHA...
/*
* Falta colocar as | e ___ pra ficar bonito...
*/
void mostramatriz()
{
	int x = 0;
	int y = 0;
	for ( x=0; x<3; x++){
		printf("\n");
		for ( y=0; y<3; y++)
	{
     printf ("%d", matriz[x][y]);
  	}
  }
  printf("\n");
}
