// 할 것
// 1. 말의 움직임을 어떻게 저장 할 것인가?
// 2. 게임 진행을 어떻게 할 것인가

#include <iostream>

using namespace std;

class Piece{
	public:
		Piece(){}
		Piece(const std::string n, string c, size_t x, size_t y):mName(n),mX(x),mY(y){
			if(c == "white"){mColor = false;}
		}
		~Piece(){}
	
		void setMName(){
			cout << "Piece Name : ";
			cin >> mName;
		}
		string getMName(){
			return mName;
		}
	
		void setMColor(){
			string color;
			cout << "black or white :";
			cin >> color;
			if(color == "white"){mColor = false;}
		}
		bool getMColor(){
			return mColor;
		}
	
		void setMX(){
			cout << "x : ";
			cin >> mX;
		}
		int getMX(){
			return mX;
		}	
	
		void setMY(){
			cout << "y : ";
			cin >> mY;
		}
		int getMY(){
			return mY;
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
		size_t mX;
		size_t mY;
};

// --------------------------------------------------------------------------------------
// 여기서부터
class Pawn : public Piece{
	public:
		Pawn(const std::string n, string c, size_t x, size_t y):Piece(n,c,x,y){
			if(c == "white"){mColor = false;}
		}
	
		void setMPromote(){
			mPromte = true;
		}
		bool getMPromote(){
			return mPromte;
		}
	
	private:
		bool mPromte = false;
};

class Board{
	public:
		Board(){}
		Board(int x, int y):col(x), row(y){
			mBoardArr = new char* [col];
			for(int i=0;i<col;i++){
				mBoardArr[i] = new char[row];
				for(int j=0;j<row;j++){
					mBoardArr[i][j] = {'o'};
				}
			}
		}
		~Board(){
			for(int i=0;i<col;i++){
				delete [] mBoardArr[i];
			}
			delete [] mBoardArr;
		}
	
	
		void setMBoardArr(){
			cout << "X : "; cin >> col;
			cout << "Y : "; cin >> row;
			
			mBoardArr = new char* [col];
			for(int i=0;i<col;i++){
				mBoardArr[i] = new char[row];
				for(int j=0;j<row;j++){
					mBoardArr[i][j] = {'o'};
				}
			}
		}
		char** getMBoardArr(){
			return mBoardArr;
		}
	
		void boardview(){
			for(int i=0;i<col;i++){
				for(int j=0;j<row;j++){	
					cout << mBoardArr[i][j] << " ";
				} cout << endl;
			} cout << endl;
		}
	private:
		int col; //x
		int row; //y
		char** mBoardArr;
};

int main(){
	cout << "Piece" << endl;
	Pawn p("pawn","black",1,0);
	cout << "이름 : " << p.getMName() << endl
		 << "색깔(1=검정, 2=흰색) : " << p.getMColor() << endl
		 << "X : " << p.getMX() << " Y : " << p.getMY() << endl;
	
	cout << "Board" << endl;
	Board b(8,8);
	b.boardview();
}