int countSpecialNumbers(int n, vector<int> arr) {
        // Code here
        int maxi=*max_element(arr.begin(),arr.end());
        // for(int i=0; i<n;i++){
        //      maxi=max(maxi,arr[i]);
        // }
        
        vector<int>result(maxi+1,0);
        // for(int i=0;i<=maxi;i++){
        //     if(arr[i]%i){
        //         result[i]++;
        //     }
        // }
        for(auto &it:arr){
            if(result[it]<2)
            for(int i=it;i<=maxi;i+=it)result[i]++;
        }
        int ans=0;
        for(auto &i:arr){
            if(result[i]>1) ans++;
            
        }return ans;
        
    }
