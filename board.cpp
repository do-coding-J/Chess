#include"board.h"

Board::Board()
{
	memcpy(playing_board, initial_board, sizeof(char) * 8 * 8);
}

char Board::get_piece_abbreviation(int x, int y)
{
	return Board::playing_board[x][y];
}


void Board::move_piece_abbreviation(int x1, int y1, int x2, int y2)
{
	char temp;
	if (playing_board[x2][y2] == 0x20) {
		temp = playing_board[x2][y2];
		playing_board[x2][y2] = playing_board[x1][y1];
		playing_board[x1][y1] = temp;
	}
	else {
		playing_board[x2][y2] = playing_board[x1][y1];
		playing_board[x2][y2] = 0x20;
	}
}

void Board::board_display()
{
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
		{
			std::cout << playing_board[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
