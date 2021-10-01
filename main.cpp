#include"piece.h"
#include"board.h"
#include"game.h"

int main() {
	Board board;
	Piece piece;

	//board.board_display();
	piece.setDescribe(board.get_piece_abbreviation(5, 1));
	std::cout << piece.getDescribe() << std::endl;
}