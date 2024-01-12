bool isPrime(int x){
        if(x<2){
            return false;
        }
        int a=sqrt(x);
        for(int i=2;i<=a;i++){
            if(x%i==0){
                return false;
            }
        }
        return true;
    }
    int minNumber(int arr[],int n){
        int sum=0;
        int c=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }if(isPrime(sum)){
            return 0;
        }
        else{
            
            while(isPrime(sum)==false){
                sum++;
                c++;
            }
        }return c;
    }
