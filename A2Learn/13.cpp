#include <iostream>

using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
int a, b, c;
cout<<"������� ������ �����"<<endl;
cin>>a;
cout<<"������� ������ �����"<<endl;
cin>>b;
cout<<"������� ����� �������� ���������: 1 = summa 2 = minus 3 = umnoj 4 = del"<<endl;
cin>>c;
switch (c){
case 1: cout<<a+b;break;
case 2: cout<<a-b;break;
case 3: cout<<a*b;break;
case 4: cout<<a/b;break;
default: cout<<"������������ ��������";
}
}
