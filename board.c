#include "board.h" /*tabe namayesh jadval bazi*/
#include <stdio.h>
void board(char cells[9][9], int b[1], int w[1])
{
	int j = 0;
	printf("\n");
	for (j = 0; j<9; j++) /*chap radif aval jadval bazi*/
		printf(" %c  ", cells[0][j]);
	printf("[b=%d w=%d]", b[0], w[0]); /*namayesh emtiyaz haye har bazikon*/
	printf("\n");

	for (int i = 1; i < 9; i++) { /*chap radif 2 ta 9 jadval bazi*/
		for (j = 0; j < 9; j++) {
			printf(" %c  ", cells[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}