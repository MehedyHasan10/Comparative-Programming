#include<bits/stdc++.h>
using namespace std;

char * mystrcat(char m[], char n[]){

 char *l= (char *)malloc((strlen(m)+strlen(n)+1)*sizeof(char));
int j=0;
for(int i=0;m[i]!='\0';i++){
l[j]=m[i];
j++;
}

 for(int i=0;n[i]!='\0';i++){
l[j]=n[i];
j++;
}
l[++j]='\0';

 return l;
}

int main(){

char a[]="I love C++";
char b[]="I love C++";


char *p = mystrcat(a,b);

cout<<p<<endl;

return 0;
}
