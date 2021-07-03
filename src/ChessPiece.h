#include <iostream>

class Chess{
	public:
	
	enum player{
		WhitePlayer = 0,
		BlackPlayer
	}
	
	enum pieceColor{
		White = 0,
		Black
	}
	
	enum pieceType{
		Pawn = 0,
		Rook,
		Knight,
		Bishop,
		Queen,
		King	
	}
	
	struct position{
		int col; //x
		int row; //y
	}
	
	void BoardInit(){
		mBoardArr =
		{
			{ 'R',  'N',  'B',  'Q',  'K',  'B',  'N',  'R' },
   			{ 'P',  'P',  'P',  'P',  'P',  'P',  'P',  'P' },
			{ 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
		    { 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
			{ 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
		    { 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
		    { 'p',  'p',  'p',  'p',  'p',  'p',  'p',  'p' },
		    { 'r',  'n',  'b',  'q',  'k',  'b',  'n',  'r' },
		}
	}
	
	void viewBoard(){
		for(int i = 0; i < 8; i++){
			for(int j = 0; j < 8; j++){
				cout << mBoardArr[i][j] << ", "
			}
			cout << "\n";
		}
		cout << endl;
	}
	
	void setBoard(position from, position to){
		position temp = to;
		to = from;
		from = temp;
	}
	
	void selectPiece(position from){
		mSelected = mBoardArr[from::col][from::row];
	}
	
	bool getColor(mSelected){
		if(isupper(mSelected)){
			discribe =+ Black;
		}
		else{
			discribe =+ White;
		}
	}
	
	void getName(){
		
	}
	
private:
	int mBoardArr[8][8];
	char mSelected;
	bool mColor;
	string discribe;
};