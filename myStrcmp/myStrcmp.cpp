#include<bits/stdc++.h>
using namespace std;

int mystrcmp(char m[], char n[]){
int flag =0;

 if(strlen(m)==strlen(n)){
for(int i=0;m[i]!='\0';i++){
if(m[i]!=n[i]){
flag=-1;
break;
}
}
}else{
flag=-1;
}
return flag;
}

int main(){

char a[]="I love C++";

char b[]="I love C++.";

cout<<mystrcmp(a,b)<<endl;

return 0;
}
