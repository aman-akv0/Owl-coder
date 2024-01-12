bool isPrime(int x){
        int a=sqrt(x);
        for(int i=2;i<=a;i++){
            if(x%i==0){
                return false;
            }
        }
        return true;
    }
    long long int largestPrimeFactor(int N){
        // code here
        int a=sqrt(N);
        int maxi=0;
        for(int i=2;i<=a;i++){
            if(N%i==0){
                int c=N/i;
                if(isPrime(c)){
                    maxi=max(maxi,c);
                }
                else if(isPrime(i)){
                    maxi=max(maxi,i);
                }
            }
        }
        if(maxi==0){
            maxi=N;
        }
        return maxi;
    }
