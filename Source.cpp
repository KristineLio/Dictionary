#include<iostream>
#include<string>
#include<map>
#include<fstream>
#include<iterator>
#include<vector>
#include<algorithm>

using namespace std;

#include"Dictionary.h"


int main() 
{
	string word;
	while (word != "exit")			//The program ends with the word exit as an input
	{
		cout << "If you want to exit--> 'exit'\n";
		cout << "Enter the word you want to translate: \n";
		cin >> word;
		transform(word.begin(), word.end(), word.begin(), tolower);		//make sure that the word is in lowwer letters
		if (word != "exit")			//start using the class to translate the word
		{
			Dictionary d("TextE-B.txt");
			if (d.Check(word) == true)
			{
				d.Translate(word);
			}
			else
			{
				cout << "The word doesn't exist in the file" << endl;
			}
		}
	} 
	
	
	system("pause");
	return 0;
}
	