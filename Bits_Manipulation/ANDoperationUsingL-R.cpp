#include<bits/stdc++.h>
using namespace std;
int main(){
    int q,n;
   
    cin>>q;
    cin>>n;
    
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<vector<int>> ans;
    vector<int>temp(32,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<32;j++){
            if(a[i]&(1<<j)){
                temp[j]++;
            }
        }ans.push_back(temp);
    }
    while(q--){
        int l, r;
        cin>>l>>r;
        int res=0;
        if(l==0){
            int len=r;
            for(int i=0;i<32;i++){
                if(ans[r][i]==r+1){
                    res|=(1<<i);
                }
            }
        }else{
            int len=r-l+1;
            for(int i=0;i<32;i++){
                if(ans[r][i]-ans[l-1][i]==len){
                    res|=(1<<i);
                }
            }
        }
        cout <<res<<endl;

        
    }
}   
