#include<iostream>
using namespace std;
int main()
{
    int n,last = 0;
    for(int i = 1; i<=4; i++){
        if(i % 2 == 0){
            last+=i;
            for(int j = 1; j<=i; j++){
                cout<<last;
                j < i && cout<<"*";
                last--;
            }            
            last+=i;
        }
        else{
            for(int j = 1; j<= i; j++){
            last++;
            cout<<last;
            j < i && cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}