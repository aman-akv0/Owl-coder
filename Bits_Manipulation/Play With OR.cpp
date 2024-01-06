
int* game_with_number(int arr[], int n)
{
    
    // Complete the function
    vector<int>v(n);
    //int ans=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i]|arr[i+1];
    }return arr ;
       
    
}
