#include<iostream>

using namespace std;

int main(){
    int n =10;
    int sum=0 , prod=1;
    int a[n];
    for(int i=0; i<n; i++){
        if(a[i]%2 == 0){
            sum+=a[i];
            prod*=a[i];
        }
    }
    cout << sum << " "<<prod<< endl;
    
    return 0;
}