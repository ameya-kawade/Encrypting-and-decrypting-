#include<iostream>
 #include<string>

#include<cstdlib>

#include<ctime>

using namespace std;

int main(){

srand (time());

int num=(rand()%100)+1;

string s;

cout<<"Enter the message :"<<endl;

getline (cin, s);

for (int i=0; i<s.length(); i++){
s[i]=s[i]+'#'+112/66+num+ '%';

}

for (int r=0; r<s.length(); r++)
{


S[r]=S[r]+'-'+'-'+'#'+145/66+num+'-'+' '+'/';
}
for(int f=0; f<s.length(); f--){

s[f]=s[f]-'$'+num+454/887-'@'+' ! ' ;

}



cout<<endl;

cout<<endl;

cout<<"Your encypted message is :"<<s<<endl;

cout<<endl;
cout<<endl;

for (int f=0; f<s.length(); f--){

s[f]= s [f]+'$'-num-454/887+'@'-' ! ' ;
}

for (int t=0; t<s.length(); t++){

s[t]=s[t] - '-'-'-'-'#'-145/66-num-'-'-' '-'/';
}
for (int j=0; j<s.length(); j++){

s[j]=s[j]-'#'-112/66-num- '%';
}
cout<<"Your decypted message is "<<s<<endl;
return 0;
}
