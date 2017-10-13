#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a[5], max;
    for(int i=0; i<5; i++){
        cout<<"Zvezdochek v "<<i+1<<"-om stolbike: ";
        cin>>a[i];
    }

    max = a[0];
    for (int i = 1; i < 5; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    for(int it=0; it<max; it++){
        for(int i=0; i<5; i++){
            if(a[i]>0){
                cout<<"*";
                a[i]=a[i]-1;
            }else{
                cout<<" ";
            }
            cout<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
