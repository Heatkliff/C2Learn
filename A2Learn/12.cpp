#include <iostream>

using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
int a;
cout<<"����� � ���� ��������?"<<endl;
cin >> a;
if( a < 1000){
cout<<"��� ������, ������"<<endl;
}
if(999 < a){
if(a > 999999){
cout<<"�� ���������";
}
if(a < 1000000){
cout<<"���������, �� ����� ���� � ������"<<endl;
}
}

cout << "..�� �� �������";
}
