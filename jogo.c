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
	Luís Felipe:
		https://github.com/LuisFelipeOliveira
	Danillo Rodrigues:
		https://github.com/danrodriguess
	
			9 de Novembro de 2016
*/

/*
* ----- Aviso -----
* Lembre de não colocar ç e acento!
*/
#include <stdio.h>
#include <stdlib.h>

// as paradas

void menu();



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
// main
int main() {
	menu();
	return 0;
}




