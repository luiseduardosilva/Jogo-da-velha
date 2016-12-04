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
	LuÃƒÂ­s Felipe:
		https://github.com/LuisFelipeOliveira
	Danillo Rodrigues:
		https://github.com/danrodriguess

			9 de Novembro de 2016
*/

/*
* ----- Aviso -----
* Lembre de nÃƒÂ£o colocar ÃƒÂ§ e acento!
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
// jogo
#include "jogodavelha.h"
// Menu
#include "menu.h"
// Jogo saida
#include "saida.h"
//enum para escolha no menu
ENUM_OPC opc;

// main
int main() {
	menu();
	opc = opcao;
		 
	switch(opc){
		case JOGAR:
			system("clear || cls");
			startjogo();
			break;
		case RANKING:
			printf("EM ANDAMENTO");
			break;
			exit(EXIT_SUCCESS);
			//depois , retirar o exit_sucess , e colocar opcao para retornar ao menu
		case CREDITOS:
			creditos();
			break;
			//falta funcao para retornar ao menu e escolher outra opcao
		case SAIR:
			printf("\t\nOBRIGADO POR JOGAR!!");
			exit(EXIT_SUCCESS);

 	return 0;
	}
}
