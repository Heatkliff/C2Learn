#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a[20], quantity, max, elem;
    for(int i=0; i<20;i++){
        a[i]=0;
    }
    cout<<"¬ведите числа. 0 - конец списка"<<endl;
    for(int i=0; i<10;i++){
        cin>>quantity;
        if(quantity!=0){
            a[i]=quantity;
        }
        else{
            break;
        }
    }

    max =a[0];
    for (int i = 1; i < 20; i++) {
        if(a[i]!=0){
            if (a[i] > max) {
                max = a[i];
            }
        }
    }


    for (int i = 0; i < 20; i++) {
            if(a[i]!=0){
                elem=(max/2)-(a[i]/2);
                for(int it=0; it<elem; it++){
                    cout<<" ";
                }
                for(int it=0; it<a[i]; it++){
                    cout<<"*";
                }
                cout<<endl;
            }else{
                break;
            }
    }




    return 0;
}
