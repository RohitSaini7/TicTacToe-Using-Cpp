#include <iostream>
using namespace std;

char sq[10] = {'0','1','2','3','4','5','6','7','8','9'};

int win();
void brd();

int win()
{
	if(sq[1] == sq[2] && sq[1]==sq[3])
			return 1;	
	else if(sq[4] == sq[5] && sq[4]==sq[6])
			return 1;	
	else if(sq[7] == sq[8] && sq[7]==sq[9])
			return 1;
	else if(sq[1] == sq[4] && sq[1]==sq[7])
			return 1;
	else if(sq[2] == sq[5] && sq[2]==sq[8])
			return 1;
	else if(sq[3] == sq[6] && sq[3]==sq[9])
			return 1;
	else if(sq[1] == sq[5] && sq[1]==sq[9])
			return 1;
	else if(sq[3] == sq[5] && sq[3]==sq[7])
			return 1;
	else if( sq[1] != '1' && sq[2] != '2' && sq[3] != '3' && sq[4] != '4' && sq[5] != '5' && sq[6] != '6' && sq[7] != '7' && sq[8] != '8' && sq[9] != '9')
			return 0;
	else
		return -1;
	
}

void brd()
{
	system("cls");
	cout <<"\n\n			******Tic Tac Toe****** \n\n\n";
	cout << "		   Player 1 is (x) and Player 2 is (0)\n\n" << endl;
	
	cout << "			        |   |   " << endl;
	cout << "			      " << sq[1] << " | " << sq[2] << " | " << sq[3] << " "<< endl;
	
	cout << "			     ___|___|___" << endl;
	cout << "			        |   |   " << endl;
	cout << "			      " << sq[4] << " | " << sq[5] << " | " << sq[6] << " "<< endl;
	
	
	cout << "			     ___|___|___" << endl;
	cout << "			        |   |   " << endl;
	cout << "			      " << sq[7] << " | " << sq[8] << " | " << sq[9] << " "<< endl;
	
	cout << "			        |   |   " << endl;
			
}	

int main()
{
	int p = 1, a, b;
	char c;
	do
	{
		brd();
		p = (p%2)? 1 : 2;
		
		c = (p == 1)? 'X' : '0';
		
		cout << "	   Player " << p <<"'s Turn, Enter a Number in which box u want " << c <<" :" << endl;
		cout << "				  ";
		cin >> b; 
			
		if(b == 1 && sq[1] == '1')
			sq[1] = c;
		
		else if(b == 1 && sq[1] == '1')
			sq[1] = c;
		
		else if(b == 2 && sq[2] == '2')
			sq[2] = c;
		
		else if(b == 3 && sq[3] == '3')
			sq[3] = c;
		
		else if(b == 4 && sq[4] == '4')
			sq[4] = c;
		
		else if(b == 5 && sq[5] == '5')
			sq[5] = c;
		
		else if(b == 6 && sq[6] == '6')
			sq[6] = c;
		
		else if(b == 7 && sq[7] == '7')
			sq[7] = c;
		
		else if(b == 8 && sq[8] == '8')
			sq[8] = c;
		
		else if(b == 9 && sq[9] == '9')
			sq[9] = c;
		else
		{
			cout << "invalide move";
			
			p--;
			cin.ignore();
			cin.get();
		}
		a = win();
		p++;	 
	}while(a==-1);
	brd();
	if(a==1)
		cout << "			     \aPlayer" << --p << " win";
	else
		cout << "			      \aGame Draw";
		
	cin.ignore();
	cin.get();
	return 0;	
	
	
	
	
	
	
	
}
