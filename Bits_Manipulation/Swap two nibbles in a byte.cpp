int swapNibbles(int n){
        // code here
       for (int i = 0; i < 4; i++) {
        
            if ((bool)(n & (1 << i)) != (bool)(n & (1 << (i + 4)))) {
           
                n = n ^ (1 << i);
                n = n ^ (1 << (i + 4));
            }
        }
        return n;
    }
