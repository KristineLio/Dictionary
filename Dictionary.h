#ifndef DICTIONARY_H
#define DICTIONARY_H

// class Dictionary
class Dictionary
{
public:
	Dictionary(const string & fname);			//Constructor prototype
	bool Check(const string & word)const;		//Check if the word exist
	void Translate(const string& word)const;	//translation
private:
	map<string, string> mapOfWords;			//contain the words and their translation
	vector<string> v_str;					// vector to hold the words from th file

};

#endif
