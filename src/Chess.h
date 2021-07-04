#include <iostream>

using namespace std;

class Chess{
	public:
	
	enum turn{
		White_ = 0,
		Black_
	};
	
	struct position{
		size_t col; //x
		size_t row; //y
	};
	

	string getDescribe(char c){
		mSelected = c;
		if(isupper(mSelected)){
			describe += "Black ";
		}
		else{
			describe += "White ";
		}
		
		switch(toupper(mSelected)){
			case 'P':{
				describe += "Pawn";
				break;
			}
			case 'R':{
				describe += "Rook";
				break;
			}
			case 'N':{
				describe += "Knight";
				break;
			}
			case 'B':{
				describe += "Bishop";
				break;
			}
			case 'Q':{
				describe += "Queen";
				break;
			}
			case 'K':{
				describe += "King";
				break;
			}
			default:{
				describe += "wrong piece";
			}
			break;
		}
		
		return describe;
	}
	
	const char InitialBoard[8][8] =
		{
			{ 'R',  'N',  'B',  'Q',  'K',  'B',  'N',  'R' },
   			{ 'P',  'P',  'P',  'P',  'P',  'P',  'P',  'P' },
			{ 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
			{ 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
			{ 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
			{ 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
			{ 'p',  'p',  'p',  'p',  'p',  'p',  'p',  'p' },
			{ 'r',  'n',  'b',  'q',  'k',  'b',  'n',  'r' },
		};
	
private:
	char mSelected;
	bool mColor;
	string describe;
};