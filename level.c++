#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll arr[5];
    while(n--){
        ll c1 = 0;
        for(ll i=0; i<5; i++){
            cin>>arr[i];
            if(arr[i]==1){
                c1++;
            }   
        }
        switch(c1){
            case 0:
                cout<<"Beginner"<<endl;
                break;
            case 1:
                cout<<"Junior Developer"<<endl;
                break;
            case 2:
                cout<<"Middle Developer"<<endl;
                break;
            case 3:
                cout<<"Senior Developer"<<endl;
                break;
            case 4:
                cout<<"Hacker"<<endl;
                break;
            case 5:
                cout<<"Jeff Dean"<<endl;
                break;
            default:
                break;
        }
    }
    return 0;
}