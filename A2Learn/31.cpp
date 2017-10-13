#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a[10];
    int s,l;
    l = 0;
    cout<<"Введите номера 10 школ"<<endl;
    for(int i=0; i<10;i++){
        cout<<"Номер "<< i+1 << " школы: ";
        cin>>a[i];
        cout<<endl;
    }
    for(int i=0; i<10;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Введите свою школу: ";
    cin>>s;
    for(int i=0; i<10;i++){
        if(a[i]==s){
            l=1;
            break;
        }
    }
    if(l==1){
        cout<<"Я знаю эту школу";
    }else{
        cout<<"Я не знаю эту школу";
    }
    return 0;
}
