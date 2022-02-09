#include "endgame.h" /*tabe barresi payan yaftan bazi*/
#include <stdio.h>
int endgame(int end[1], int b[1], int w[1], int pass[1], char cells[9][9], int playgame[1]) {
	if (end[0] == 0) { /*barresi payan yaftan yek dor bazi*/
		if (b[0] > w[0]) { /*moghayese emtiyaz har bazikon va namayesh peyam monaseb baraye barande */
			printf("\nThe BLACK player has won!\n");
			printf("Black: %d\nWhite: %d\n", b[0], w[0]);
		}
		if (b[0] < w[0]) {
			printf("\nThe White player has won!\n");
			printf("Black: %d\nWhite: %d\n", b[0], w[0]);
		}
		if (b[0] == w[0]) { /*halat mosavi shodan bazi va namayesh peyam marbote*/
			printf("\n The game is over!\n No one has won the game.\n");
			printf("Black: %d\nWhite: %d\n", b[0], w[0]);
		}
	}

	if (end[0] == 0) { /*barresi darkhast bazi jadid ya khorooj az barname*/
		printf("\nPress 1 if you want to start a new game. Otherwise press 2. \n");
		int q;
		scanf_s("%d", &q);
		if (q == 1) { /*darkhast bazi jadid*/
			end[0] = 1; /*bargardandan moteghayyer haye lazem baraye bazi jadid be halat avalieh*/
			pass[0] = 1;
			b[0] = 2, w[0] = 2;
			cells[0][0] = ' ', cells[0][1] = '1', cells[0][2] = '2', cells[0][3] = '3', cells[0][4] = '4', cells[0][5] = '5', cells[0][6] = '6', cells[0][7] = '7', cells[0][8] = '8';
			cells[1][0] = '1', cells[1][1] = '.', cells[1][2] = '.', cells[1][3] = '.', cells[1][4] = '.', cells[1][5] = '.', cells[1][6] = '.', cells[1][7] = '.', cells[1][8] = '.';
			cells[2][0] = '2', cells[2][1] = '.', cells[2][2] = '.', cells[2][3] = '.', cells[2][4] = '.', cells[2][5] = '.', cells[2][6] = '.', cells[2][7] = '.', cells[2][8] = '.';
			cells[3][0] = '3', cells[3][1] = '.', cells[3][2] = '.', cells[3][3] = '.', cells[3][4] = '.', cells[3][5] = '.', cells[3][6] = '.', cells[3][7] = '.', cells[3][8] = '.';
			cells[4][0] = '4', cells[4][1] = '.', cells[4][2] = '.', cells[4][3] = '.', cells[4][4] = 'w', cells[4][5] = 'b', cells[4][6] = '.', cells[4][7] = '.', cells[4][8] = '.';
			cells[5][0] = '5', cells[5][1] = '.', cells[5][2] = '.', cells[5][3] = '.', cells[5][4] = 'b', cells[5][5] = 'w', cells[5][6] = '.', cells[5][7] = '.', cells[5][8] = '.';
			cells[6][0] = '6', cells[6][1] = '.', cells[6][2] = '.', cells[6][3] = '.', cells[6][4] = '.', cells[6][5] = '.', cells[6][6] = '.', cells[6][7] = '.', cells[6][8] = '.';
			cells[7][0] = '7', cells[7][1] = '.', cells[7][2] = '.', cells[7][3] = '.', cells[7][4] = '.', cells[7][5] = '.', cells[7][6] = '.', cells[7][7] = '.', cells[7][8] = '.';
			cells[8][0] = '8', cells[8][1] = '.', cells[8][2] = '.', cells[8][3] = '.', cells[8][4] = '.', cells[8][5] = '.', cells[8][6] = '.', cells[8][7] = '.', cells[8][8] = '.'; /*bargardandan jadval be halat avvalieh baraye bazi jadid*/

			printf("\t\tOthello\n"); /*chap jadval bazi jadid*/
			int j = 0;
			printf("\n");
			for (j = 0; j<9; j++)
				printf(" %c  ", cells[0][j]);

			printf("[b=%d w=%d]", b[0], w[0]);
			printf("\n");

			for (int i = 1; i < 9; i++) {
				for (j = 0; j < 9; j++) {
					printf(" %c  ", cells[i][j]);
				}
				printf("\n");
			}
			printf("\n");
		}
		if (q == 2) { /*darkhast khorooj az barname*/
			playgame[0] = 0;
		}
	}
	return 0;
}