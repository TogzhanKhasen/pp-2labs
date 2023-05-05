#include<iostream>

using namespace std;
int sum(int a) {
    int num = a%10;
    if( num%2 == 0 ){
        return sum(a/10) + num;
    }
    return sum(a/10);
}
int main(){
    int a;
    cin >> a;
    cout << sum(a);
    return 0;
}