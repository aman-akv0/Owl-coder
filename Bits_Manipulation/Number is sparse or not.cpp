class Solution
{
    public:
    //Function to check if the number is sparse or not.
    bool isSparse(int n)
    {
        // Your code
       // int mask=n>>1;
        for(int i=0;i<32-1;i++){
            if((n&(1<<i)) && (n&(1<<(i+1)))){
                return 0;
                // break;
            }
        }return 1;
    }
};
