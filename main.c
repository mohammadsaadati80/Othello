#include <stdio.h>
#include "board.h" 
#include "endgame.h"
#include "passturn.h"
#include "get.h"

int main()
{
	printf("\t\tOthello\n");
	int turn = 1; /*moteghayyer nobat*/
	int end[1] = { 1 }; /*moteghayyer payan yaftan bazi*/
	int playgame[1] = { 1 }; /*moteghayyer dar ejra bodan bazi*/
	int pass[1] = { 1 }; /*moteghayyer barresi shart pass*/
	int b[1] = { 2 }, w[1] = { 2 }; /*moteghayyer shomaresh emtiyaz har bazikon*/
	char cells[9][9] = { { ' ','1','2','3','4','5','6','7','8' } ,{ '1','.','.','.','.','.','.','.','.' } ,{ '2','.','.','.','.','.','.','.','.' },{ '3','.','.','.','.','.','.','.','.' },{ '4','.','.','.','w','b','.','.','.' },{ '5','.','.','.','b','w','.','.','.' },{ '6','.','.','.','.','.','.','.','.' },{ '7','.','.','.','.','.','.','.','.' },{ '8','.','.','.','.','.','.','.','.' } }; /*moteghayyer haye khane haye jadval bazi*/

	while (playgame[0] == 1) { /*halghe jaryan bazi*/
		board(cells, b, w); /*tabe namayesh jadval bazi*/
		endgame(end, b, w, pass, cells, playgame); /*tabe barresi payan yaftan bazi*/

		if (playgame[0] == 0) { /*dar jaryan nabodan bazi va darkhast khorooj az bazi*/
			break;
		}

		passturn(cells, turn, pass, end); /*tabe barresi shart pass*/
		get(cells, turn, pass); /*tabe daryaft voroodi va jagozari aan va taghyir monaseb jadval ya    neshan dadan peyam haye marboot be sahih nabodan voroodi ya mojaz be entekhab naboodan*/

		b[0] = 0;
		w[0] = 0;

		for (int i = 1; i < 9; i++) { /*halghe shomaresh emtiaz haye har bazikon*/
			for (int j = 1; j < 9; j++) {
				if (cells[i][j] == 'b') {
					b[0] += 1;
				}
				else if (cells[i][j] == 'w') {
					w[0]++;
				}
			}
		}

		if ((b[0] + w[0]) == 64) { /*barresi payan yaftan yek dor bazi*/
			end[0] = 0;
		}

		if (turn == 1) /*taghyir nobat*/
			turn = 2;
		else
			turn = 1;

		if (end[0] == 0) { /*taghyir nobat dar halat payan yaftan yek dor bazi*/
			turn = 1;
		}
	}
	return 0;
}