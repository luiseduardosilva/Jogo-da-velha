#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

	// MATRIZ - JOGO!
int matriz[3][3];

// Quantas vezes cada jogador jogou;
// int contjogador1 = 0;
// int contjogador2 = 0;

// Nome dos Jogadores, [10] pouco? muda ai...
char jogador1[10+1];
char jogador2[10+1];

typedef enum {JOGAR_MULTIPLAYER=1, JOGAR_SOLO=2, RANKING, CREDITOS , SAIR} ENUM_OPC;

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
void salvarRanking();
void ranking_menu();


ENUM_OPC menu(int valormenu);