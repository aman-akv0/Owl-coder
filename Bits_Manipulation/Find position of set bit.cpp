int c=0;
        while(n!=0){
            int rb=n & -n;
            n=n-rb;
            c++;
        }return c;
