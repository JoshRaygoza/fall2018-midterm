/**
Description: Will get the users input of a string and find an amount of characters a user wants.
Filename: main.cpp
Author:Joshua Raygoza
Email: joshuar9781@student.vvc.edu
Date:10/20/18
*/
#include <iostream>
#include <string>

using namespace std;
int get_string()
{
	cout<< "Please enter a word: "<<endl;
	return 0; 
}

int char_count(string s, char c)
{
	int res = 0;
	for(int i = 0; i<s.length(); i++)
	if(s[i] == c)
	res++;

	return res;
}
int main()
{
	cout<< get_string()<<endl;
	string str;
	cin >> str;
	cout<<"Please enter a capital or lower case character you want to find and get a count of: "<< endl;
	char c;
	cin>> c;

	cout <<"There are" << " "<< char_count(str , c)<<" "<< "characters in this word" <<endl;
  
	 return 0;
}
