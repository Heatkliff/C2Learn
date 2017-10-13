#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите количество звездочек" << endl;
    int a,i;
    i=0;
    cin>>a;
    while(i<a){
        cout<<"*";
        i++;
    }
    return 0;
}
