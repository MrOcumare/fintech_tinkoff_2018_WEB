#include <iostream>
#include <math.h> 



int rec(int n, int k)
{
    if(n==k)
        return 1;
    if(k==1)
        return n;
    return rec(n-1, k-1)+rec(n-1, k);
}


int main(){
    int n, res= 0;
    std::cin >> n;
    int num_of_mas = rec(n,2);
    int *res_mas= new int [num_of_mas];
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
                if ( (pow(mas[j][0]- mas[i][0],2) +  pow(mas[j][1]- mas[i][1],2)) == (pow(mas[k][0]- mas[i][0],2) +  pow(mas[k][1]- mas[i][1],2)) ||
                  (pow(mas[j][0]- mas[i][0],2) +  pow(mas[j][1]- mas[i][1],2)) == (pow(mas[k][0]- mas[j][0],2) +  pow(mas[k][1]- mas[j][1],2))||
                  (pow(mas[k][0]- mas[i][0],2) +  pow(mas[k][1]- mas[i][1],2)) == (pow(mas[k][0]- mas[j][0],2) +  pow(mas[k][1]- mas[j][1],2))
                
                
                ){
                    res++;

                }
               
            }
        }
    }
    std::cout << res;


    return 0;
}