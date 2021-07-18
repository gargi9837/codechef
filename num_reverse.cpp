#include<iostream>

using namespace std ;

int main() {
    int n;
    cin>>n; 
    while(n>0){
        int num ;
        cin>>num ;
        int remainder = 0 ;
        int reverse = 0;
        while ( num > 0){
            remainder = num % 10 ;
            reverse = reverse*10 + remainder ;
            num = num / 10 ;
        }
        cout<<reverse<<endl;
    n--;
    }
    return 0 ;
}