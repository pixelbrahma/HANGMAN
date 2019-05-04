#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
	int lives = 5;
	char word[50]  = {0};
	char newWord[50] = {0};
	bool round = false;
	char letter;
	int length = 0;

	cout<<"Enter a word :  ";
	cin>>word;

	length = strlen(word);

	system("CLS");
	cout<<endl<<"_______________________________________________________________________________"<<endl;
	

	cout<<"Number of letters  =  "<<length<<endl;

	while((lives > 0) && (strcmp(newWord, word) != 0))
	{
		round = false;
		cout<<endl<<"Guess a letter : ";
		cin>>letter;

		for(int i=0; i<50; i++)
		if(word[i] == letter)
		{
			newWord[i] = word[i];
			round = true;
		}

		if(!round)
		{
			lives--;
			cout<<"Sorry !! Please try again  "<<endl;
		}

		cout<<endl<<"_______________________________________________________________________________"<<endl;
		
		for(int i=0; i<length; i++)
		{
			if(newWord[i] == word[i])
				cout<<"  "<<(char)toupper(newWord[i])<<" ";
			else
				cout<<" __ ";
		}

		cout<<endl;	
		cout<<endl<<"                    Number of lives left =   "<<lives<<endl;
	}

	if(lives<=0)
	{
		cout<<endl<<" You LOSE  !!"<<endl;
		cout<<endl<<" The Word you got was  :   "<<strupr(word);
	}
	else
		cout<<endl<<"You WIN  !!"<<endl;

	getch();
	return 0;
}