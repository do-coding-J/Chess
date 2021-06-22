// 검은 색이 true, 대문자, 위 쪽
// 할 것
// 말의 움직임을 어떻게 저장 할 것인가?
// 보드한칸에 이니셜로 무슨 말인지 알아내기

/*
	0.0 0.1 0.2 0.3 0.4 0.5 0.6 0.7
	1.0 1.1 1.2 1.3 1.4 1.5 1.6 1.7
	2.0 2.1 2.2 2.3 2.4 2.5 2.6 2.7
	3.0 3.1 3.2 3.3 3.4 3.5 3.6 3.7
	4.0 4.1 4.2 4.3 4.4 4.5 4.6 4.7
	5.0 5.1 5.2 5.3 5.4 5.5 5.6 5.7
	6.0 6.1 6.2 6.3 6.4 6.5 6.6 6.7
	7.0 7.1 7.2 7.3 7.4 7.5 7.6 7.7
*/
#include <iostream>
#include <cctype>

using namespace std;

// --------------------------------------------------------------------------------------

class Piece{
	public:
		Piece(){
			mName;
			mColor;
			mAlive;
			mInitial;
		}
		~Piece(){}
	
		void setPiece(const std::string n, string c){
			mName = n;
			if(c == "white"){mColor = false;}
			else if(c == "black"){mColor = true;}
			
			if(n == "Pawn") {
				if(mColor == false) mInitial ='p';
				else if(mColor == true) mInitial='P';}
			else if(n == "Knight") {
				if(mColor == false) mInitial='n';
				else if(mColor == true) mInitial='N';}
			else if(n == "Bishop") {
				if(mColor == false) mInitial='b';
				else if(mColor == true) mInitial='B';}
			else if(n == "Rook") {
				if(mColor == false) mInitial='r';
				else if(mColor == true) mInitial='R';}
			else if(n == "Queen") {
				if(mColor == false) mInitial='q';
				else if(mColor == true) mInitial='Q';}
			else if(n == "King") {
				if(mColor == false) mInitial='k';
				else if(mColor == true) mInitial='K';}
		}
	
		void setMName(){
			cout << "Piece Name : ";
			cin >> mName;
		}
		void setMName(string name){
			mName = name;
		}
		string getMName(){
			return mName;
		}
	
		void setMColor(string color){
			if(color == "white"){mColor = false;}
			else if(color == "black"){mColor = true;}
		}
		bool getMColor(){
			return mColor;
		}
		
		char getMInitial(){
			return mInitial;
		}
	
		void dead(){
			mAlive = false;
		}
		bool getMAlive(){
			return mAlive;
		}
	private:
		string mName;
		bool mColor = true; // black : true, white : false
		bool mAlive = true;
		char mInitial;
};


// --------------------------------------------------------------------------------------


// --------------------------------------------------------------------------------------

class Board: public Piece {
	public:
		Board(){}
		~Board(){
			for(int i=0;i<col;i++){
				delete [] mBoardArr[i];
			}
			delete [] mBoardArr;
		}
		
		void makeMBoardArr(int x, int y){
			col = x;
			row = y;
			
			mBoardArr = new char* [col];
			for(int i=0;i<col;i++){
				mBoardArr[i] = new char [row];
				for(int j=0;j<row;j++){
					/*if (i==0 && j == 0){
						mBoardArr[i][j] = &piece[8];
					}
					else if (i==0 && j == 1){
						mBoardArr[i][j] = &piece[1];
					}
					else if(i == 1){
						for(int k = 0; k<8;k++)
						mBoardArr[i][j] = &piece[k];} */
					mBoardArr[i][j] = {'o'};
				}
			}
			/*
			mBoardArr[0][8] = '8';
			mBoardArr[1][8] = '7';
			mBoardArr[2][8] = '6';
			mBoardArr[3][8] = '5';
			mBoardArr[4][8] = '4';
			mBoardArr[5][8] = '3';
			mBoardArr[6][8] = '2';
			mBoardArr[7][8] = '1';
			mBoardArr[8][0] = 'a';
			mBoardArr[8][1] = 'b';
			mBoardArr[8][2] = 'c';
			mBoardArr[8][3] = 'd';
			mBoardArr[8][4] = 'e';
			mBoardArr[8][5] = 'f';
			mBoardArr[8][6] = 'g';
			mBoardArr[8][7] = 'h';
			mBoardArr[8][8] = ' ';*/
		}
		void initMBoardArr(){
			mBoardArr[1][0] = 'P'; // black
			mBoardArr[1][1] = 'P';
			mBoardArr[1][2] = 'P';
			mBoardArr[1][3] = 'P';
			mBoardArr[1][4] = 'P';
			mBoardArr[1][5] = 'P';
			mBoardArr[1][6] = 'P';
			mBoardArr[1][7] = 'P'; 
			mBoardArr[0][0] = 'R'; 
			mBoardArr[0][1] = 'N';
			mBoardArr[0][2] = 'B';
			mBoardArr[0][3] = 'Q';
			mBoardArr[0][4] = 'K';
			mBoardArr[0][5] = 'B';
			mBoardArr[0][6] = 'N';
			mBoardArr[0][7] = 'R';
			
			mBoardArr[6][0] = 'p'; // white
			mBoardArr[6][1] = 'p';
			mBoardArr[6][2] = 'p';
			mBoardArr[6][3] = 'p';
			mBoardArr[6][4] = 'p';
			mBoardArr[6][5] = 'p';
			mBoardArr[6][6] = 'p';
			mBoardArr[6][7] = 'p'; 
			mBoardArr[7][0] = 'r'; 
			mBoardArr[7][1] = 'n';
			mBoardArr[7][2] = 'b';
			mBoardArr[7][3] = 'q';
			mBoardArr[7][4] = 'k';
			mBoardArr[7][5] = 'b';
			mBoardArr[7][6] = 'n';
			mBoardArr[7][7] = 'r';
		}
		void setPoB(int x, int y, int x1, int y1){
			char temp;
			temp = mBoardArr[x][y];
			if(mBoardArr[x1][y1] == 'o'){
				mBoardArr[x1][y1] = mBoardArr[x][y];
				mBoardArr[x1][y1] = temp;
			}
			else {
				 mBoardArr[x1][y1] = mBoardArr[x][y];
				 mBoardArr[x1][y1] = 'o';
			}	
		}
		char** getMBoardArr(){
			return mBoardArr;
		}
		
		
	
		void boardview(){
			for(int i=0;i<col;i++){
				for(int j=0;j<row;j++){	
					cout << mBoardArr[i][j] <<" ";
				} cout << endl;
			} cout << endl;
		}
	private:
		int col; //x
		int row; //y
		char** mBoardArr;
		Piece piece[32];
};

// --------------------------------------------------------------------------------------

class Game : public Board{
	public:
		void pieceDeclare(){
			piece[0].setPiece("Pawn", "black");
			piece[1].setPiece("Rook", "black");
			piece[2].setPiece("Knight", "black");
			piece[3].setPiece("Bishop", "black");
			piece[4].setPiece("Queen", "black");
			piece[5].setPiece("King", "black");
			piece[6].setPiece("Pawn", "white");
			piece[7].setPiece("Rook", "white");
			piece[8].setPiece("Knight", "white");
			piece[9].setPiece("Bishop", "white");
			piece[10].setPiece("Queen", "white");
			piece[11].setPiece("King", "white");
		}
	
	private:
		Piece piece[12];
};
// --------------------------------------------------------------------------------------



int main(){
	int turn=0;
	Game b;
	b.makeMBoardArr(8,8);
	b.initMBoardArr();
	b.boardview();
}