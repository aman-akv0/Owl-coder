#include<bits/stdc++.h>
using namespace std;
vector<long long>prime;
void seive(int n){
    
    //vector<int>factor();
    prime.resize(n,1);
    prime[0]=0;
    prime[1]=0;
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i*i ; j<=n ; j+=i){
                prime[j]=0;
            }
        }
    }
    
}
int main(){
    int n;
    cin >> n;
    seive(n);
    for(int i=1;i<=n;i++){
        if(prime[i]){
            cout<<i<<" ";
        }
    }
    
}
