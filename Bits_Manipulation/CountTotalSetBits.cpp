#include <iostream>
#include <cmath>
using namespace std;
int countSetBits(int n){
    int c=0;
        while(n!=0){
            int rb=n&-n;
            n=n-rb ;
            c++;
        }return c;
}

int main() {
    int sum=0;
        int n;
        cin >> n;
        for(int i=1; i<=n ; i++){
            sum+=countSetBits(i);
        }
        cout << sum << endl;
}

