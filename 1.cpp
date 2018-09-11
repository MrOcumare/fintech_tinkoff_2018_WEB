#include <iostream>
#include <algorithm> 

int main(){
    int n, m;
    std::cin >> n >> m;


    int ** mas = new int* [n];
    for (int i  =0; i < n; i ++) {mas[i] = new int[m];}
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++)
        {
                std::cin >> mas[i][j];
        }
    }
    std :: cout << m << " "<< n << std::endl;
    for (int i = 0; i < m; i++) {
        for (int j = n-1; j >-1 ; j--) {
            std::cout << mas[j][i] << " ";
        }
        std::cout<< std::endl;
    }



    // int ** mas_copy = new int* [m];
    // for (int i  =0; i < n; i ++) {mas_copy[i] = new int[n];}


   
    // for (int i = 0; i  < n; i++ ) {
    //     for (int j = 0 ; j < m; j++) {
    //         mas_copy[j][i] = mas[i][j];
           
    //     }
        
    // }


    // for (int i = 0; i < m; i++) {
    //     for (int j = 0; j < n/2; j++) {
    //         std::swap(mas_copy[i][n-1-j],mas_copy[i][j]);
            
    //     } 
        
    // }
    // for (int i = 0; i < m; i++ ){
    //     for (int j = 0; j < n; j++) {
    //         std::cout << mas_copy[i][j] << " ";
    //     } 
    //     std::cout << std:: endl;
    // }

    return 0;
};