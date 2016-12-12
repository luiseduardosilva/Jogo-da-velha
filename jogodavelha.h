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

// Verifica se Ã© o jogador 1 ou 2, pode ser modificado depois.
int jogador = 0;

//Barra de titulo
int barra_titulo = 1;

////variavel criada pra atribuir valor a voltar_menu em jogar_novamente()
int repetir=0;

// ================================================*
void nome_jogo();
void barra_de_titulo();
void startjogo();
void startjogo_solo();
void creditos();
void atribui(int valor, int linha, int coluna, int player);
void mostramatriz();
void quantasvezesjogou();
void verificavitoria(int valor);
void verificavitorias(int valor, int valor1, int valor2, int valor3, int valor4, int valor5, int valor6);
void limpar();
void jogar_novamente();
// ================================================*

// INICIAR O JOGO, NOMES DOS 2 JOGADORES e quem vai ser "X" e "O".
void startjogo() {
	// Linha e Coluna, j & i;
	int linha = 0;
	int coluna = 0;

	/*
	* Nome do jogador 1 e 2
	* " %[^\n]s" serve para nÃ£o pular a linha quando se tem nome com espaÃ§o.
	*/
	barra_de_titulo();
	printf("Nome do jogador 1 para ser (X)\n");
	printf("-> ");
	scanf(" %[^\n]s", jogador1);
	if (strlen(jogador1) > 10){
        printf("Nome muito grande!");
        sleep(2);
        system("clear || cls");
        startjogo();
	}
	printf("Nome do jogador 2 para ser (O)\n");
	printf("-> ");
	scanf(" %[^\n]s", jogador2);
	if (strlen(jogador2) > 10){
        printf("Nome muito grande!");
        sleep(2);
        system("clear || cls");
        startjogo();
	}
	system("clear || cls");
    barra_de_titulo();
	printf("Jogador: %s ficou com (X), Jogador: %s ficou com (O)\n", jogador1, jogador2);
	sleep(2);
    system("clear || cls");
	// 9 jogadas... o maximo de vezes que pode ser jogado, 3x3 = 9. Matriz sÃ³ cabe 9 elementos;
	for (jogador = 0; jogador < 9; jogador++)// valor 3 para ser + rapido
	{
	    if(barra_titulo == 1){
            barra_de_titulo();
	    }
		printf("\t_____________________\n");
		mostramatriz();
		/****************************************************
		*													*
		* Foi colocado valor 1 e 5 para melhorar a contagem *
		* 1*3 = 3, 5x3 = 15, como tava ia ficar 2*3 = 9,	*
		* porem podia ter um 1+2 = 3.						*
		*													*
		****************************************************/
		if (jogador % 2 == 0)
		{
		    printf("\t_____________________\n");
			printf("\n\t\t Jogador 1 [%s] \n", jogador1);
			printf("Informe a linha: ");
			scanf("%d", &linha);
			printf("Informe a coluna: ");
			scanf("%d",  &coluna);
			system("clear || cls");

			/*coluna e linha >= 1 && coluna e linha >=1;
			* Caso jogador informe um valor errado o jogo vai entender e vai pedir pra ele jogar novamente;
			* jogador --; nÃ£o vai mudar de jogador;
			* contjogador1 & contjogador2 para deixar certo a contagem de qts vezes cada jogador jogou.
			*/
			if (linha >= 1 && linha <=3 && coluna >= 1 && coluna <= 3)
			{
				if ((matriz[linha-1][coluna-1]) == 0) // Verifica se a posiÃ§Ã£o Ã© valida e adiciona o valor
				{
					atribui(1, linha, coluna, 1);
				}
				else  //Nesse else, ele verifica se os valor na posiÃ§Ã£o informada jÃ¡ esta sendo ocupado
				{
					jogador--;
				}
			}
			else
			{
				printf("--\nValor informado invalido!\n");
				jogador--;
			}
		}
		else {
			printf("\t_____________________\n");
			printf("\n\t\t Jogador 2 [%s] \n", jogador2 );
			printf("Informe a linha: ");
			scanf("%d", &linha);
			printf("Informe a coluna: ");
			scanf("%d",  &coluna);
            system("clear || cls");
			// coluna e linha >= 1 && coluna e linha >=1;
			if (linha >= 1 && linha <=3 && coluna >= 1 && coluna <= 3)
			{
				if ((matriz[linha-1][coluna-1]) == 0) // Verifica se a posiÃ§Ã£o Ã© valida e adiciona o valor
				{
					atribui(5, linha, coluna, 2);
				}
				else //Nesse else, ele verifica se os valor na posiÃ§Ã£o informada jÃ¡ esta sendo ocupado
				{
					jogador--;
				}
			}
			else
			{
				printf("--\nValor informado invalido!\n");
				jogador--;
			}
		}
		verificavitoria(3);
		verificavitoria(15);
		//Empate seriam os valores 11 e 7 (2 O e 1 X ou 2 X e 1 O)!
	}
}

void startjogo_solo() {
	int linha = 0;
	int coluna = 0;
	srand(time(NULL));
    int linha_rand = 1 + rand() % 3;
    int coluna_rand = 1 + rand() % 3;


	barra_de_titulo();
	printf("Nome do jogador 1 para ser (X)\n");
	printf("-> ");
	scanf(" %[^\n]s", jogador1);
	if (strlen(jogador1) > 10){
        printf("Nome muito grande!");
        sleep(2);
        system("clear || cls");
        startjogo();
	}
	strcpy(jogador2, "Bot");
	system("clear || cls");

	printf("Jogador: %s ficou com (X), Jogador: %s ficou com (O)\n", jogador1, jogador2);
	sleep(2);
    system("clear || cls");

	for (jogador = 0; jogador < 9; jogador++)
	{

		printf("\t_____________________\n");
		mostramatriz();

		if (jogador % 2 == 0)
		{
		    printf("\t_____________________\n");
			printf("\n\t\t Jogador 1 [%s] \n", jogador1);
			printf("Informe a linha: ");
			scanf("%d", &linha);
			printf("Informe a coluna: ");
			scanf("%d",  &coluna);
			system("clear || cls");


			if (linha >= 1 && linha <=3 && coluna >= 1 && coluna <= 3)
			{
				if ((matriz[linha-1][coluna-1]) == 0)
				{
					atribui(1, linha, coluna, 1);
				}
				else
				{
					jogador--;
				}
			}
			else
			{
				printf("--\nValor informado invalido!\n");
				jogador--;
			}
		}
		else {
			printf("\t_____________________\n");
			printf("\n\t\t Jogador 2 [%s] \n", jogador2 );
			printf("Informe a linha: %i", linha_rand);
			linha = linha_rand;
			sleep(1);
			printf("\nInforme a coluna: %i", coluna_rand);
			coluna = coluna_rand;
			sleep(1);
            system("clear || cls");
			// coluna e linha >= 1 && coluna e linha >=1;
			if (linha >= 1 && linha <=3 && coluna >= 1 && coluna <= 3)
			{
				if ((matriz[linha-1][coluna-1]) == 0)
				{
					atribui(5, linha, coluna, 2);

				}
				else
				{
					jogador--;
					linha_rand = 1 + rand() % 3;
                    coluna_rand = 1 + rand() % 3;
				}
			}
			else
			{
				printf("--\nValor informado invalido!\n");
				jogador--;
			}
		}
		verificavitoria(3);
		verificavitoria(15);
    }
}

/*
* FunÃ§Ã£o criada para atribuir valores a matriz(jogo da velha)
* e fazer a contagem de quantas vezes cada jogador jogou.
*/
void atribui(int valor, int linha, int coluna, int player)
{
	// jogador == 1, adiciona +1 ao jogador 1;
	(player == 1) ? (contjogador1++) : (contjogador2++);
	// linha-1 e coluna-1 pq comeÃ§a em [0] [0];
	matriz[linha-1][coluna-1] = valor;
}



/*
* FunÃ§Ã£o criada para imprimir a matriz(Jogo da Velha) na tela.
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
		    // Onde tiver valor zero na matriz mostrar espaÃ§o em branco
		    if(matriz[linha][coluna] == 0)
		    {
                printf("\t|   |");
		    }
		    else
		    {
                // Onde tiver valor 1 na matriz mostrar X(Jogador 1)
                if(matriz[linha][coluna] == 1)
                {
                    printf("\t| X |");
                }
                else
                {
                	//Onde tiver valor 5 mostrar O(Bola, Jogador 2)
                    if(matriz[linha][coluna] == 5)
                    {
                        printf("\t| O |");
                    }
                }
		    }
  		}
	}
	printf("\n");
}

/*
* Verifica todas as posiÃ§Ãµes para uma vitoria
* caso tenha 3 pociÃ§Ãµes em sequencia
* com soma igual a 3 ou 15, temos um ganhador.
*/
void verificavitoria(int valor) {
	verificavitorias(valor, 1, 1, 1, 2, 1, 3);
	verificavitorias(valor, 2, 1, 2, 2, 2, 3);
	verificavitorias(valor, 3, 1, 3, 2, 3, 3);
	verificavitorias(valor, 1, 1, 2, 1, 3, 1);
	verificavitorias(valor, 3, 1, 2, 2, 1, 3);
	verificavitorias(valor, 1, 1, 2, 2, 3, 3);
	verificavitorias(valor, 1, 2, 2, 2, 3, 2);
	verificavitorias(valor, 1, 3, 2, 3, 3, 3);
}

/*
* Verifica se tem uma sequencia de 3 posiÃ§Ãµes com 15 pontos ou com 3 pontos.
* int valor = 3 ou 15 que Ã© a soma para uma vitoria
* int valor1, int valor2, int valor3, int valor4, int valor5, int valor6
* SÃ£o posiÃ§Ãµes na Matriz
*/
void verificavitorias(int valor, int valor1, int valor2, int valor3, int valor4, int valor5, int valor6) {
	//	Se o valor de uma sequencia da matriz for == valor(3 ou 15)
	// 	entÃ£o temos um ganhador
	if (matriz[valor1-1][valor2-1] + matriz[valor3-1][valor4-1] + matriz[valor5-1][valor6-1] == valor)
	{
		/*
		* Se a vez do jogador for impar, jogador 1 ganhou
		*/
		if (jogador % 2 == 0)
		{
		    system("clear || cls");
            barra_de_titulo();
            printf("\n\t\tJogador 1 [%s] ganhou!\n", jogador1);
		}
		// vez do jogador for par, Jogador 2 ganhou
		else {
			system("clear || cls");
            barra_de_titulo();
            printf("\n\t\tJogador 2 [%s] ganhou!\n", jogador2);
		}

		mostramatriz();
		quantasvezesjogou();
		limpar();
		jogar_novamente();
	}
	// verificaÃ§Ã£o de empate
	else if(matriz[valor1-1][valor2-1] + matriz[valor3-1][valor4-1] + matriz[valor5-1][valor6-1] == 7 && contjogador1 + contjogador2 == 9){
        system("clear || cls");
        barra_de_titulo();
        printf("\t\tEmpate!\n");
        mostramatriz();
		quantasvezesjogou();
		limpar();
		jogar_novamente();
	}
	// verificaÃ§Ã£o de empate
    else if(matriz[valor1-1][valor2-1] + matriz[valor3-1][valor4-1] + matriz[valor5-1][valor6-1] == 11 && contjogador1 + contjogador2 == 9){
        system("clear || cls");
        barra_de_titulo();
        printf("\t\tEmpate!\n");
        mostramatriz();
		quantasvezesjogou();
		limpar();
		jogar_novamente();
    }
}


//Jogar novamente ou sair do jogo
void jogar_novamente(){
	int i=0;
	printf("\n\t[1] JOGAR NOVAMENTE\n\t[2] VOLTAR AO MENU\n\t[3] SAIR\n\n");
	printf("-> ");
	scanf("%d", &i);
	printf("%d", i);
	switch(i){
		case 1:
			limpar();
			system("clear || cls");
			repetir=1;
			break;
			//nao está funcionando ainda
		case 2:
			repetir=1;
			break;
			//nao esta funcionando ainda
		case 3:
			exit(EXIT_SUCCESS);
			break;
		default:
			printf("Valor informado nao eh valido!!\n");
	}
}
