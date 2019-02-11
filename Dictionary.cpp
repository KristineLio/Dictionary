#include<iostream>
#include<string>
#include<map>
#include<fstream>
#include<iterator>
#include<vector>
#include<algorithm>
#include"Dictionary.h"


using namespace std;

Dictionary::Dictionary(const string & fname)		//Constuctor definition 
{
	ifstream ifile;
	ifile.open(fname.c_str());
	if (!ifile)						//check in the file can open 
	{
		cout << "could not read the file." << endl;
	}
	string line;					//holds the lines of the file
	while (ifile >> line)
	{
		v_str.push_back(line);		//put the words into the vector
	}

	//Every word has a position into the vector.Conecting them through the map
	mapOfWords.insert(make_pair(v_str[0], v_str[1]));
	mapOfWords.insert(make_pair(v_str[2], v_str[3]));
	mapOfWords.insert(make_pair(v_str[4], v_str[5]));
	mapOfWords.insert(make_pair(v_str[6], v_str[7]));
	mapOfWords.insert(make_pair(v_str[8], v_str[9]));
	mapOfWords.insert(make_pair(v_str[10], v_str[11]));
}

bool Dictionary::Check(const string & word) const
{

	vector<string>::const_iterator iter;


	iter = (find(v_str.begin(), v_str.end(), word));
	if (iter != v_str.end())		//if the word exist in the file
	{
		return true;
	}
	else							//if the word doesn't exist
	{
		return false;
	}
}

void Dictionary::Translate(const string & word) const
{

	map<string, string>::const_iterator it = mapOfWords.begin();
	for (; it != mapOfWords.end(); it++)	// Iterate through all elements in map 
	{
		if (it->second == word)			//search by value 
		{
			cout << it->first << " = " << it->second << endl;	//The output of the translation
		}

	}

}