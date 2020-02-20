#include <iostream>
#include <string>
#include <vector>

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

void numberOfNumbers(){
    char buff[0]; 
    int a[3],b,d[10] = {0};
    for (int i = 0 ; i < 3 ; i++){
        std::cin >> a[i];
    }
    b = a[0]*a[1]*a[2];
    std::string c = std::to_string(b);
    for (int i=0; i < c.length(); i++){
        for(int j=0; j < 10; j++){
            sprintf(buff,"%d",j);
            if (c[i] == buff[0]) d[j] += 1 ;
        }
    }
    for (int i=0; i < 10; i++){
        std::cout << d[i] << std::endl;
    }
}

void modulo(){
    std::vector<int> number;
    int minus = 0, int_temp;
    for(int i=0; i<10; i++){
        std::cin >> int_temp;
        int_temp = int_temp %  42;
        number.push_back(int_temp);
    }
    for(int i=0; i<9; i++){
        for(int j=i; j<9; j++){
            if (number[i] == number[j+1]){
                minus += 1;
                number[j+1] = 100 + minus;
            }
        }
    }
    std::cout << 10 - minus;
}

int main(){
    modulo();
}