#include <iostream>

using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
int a;
cout<<"Какая у тебя зарплата?"<<endl;
cin >> a;
if( a < 1000){
cout<<"Это фиаско, братан"<<endl;
}
if(999 < a){
if(a > 999999){
cout<<"Ты миллионер";
}
if(a < 1000000){
cout<<"Красавчик, но могло быть и больше"<<endl;
}
}

cout << "..но ты молодец";
}
