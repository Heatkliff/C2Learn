#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a[10],b ,nomer, money;
    b=0;
    nomer=0;
    money=0;
    for(int i=0; i<10;i++){
        a[i]=0;
    }
    for(int i=0; i<10;i++){
        cout<<a[i]<<endl;
    }
    while(b<1){
        cout<<"������� ����� �����: ";
        cin>>nomer;
        if(nomer>0 && nomer<11){
            cout<<"�� ������� ���������: ";
            cin>>money;
            a[nomer-1]+=money;
        }else{
            cout<<"�������� ����� �����"<<endl;
        }
        for(int i=0; i<10;i++){
                cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
