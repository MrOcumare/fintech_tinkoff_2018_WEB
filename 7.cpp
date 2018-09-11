#include <iostream>
#include <math.h> 





int main(){
    int n, per = -1 ;
    std::cin >> n;
    
   
    int **mas = new int*[n];
    for (int i  = 0; i < n; i++){
        mas[i] = new int [2];
    }
    for (int i = 0 ; i < n; i++ ){
        for (int j = 0; j < 2; j++) {
            std::cin >> mas[i][j];
        }
    }
    for (int i = 0; i <n ; i++) {
        for (int j= i+1; j<n; j++ ){
            for (int k = j+1; k < n; k++){
                
                if ( pow( (pow(mas[j][0]- mas[i][0],2) +  pow(mas[j][1]- mas[i][1],2)) ,0.5) +(pow( (pow(mas[k][0]- mas[i][0],2) +  pow(mas[k][1]- mas[i][1],2)),0.5 ))
                  +( pow((pow(mas[k][0]- mas[j][0],2) +  pow(mas[k][1]- mas[j][1],2)),0.5) )> per){
                     per =   pow( (pow(mas[j][0]- mas[i][0],2) +  pow(mas[j][1]- mas[i][1],2)) ,0.5) +(pow( (pow(mas[k][0]- mas[i][0],2) +  pow(mas[k][1]- mas[i][1],2)),0.5 ))
                  +( pow((pow(mas[k][0]- mas[j][0],2) +  pow(mas[k][1]- mas[j][1],2)),0.5) );

                }
               
            }
        }
    }
    std::cout << int(per);


    return 0;
}