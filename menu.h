/*   _                         _        __     __   _ _
    | | ___   __ _  ___     __| | __ _  \ \   / /__| | |__   __ _
 _  | |/ _ \ / _` |/ _ \   / _` |/ _` |  \ \ / / _ \ | '_ \ / _` |
| |_| | (_) | (_| | (_) | | (_| | (_| |   \ V /  __/ | | | | (_| |
 \___/ \___/ \__, |\___/   \__,_|\__,_|    \_/ \___|_|_| |_|\__,_|
             |___/ By: Luis Eduardo, Tiago, Luis Felipe, Danillo e Daniel.
*/

//Menu
int valormenu = 0;

//ira atribuir valor a typeenum

int opcao;

//enum utilizada para o menu do jogo , =1 para não começar com 0
typedef enum {JOGAR=1, RANKING, CREDITOS , SAIR} ENUM_OPC;

void menu()
{	
	system("clear || cls");
	// PRINT MENU
	barra_de_titulo();
	printf("* ---------------------------  MENU  ---------------------------- *\n\n");
	printf("\t[1] - JOGAR\n\t[2] - RANKING\n\t[3] - CREDITOS\n\t[4] - SAIR\n");
	printf("\n->  ");
	
	scanf("%d", &valormenu);
	
	//opcao vai receber o valor da enum
    do {	
		switch(valormenu) {
			case 1 :
				opcao = JOGAR;
				break;
			case 2 :
				opcao = RANKING;
				break;
			case 3 :
				opcao = CREDITOS;
				break;
				//nao funcional ainda falta ter a opcao de redirencionamento para o menu
			case 4 :
				opcao = SAIR;
				break;
			default :
				valormenu = 0;
				printf("VALOR INVALIDO! \n");
				printf("\t[1] - JOGAR\n\t[2] - RANKING\n\t[3] - CREDITOS\n\t[4] - SAIR\n");
				scanf("%d", &valormenu);
				//nao funcional ainda falta ter a opcao de redirencionamento para o menu
		}	
	} while(valormenu<1 & valormenu>4);					
 	
}
