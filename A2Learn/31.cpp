#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a[10];
    int s,l;
    l = 0;
    cout<<"������� ������ 10 ����"<<endl;
    for(int i=0; i<10;i++){
        cout<<"����� "<< i+1 << " �����: ";
        cin>>a[i];
        cout<<endl;
    }
    for(int i=0; i<10;i++){
        cout<<a[i]<<endl;
    }
    cout<<"������� ���� �����: ";
    cin>>s;
    for(int i=0; i<10;i++){
        if(a[i]==s){
            l=1;
            break;
        }
    }
    if(l==1){
        cout<<"� ���� ��� �����";
    }else{
        cout<<"� �� ���� ��� �����";
    }
    return 0;
}
