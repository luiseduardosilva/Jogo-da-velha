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

//enum utilizada para o menu do jogo , =1 para nao comeca com 0, logo que tem existe opcao 0
typedef enum {JOGAR_MULTIPLAYER=1, JOGAR_SOLO=2, RANKING, CREDITOS , SAIR} ENUM_OPC;



void menu()
{
	system("clear || cls");
	// PRINT MENU
	barra_de_titulo();
	printf("* ---------------------------  MENU  ---------------------------- *\n\n");
	printf("\t[1] - JOGAR MULTIPLAYER\n\t[2] - JOGAR SOLO\n\t[3] - RANKING\n\t[4] - CREDITOS\n\t[5] - SAIR");
	printf("\n->  ");

	do{
		scanf("%d", &valormenu);
		if(valormenu<1 || valormenu>5){

			printf("Valor Invalido");
			sleep(1);
			system("clear || cls");
			// PRINT MENU
			barra_de_titulo();
			printf("* ---------------------------  MENU  ---------------------------- *\n\n");
			printf("\t[1] - JOGAR MULTIPLAYER\n\t[2] - JOGAR SOLO\n\t[3] - RANKING\n\t[4] - CREDITOS\n\t[5] - SAIR");
			printf("\n->  ");
		}

	}while(valormenu<1 || valormenu>5);

	//opcao vai receber o valor da enum
	switch(valormenu) {
		case 1 :
				opcao = JOGAR_MULTIPLAYER;
				break;
			case 2 :
                opcao = JOGAR_SOLO;
				break;
			case 3 :
                opcao = RANKING;
				break;
			case 4 :
				opcao = CREDITOS;
				break;
            case 5:
                opcao = SAIR;
				break;
	}


}
