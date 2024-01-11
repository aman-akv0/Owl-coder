vector<bool> prime;
	void seive(int n){
	    prime.assign(n+1,true);
        prime[0] = false;
        prime[1] = false;

        for (int i = 2; i*i <= n; i++) {
            if (prime[i]) {
                for (int j = i*i; j<=n; j+=i) {
                    prime[j] = false;
                }
            }
        }
	}
	
	    int Count(int L, int R){
		    // Code here
		    int primes=0;
		    int composite=0;
		    int n=R;
		    seive(n);
		    for(int i=L ; i<=R ; i++){
		        if(i==0 || i==1){
		            continue;
		        }else if(prime[i]){
		            primes++;
		            
		        }else{
		            composite++;
		        }
		    }return composite-primes;
		    
	    }
