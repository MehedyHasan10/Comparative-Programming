#include<iostream>
#include<fstream>
#include<ctime>
#include<string>
#include<Windows.h>

using namespace std;

int main()
{
	fstream file;
	string f_skeyword,search,filename;
	float first=0.0;
	int middle=0,last=0;
	bool found=FALSE;


	cout<<"BINARY SEARCH ALGORITHM\n";
	cout<<"Enter filename (.txt): ";
	cin>>filename;
	cout<<"Enter word to be searched: ";
	cin>>f_skeyword;

	file.open(filename);
	if(!file.is_open())
	{
		cout<<"Cannot find file\nProgram will now exit\n";
	}

	while(first<=last)
	{
		middle=(first+last)/2;
		file>>search;

		cout<<search<<endl;
		if(search<f_skeyword)
		{
			first=middle+1;
			cout<<"a";
		}
		else if(search>f_skeyword)
		{
			last=middle-1;
			cout<<"b";
		}
		else
		{
			found=TRUE;
			break;
		}

	}
	if(found)
		cout<<f_skeyword<<" -------->Found\n";
	else
		cout<<f_skeyword<<" -------->Not found\n";

}
