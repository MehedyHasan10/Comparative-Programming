#include<bits/stdc++.h>
using namespace std;

int mystrlen(string m){
int c=0;
for(int i=0;m[i]!='\0';i++){
c++;
}
return c;
}

int main(){

char a[]={'I',' ','L','o','v','e',' ','C','\0'};

char *b="I love C++";

string c="I love Bangladesh as well.";

cout<<c.length()<<" "<<mystrlen(c)<<endl;


return 0;
}
