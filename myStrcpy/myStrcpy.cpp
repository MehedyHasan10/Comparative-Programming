#include<bits/stdc++.h>
using namespace std;

char * mystrcpy(char m[]){

 char *l= (char *)malloc((strlen(m)+1)*sizeof(char));
int i;
for(i=0;m[i]!='\0';i++){
l[i]=m[i];
}
l[i]=m[i];

 return l;
}

int main(){

char a[]="I love C++";


char *p = mystrcpy(a);

cout<<p<<endl;

return 0;
}
