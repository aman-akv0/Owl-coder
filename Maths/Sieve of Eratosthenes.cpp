vector<int> sieveOfEratosthenes(int n)
    {
        // Write Your Code here
        vector<int> prime(n+1,1);
        vector<int>factor;
        prime[0]=prime[1]=0;
        
        for(int i=2;i*i<=n;i++){
            if(prime[i]){
                for(int j=i*i ; j<=n; j+=i ){
                    prime[j]=0;
                }
            }
        }
        for(int a=2;a<=n;a++){
            if(prime[a]){
                factor.push_back(a);
            }
            
        }return factor; 
    }
