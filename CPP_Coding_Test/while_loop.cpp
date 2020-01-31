#include <iostream>
#include <vector>

void multipleCin(){
    std::vector<int> results;
    int a,b;
    bool loop = true;
    while(loop){
        std::cin >> a >> b ;
        if (a+b == 0) loop = false;
        if (loop) results.push_back(a+b);
    }
    for(int i = 0; i < results.size(); i++){
        std::cout << results[i] << "\n";
    }
}

void multipleCinExcept(){
    int a,b;
    //input not integer type it will break
    while (std::cin >> a >> b){
        std::cout << a+b << std::endl;
    }
    while(true){
    std::cin >> a >> b;
      if(std::cin.eof() == true) {
    // without any input value of cin
    // cin.eof() returns true
        break;
       }
       std::cout << a + b << std::endl;
   }
}

void multipleCinScanf(){
    int a,b;
    while(scanf("%d %d", &a, &b) != EOF){
        std::cout << a + b << std::endl;
    }
}

void cycleNumber() {
    int a,b, origin, result;
    bool loop = true;
    result = 0;
    std::cin >> a;
    origin = a;
    while(loop) {
        b = a / 10 + a % 10;
        b = b % 10;
        a = a % 10;
        a = a*10 + b;
        result += 1;
        if (a == origin) loop = false;
    } 
    std::cout << result;
}

int main(){
    cycleNumber();
}