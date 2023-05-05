#include<iostream>

using namespace std;
int minim(int a, int b, int c , int d) {
    int res = min(min(a,b),min(c,d));
    return res;
}
int main(){
    int a , b ,c ,d;
    cin >> a >> b >> c >> d;
    cout << minim(a , b, c ,d);
    return 0;
}