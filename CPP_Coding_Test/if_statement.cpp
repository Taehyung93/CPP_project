#include <iostream>

void compare(){
    int a,b;
    std::cin >> a >> b ;
    if (a < b){
        std::cout << "<" << "\n";
    }
    else if (a > b){
        std::cout << ">" << "\n";
    }
    else{
        std::cout << "==" << "\n";
    }

}

void score(){
    int a;
    std::cin >> a;
    if (a > 89){
        std::cout << "A" << "\n";
    }
    else if (a > 79){
        std::cout << "B" << "\n";
    }
    else if (a > 69){
        std::cout << "C" << "\n";
    }
    else if (a > 59){
        std::cout << "D" << "\n";
    }
    else {
        std::cout << "F" << "\n";
    }
}

void leap_year(){
    int a;
    std::cin >> a;
    if ((a%400)==0){
        std::cout << "1" << "\n";
    }
    else if((a%100)==0){
        std::cout << "0" << "\n";
    }
    else if((a%4)==0){
        std::cout << "1" << "\n";
    }
    else{
        std::cout << "0" << "\n";
    }
}

void alaram(){
    int a,b;
    std::cin >> a >> b;
    if (b > 44){
        b = b - 45;
    }
    else if(a > 0){
        b = b + 15;
        a = a - 1;
    }
    else{
        b = b + 15;
        a = 23;
    }
    std::cout << a << " " << b << "\n";
}

void three_numbers(){
    int a,b,c;
    std::cin >> a >> b >> c ;
    if (a >= b){
        if (a >= c){
            if (b >= c){
                //a >= b >= c
                std::cout << b << "\n";
            }
            else{
                // a >= c >= b
                std::cout << c << "\n";
            }
        }
        else{
            // c >= a >= b
            std::cout << a << "\n";
        }
    }
    else{
        if (a >= c){
            //b >= a >= c
            std::cout << a << "\n";
        }
        else{
            if (b >= c){
                // b >= c >= a
                std::cout << c << "\n";
            }
            else{
                // c >= b >= a
                std::cout << b << "\n";
            }
            
        }
    }
}

int main(){
    three_numbers();
}