#include <iostream>

using namespace std;

int main(){
    int a,b,c,d;
    double e;
    char f;
    string g;
    cin >> a >> b;
    printf("%d\n",a);
    printf("%d\n",b);
    
    // 이렇게되면 입력된 값이 출력이되고나서 다시 출력하게된다. python 도 똑같다. 
    //그러나 정수는 %i 로 받아도된다. 하지만 이렇게 c 와 다르게 c++ 에서는 사용하면 안된다.
    cin >> c;
    cin >> d;
    printf("%d\n",c);
    printf("%d\n",d);

    cin >> e;
    printf("%f\n",e);

    // char 는 오로지 딱 하나의 문자만 받는다. char 를 써도 c 로 출력이된다.
    cin >> f;
    printf("%c",f);
    // 이유는 아직 모르겠으나 다른 입력을 받은다음에 입력을 받으면 실행이되지 않는다.
    getline(cin,g);
    cout << g << endl;

    return 0;
}