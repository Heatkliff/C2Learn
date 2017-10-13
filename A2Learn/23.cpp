#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "¬ведите число" << endl;
    int a,i,b;
    i=0;
    b=0;
    cin>>a;
    while(i<a){
            while(b<a){
                cout<<"*";
                b++;
            }
            b=0;
            cout<<endl;
            i++;
    }
    return 0;
}
