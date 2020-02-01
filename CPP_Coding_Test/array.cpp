#include <iostream>

void minAndmax(){
    int a;
    std::cin >> a;
    int b[a], c[a];
    for (int i = 0 ; i < a ; i++){
        std::cin >> b[i];
        c[i] = b[i];
    }
    for (int i = 0; i < a-1; i++){
        if (b[i] > b[i+1]) b[i+1] = b[i];
        if (c[i] < c[i+1]) c[i+1] = c[i];
    }
    std::cout << c[a-1] << " " << b[a-1] << std::endl;
}

void minAndmax2(){
   int num, count,min = 1000001, max = -1000001;
   std::cin>>count;

    while(std::cin>>num){
        max = num > max ? num : max;
        min = num < min ? num : min;
    }
    std::cout << min << " " << max;
}

void maxAndLocate(){
    int num, max = 0, array[9];
    for(int i = 0; i < 9; i++){
        std::cin >> num;
        max = num > max ? num : max;
        array[i] = max;
    }
    for(int i = 0; i < 9; i++){
        if (array[8] == array [i]) {
            std::cout << array[8] << " " << std::to_string(i + 1) << "\n";
            break;
        }
    }
}

int main(){
    maxAndLocate();
}