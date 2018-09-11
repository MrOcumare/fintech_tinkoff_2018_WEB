#include <iostream>


int main (){
    int n, k, res = 0 , otv = 0, f;
    int *a = new int[n]; 
    std::cin >> n >> k;
    
    for (int i =0; i < n; i ++) {
        res+=i;
    }
    
    if (res < k) {
        std::cout << -1;
    
    } else {
        for (int i  = 0 ; i < n ; i++ ) {
            a[i] = i+1;
        }
        while (otv < k) {
            f = n-1;
            while(f != 0 && otv < k) {
            std::swap(a[f-1],a[f]);
            f=f-1;
            otv++;
            }
        }
        for (int i  = 0 ; i < n ; i++ ) {
            std::cout << a[i] << " ";
        }
    }
    return 0;
}