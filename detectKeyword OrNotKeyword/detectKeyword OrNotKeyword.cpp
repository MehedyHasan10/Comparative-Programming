#include <bits/stdc++.h>
using namespace std;

int main()
{

string keyword[]=
{
"auto","double","int","struct","break","else","long",
"switch","case","enum","register","typedef","char",
"extern","return","union","const","float","short",
"unsigned","continue","for","signed","void","default",
"goto","sizeof","voltile","do","if","static","while"

} ;

int size=*(&keyword+1) - keyword;


          string str;
          cout<<"Enter a keyword:";
          cin>>str;


          int flag=0;



        for(int i=0;i<size;i++){

            if(keyword[i]==str){

                flag=1;
            }


        }


        if(flag==1)

             cout<<str<<" is keyword.";
         else

             cout<<str<<" is not keyword.";



}



