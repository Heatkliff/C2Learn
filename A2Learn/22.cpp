#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "¬ведите число" << endl;
    int a,i;
    i=0;
    cin>>a;
    while(i<=a){
        cout<<i<<" ";
        i++;
    }
    return 0;
}
