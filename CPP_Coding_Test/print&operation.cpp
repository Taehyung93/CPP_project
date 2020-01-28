#include <iostream>
#include <iomanip> 

void hello(){
    std::cout << "Hello World!";
}

void krill(){
    std::cout << "강한친구 대한육군\n";
    std::cout << "강한친구 대한육군\n";
}

void cat(){
    std::cout << "\\    /\\" <<std::endl;
    std::cout << " )  ( ')" <<std::endl;
    std::cout << "(  /  )" <<std::endl;
    std::cout << " \\(__)|" <<std::endl;
}

void dog(){
    std::cout << "|\\_/|\n|q p|   /}\n( 0 )\"\"\"\\\n|\"^\"`    |\n||_/=\\\\__|\n";
}

void plus(){
    int a,b,c;
    std::cin >> a >> b ;
    c = a+b;
    std::cout << c << "\n";
}

void minus(){
    int a,b,c;
    std::cin >> a >> b ;
    c = a-b;
    std::cout << c << "\n";
}

void multiply(){
    int a,b,c;
    std::cin >> a >> b ;
    c = a*b;
    std::cout << c << "\n";
}

void divide(){
    double a,b,c;
    std::cin >> a >> b;
    std::cout << std::setprecision(16);
    c = a / b;
    std::cout << c << "\n";
}
void four_operations(){
    int a,b,c;
    std::cin >> a >> b;
    std::cout << a + b <<"\n";
    std::cout << a - b <<"\n";
    std::cout << a * b <<"\n";
    // python has // because it does not have type.
    std::cout << a / b <<"\n";
    std::cout << a % b <<"\n";
}

void rest(){
    //첫째 줄에 (A+B)%C, 둘째 줄에 (A%C + B%C)%C, 셋째 줄에 (A×B)%C, 넷째 줄에 (A%C × B%C)%C를 출력한다.
    int a,b,c;
    std::cin >> a >> b >> c;
    std::cout << (a+b)%c  << "\n";
    std::cout << (a%c + b%c)%c  << "\n";
    std::cout << (a*b)%c  << "\n";
    std::cout << (a%c * b%c)%c  << "\n";
}

void three_multiply(){
    int a,b;
    std::cin >> a ;
    std::cin >> b ;
    std::cout << a * (b%10) << "\n";
    std::cout << a * ((b / 10)%10) << "\n";
    std::cout << a * (b / 100) << "\n";
    std::cout << a * b << "\n";
}

int main(){
    three_multiply();
}