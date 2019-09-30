#include<iostream>
using namespace std;
void countwords()
{
	ifstream fin;
	fin.open("out.txt");
	char word[30];
	int count=0;
	while(!fin.eof())
	{
		fin>>word;
		count++;
	}
	cout<<"Number of words in file are "<<count;
	fin.close();
}
