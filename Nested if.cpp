#include <iostream>
using namespace std;

int main()
{
	string temp,humidity;
	
	cout<<"How's the temperature (warm or cold) ? ";
	cin >> temp;
	
	cout<<"How's humidity (dry or humid) ? ";
	cin >> humidity;
	
	if (temp == "warm")
	{
		if (humidity == "dry")
		{
			cout<<"play tennis"<<endl;
		}
		
		if (humidity == "humid")
		{
			cout<<"swim"<<endl;
		}
	}
	
	if (temp == "cold")
	{
		if (humidity == "dry")
		{
			cout<<"play basketball"<<endl;
		}
		
		if (humidity == "humid")
		{
			cout<<"watch TV"<<endl;
		}
	}
}
