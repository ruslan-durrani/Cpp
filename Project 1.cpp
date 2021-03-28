#include <iostream>
#include <cctype>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	string text;
	
	cout<<"Enter text: ";
	getline(cin, text);
	
	int l,CLI; 								// CLI represent Coleman-Liau Index
	l = text.length();
	
	float letters=0, words=0, sentence=0;
	float L=0, S=0; 
	
	for(int i=0; i<l; i++)
	{
		if(isalpha(text[i])!= 0)
		{
			letters += 1;
		}
		
		if(isblank(text[i]))
		{
			words += 1;
		}
		
		//Assuming period,exclamation or question mark represent end of senctence
		if(text[i]=='.' || text[i]=='!' || text[i]=='?' ) 
		{
			sentence += 1;
		}
	}
	
	words += 1;
	cout<<endl;
	
	L = (letters/words * 100);
	S = (sentence/words * 100);
	
	CLI = round(0.0588 * L - 0.296 * S - 15.8);
	
	if(CLI >= 1 && CLI<= 16)
	{
		cout<<"Readablity level: Grade "<<CLI<<endl;
	}
	
	if(CLI < 1)
	{
		cout<<"Readability level: Before Grade 1"<<endl;
	}
	
	if(CLI > 16)
	{
		cout<<"Readability level: Grade 16+"<<endl;
	}
	
}
