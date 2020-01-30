#include <iostream>

void multiplication_table(){
    int n;
    std::cin >> n;
    for (int i = 1; i <10; i++){
        std::cout << n << " * " << i << " = " << n*i << "\n";
    }

}

void a_plus_b(){
    int n;
    std::cin >> n;
    int a_array[n], b_array[n];
    for (int i = 0; i < n ; i++){
        std::cin >> a_array[i] >> b_array[i];
    }
    for (int i = 0; i < n ; i++){
        std::cout << a_array[i] + b_array[i] << "\n";
    }
}

void sum_integer(){
    int n;
    std::cin >> n;
    int SIZE = n;
    for (int i = 1; i < SIZE; i++){
        n += i;
    }
    std::cout << n << std::endl;
}

void fast_a_plus_b(){
    // 입출력 속도 늘리기

    //디폴트는 cout,cin이 tie되어 있다. 
    //cin.tie(NULL)은 cin을 cout으로부터 untie합니다. 
    //stream을 tie하면 다른 stream에서 입출력요청이 오기전에 stream을 flush시킵니다
    //그러므로 만약 cin과 cout을 untie하게될 경우, 
    //cin으로 입력을 받기전에 뭔가를 띄우고 싶다면 매번 수동적으로 cout을 flush 시켜줘야합니다.
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    //이를 사용하면 c++만의 독립적인 버퍼를 생성하게 되고 c의 버퍼들과는 병행하여 사용할 수 없게 된다. 
    //대신 사용하는 버퍼의 수가 줄어들었기 때문에 속도는 높아지게 된다.
    std::ios_base::sync_with_stdio(false);                                                                                       
    
    int T, A, B;
    std::cin >> T;
    int int_array[T];
    for (int i = 0; i < T; i++) {
        std::cin >> A >> B;
        int_array[i] = A + B;
        
    }
    for (int i = 0; i < T; i++){
        std::cout << int_array[i] << '\n';
    }
}

void pickNs(){
    int N;
    std::cin >> N;
    for (int i = 1; i < N+1; i++){
        std::cout << i << "\n";
    }

}

void reversePickNs(){
    int N;
    std::cin >> N;
    for (int i = N; i > 0; i--){
        std::cout << i << "\n";
    }
}

void prettyAplusB(){
    int n;
    std::cin >> n;
    int a_array[n], b_array[n];
    for (int i = 0; i < n ; i++){
        std::cin >> a_array[i] >> b_array[i];
    }
    for (int i = 0; i < n ; i++){
        std::cout << "Case #" << i+1 << ": " << a_array[i] + b_array[i] << "\n";
    }
}

void mostPrettyAplusB(){
    int n;
    std::cin >> n;
    int a_array[n], b_array[n];
    for (int i = 0; i < n ; i++){
        std::cin >> a_array[i] >> b_array[i];
    }
    for (int i = 0; i < n ; i++){
        std::cout << "Case #" << i+1 << ": " << a_array[i] << " + " <<   b_array[i] << " = " << a_array[i] + b_array[i] << "\n";
    }
}

void pickStar(){
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            printf("*");
        }
        printf("\n");
    }
}

void pickStarReverseFail(){
    int n;
    std::cin >> n;
    char array_char[n];
    for (int i = 0; i < n; i++){
        array_char[i] = ' ';
    }
    //printf is c grammer so it does not work c++ grammer 
    //printf(array_char) works but std::string does not work
    for (int i = 1; i < n + 1; i++){
        array_char[n-i] = '*';
        std::cout << array_char << "\n";
    }
    // over 3, @ appears after end  of line..
}

void pickStarReverseSuccess(){
    int n;
    std::cin >> n;
    std::string array_string[n];
    for (int i = 0; i < n; i++){
        array_string[i] = " ";
    }
    //simply cout << array_string it will show address output.
    for (int i = 1; i < n + 1; i++){
        array_string[n-i] = "*";
        for (const auto &star : array_string){
            std::cout << star;
        }
        std::cout << "\n";
    }
}

//이게 내가 원하는 방식의 코딩이다. 아래 방식으로 코딩을 하는 것이 중요하다.
//언어에 dependency 없게 말이다. 
//그러기위해 코딩에 들어가는 재료는 간소하며, 심플하면서 치열한 Logic만이 존재하게 말이다.
void pickStarReverse(){
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j < n - i - 1) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
}

void lessThanX(){
    int n, x;
    std::cin >> n >> x;
    int array[n];
    for (int i = 0; i < n; i++){
        std::cin >> array[i];
    }
    for (int i = 0; i < n; i++){
        if (array[i] < x) std::cout << array[i] << " ";
    }
}

int main(){
    lessThanX();
    }