// Menu jogo da velha
//jogodavelha.h

int matriz[3][3];
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
			printf("chamar funcao para jogar\n");
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
	// Nome dos jogadores
	printf("Nome do jogador 1 para ser (X)\n");
	scanf("%s", jogador1);
	printf("Nome do jogador 1 para ser (O)\n");
	scanf("%s", jogador2);
	printf("Jogador: %s ficou com (X), Jogador: %s ficou com (O)\n", jogador1, jogador2);
}


// ATRIBUIR VALOR A MATRIZ & POSISAO DA MATRIZ
void atribui(int valor, int x, int y)
{
	// x-1 e y-1 pq começa em [0] [0]
	matriz[x-1][y-1] = valor;
}


// MOSTRA O A MATRIZ, JOGO DA VELHA...
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
