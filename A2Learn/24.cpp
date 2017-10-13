#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите количество ступеней" << endl;
    int a,i,b,c,d;
    i=0;
    c=0;
    cin>>a;
    b=a-1;
    d=1;
    while(i<a){
            while(c<b){
                cout<<" ";
                c++;
            }
            c=0;
            b--;
            while(c<d){
                cout<<"*";
                c++;
            }
            d=d+2;
            cout<<endl;
            i++;
            c=0;
    }
    while(c<a-1){
        cout<<" ";
        c++;
    }
    cout<<"*";
    return 0;
}
