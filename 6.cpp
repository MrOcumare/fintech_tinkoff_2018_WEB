#include <iostream>
int f(int n, int k ){
    int r = 0;
    int i = k;
    while(2*i < n) {
        r += f(n-i, i +1);
        i+= 1;
    }
    return r+1;
    

}
int main(){
    int n;
    std::cin >>  n;
    std::cout << f(n, 1);

    return 0;
}

// int stairs(int n)
// {
//     int i,out;
//     if(n<=3) return 1; //  3  слоя можно разложить только 1 способом
//     out=0;
//     for(i=0;i*2<=n;i++) // Меняем i от 0 до половины n
//     {
//         // Отделяем от кучи i слоев и смотрим сколькими способами их можно разолжить:
//         out += stairs(i);
//         // Если отделили ровно половину, то убираем из подсчета случай, когда n раскладывается на два слоя одинаковой ширины:
//         if(i*2==n) out--;
//     }
//     return out;
// }
// int main() {
//     int n;
//     std::cin >> n;
//     std::cout << stairs(n);




//     return 0;
// }