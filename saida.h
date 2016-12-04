/*   _                         _        __     __   _ _
    | | ___   __ _  ___     __| | __ _  \ \   / /__| | |__   __ _
 _  | |/ _ \ / _` |/ _ \   / _` |/ _` |  \ \ / / _ \ | '_ \ / _` |
| |_| | (_) | (_| | (_) | | (_| | (_| |   \ V /  __/ | | | | (_| |
 \___/ \___/ \__, |\___/   \__,_|\__,_|    \_/ \___|_|_| |_|\__,_|
             |___/ By: Luis Eduardo, Tiago, Luis Felipe, Danillo e Daniel.
*/

// CREDITOS
void creditos()
{
	int valor_do_menu = 0;
	system("clear || cls");
	barra_de_titulo();

	printf("* -------------------------  CREDITOS  -------------------------- *\n\n");
	printf("Este jogo e o resultado do projeto do terceiro estagio do grupo A\n");
	printf("da turma do P2 de Ciencia da Computacao - Noite, alunos do professor\n");
	printf("Renato Atouguia Leite. Grupo este formado pelos alunos: Daniel Nathan,\n");
	printf("Danillo Rodrigues, Luis Eduardo, Luis Felipe e Tiago David.\n\n");
	printf("O conceito deste jogo e fazer com que o jogador faca todos os seus\n");
	printf("movimentos usando apenas os comandos do teclado.\n\n");
	printf("[1] VOLTAR AO MENU\t[2] SAIR\n\n");
	printf("-> ");
	scanf("%d", &valor_do_menu);
	while(valor_do_menu != 1 && valor_do_menu != 2)
	{
		if(valor_do_menu == 1) 
		{
			system("clear || cls");
			//menu();//tem que ver como vai fazer
		}
		else if(valor_do_menu == 2){
			exit(EXIT_SUCCESS);
		}
		else
		{
			system("clear || cls");
			barra_de_titulo();
			printf("* -------------------------  CREDITOS  -------------------------- *\n\n");
			printf("VALOR INFORMADO NAO E VALIDO!\n");
			printf("[1] VOLTAR AO MENU\t[2] SAIR\n\n");
			scanf("%d", &valor_do_menu);
		}
	}
}

/*
* 	Limpar a matriz
* Atribui valor zero para toda matriz.
*/
void limpar(){
	int i=0 , j=0;
	for(i=0; i<3; i++)
		for(j=0; j<3; j++){
			matriz[i][j]=0;
		}
}

// Barra de Titulo do Jogo.
void barra_de_titulo(){
	printf("     _                         _        __     __   _ _           \n");
	printf("    | | ___   __ _  ___     __| | __ _  \\ \\   / /__| | |__   __ _ \n");
	printf(" _  | |/ _ \\ / _` |/ _ \\   / _` |/ _` |  \\ \\ / / _ \\ | '_ \\ / _` |\n");
	printf("| |_| | (_) | (_| | (_) | | (_| | (_| |   \\ V /  __/ | | | | (_| |\n");
	printf(" \\___/ \\___/ \\__, |\\___/   \\__,_|\\__,_|    \\_/ \\___|_|_| |_|\\__,_|\n");
	printf("             |___/\n\n");
}

/*
* Função criada para mostrar quantas vezes cada jogador jogou,
* Pode ser aprimorada no futuro ou colocando um printf no main(jogo.c).
*/
void quantasvezesjogou(){
	printf("\n - %s jogou %d vezes. \n - %s jogou %d vezes. \n", jogador1, contjogador1, jogador2, contjogador2);
}
