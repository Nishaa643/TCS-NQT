#include<iostream>
#include<string>
using namespace std;
int main(){
string day;
int num;
cin>>day>>num;
int ans =0;
int start ;
if(day=="sun") start =0;
else if(day=="mon")start =1;
else if(day=="tue")start =2;
else if(day=="wed")start =3;
else if(day=="thu")start =4;
else if(day=="fri")start =5;
else if(day=="sat")start =6;

for(int i =0;i<num;i++){
    if((start+i)%7==0){
        ans++;
    }
}
cout << ans << endl;
return 0;
}
