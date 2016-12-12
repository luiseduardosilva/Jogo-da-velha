/*   _                         _        __     __   _ _
    | | ___   __ _  ___     __| | __ _  \ \   / /__| | |__   __ _
 _  | |/ _ \ / _` |/ _ \   / _` |/ _` |  \ \ / / _ \ | '_ \ / _` |
| |_| | (_) | (_| | (_) | | (_| | (_| |   \ V /  __/ | | | | (_| |
 \___/ \___/ \__, |\___/   \__,_|\__,_|    \_/ \___|_|_| |_|\__,_|
             |___/ By: Luis Eduardo, Tiago, Luis Felipe, Danillo e Daniel.
	GitHub list:
	Luis Eduardo:
		https://github.com/luiseduardosilva
	Tiago David:
		https://github.com/tiagodavid
	LuÃƒÆ’Ã‚Â­s Felipe:
		https://github.com/LuisFelipeOliveira
	Danillo Rodrigues:
		https://github.com/danrodriguess

			9 de Novembro de 2016
*/

/*
* ----- Aviso -----
* Lembre de nÃƒÆ’Ã‚Â£o colocar ÃƒÆ’Ã‚Â§ e acento!
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
// jogo
#include "jogodavelha.h"
// Menu
#include "menu.h"
// Jogo saida
#include "saida.h"
//enum para escolha no menu
ENUM_OPC opc;
//int jogar_novamente=0;



// main
int main() {

	do{
		// menu();
		// opc= opcao;
		printf("* ---------------------------  MENU  ---------------------------- *\n\n");
		printf("\t[1] - JOGAR MULTIPLAYER\n\t[2] - JOGAR SOLO\n\t[3] - RANKING\n\t[4] - CREDITOS\n\t[5] - SAIR");
		printf("\n->  ");
		switch(menu(valormenu)){
		case JOGAR_MULTIPLAYER:
			system("clear || cls");
			startjogo();
			break;
        case JOGAR_SOLO:
            system("clear || cls");
            startjogo_solo();
            break;
		case RANKING:
			ranking_menu();
			break;
		case CREDITOS:
			creditos();
			break;
		case SAIR:
			printf("\t\nOBRIGADO POR JOGAR!!\n\n");
			exit(EXIT_SUCCESS);


		}
	}while(voltar_menu!=2);
	return 0;
}
