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
#include <vector>

using namespace std;

// --------------------------------------------------------------------------------------

class Piece{
	public:
		Piece(){
			mName;
			mColor;
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
		
	private:
		string mName;
		bool mColor = true; // black : true, white : false
		char mInitial;
};




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
					mBoardArr[i][j] = {'o'};
				}
			}
			mBoardArr[0][8] = '1';
			mBoardArr[1][8] = '2';
			mBoardArr[2][8] = '3';
			mBoardArr[3][8] = '4';
			mBoardArr[4][8] = '5';
			mBoardArr[5][8] = '6';
			mBoardArr[6][8] = '7';
			mBoardArr[7][8] = '8';
			mBoardArr[8][0] = '1';
			mBoardArr[8][1] = '2';
			mBoardArr[8][2] = '3';
			mBoardArr[8][3] = '4';
			mBoardArr[8][4] = '5';
			mBoardArr[8][5] = '6';
			mBoardArr[8][6] = '7';
			mBoardArr[8][7] = '8';
			mBoardArr[8][8] = ' ';
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
	
		void setPoB(int a, int b, int c, int d){ //7, 3, 6, 3,
			char temp;
			int x1 = a-1, y1 = b-1, x2 = c-1, y2 = d-1;
			
			temp = mBoardArr[x2][y2];
			if(mBoardArr[x2][y2] == 'o'){
				mBoardArr[x2][y2] = mBoardArr[x1][y1];
				mBoardArr[x1][y1] = temp;
			}
			else {
				mBoardArr[x2][y2] = mBoardArr[x1][y1];
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
	/*
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
	*/
		void setLog(int a, int b, int c, int d){
			Log.push_back(a);
			Log.push_back(b);
			Log.push_back(c);
			Log.push_back(d);
		}
	
		vector<int> getLog(){
			return Log;
		}
		
	
	private:
	//	Piece piece[12];
	vector<int> Log;
		
};
// --------------------------------------------------------------------------------------



int main(){
	
	int x1,y1,x2,y2;
	int turn=0;
	string t;
	Game b;
	b.makeMBoardArr(9,9);
	b.initMBoardArr();
	b.boardview();
	
	while(true){
		turn++;
		
		if(turn%2==0){t="black's turn"; cout << t << endl;}
		else{t = "white's turn"; cout << t << endl;}
		
		cout << "From X Y : "; cin >> x1 >> y1;
		cout << "To   X Y : "; cin >> x2 >> y2;
		b.setPoB(x1,y1,x2,y2);
		b.setLog(x1,y1,x2,y2);
		system("clear");
		for(int i = 0; i<turn;i++){
			
			cout << t << " : " << b.getLog()[((turn-1)*4)] << ", " << b.getLog()[((turn-1)*4)+1] << " -> " << b.getLog()[((turn-1)*4)+2] << ", " << b.getLog()[((turn-1)*4)+3] << endl;
		}
		b.boardview();
	}
}