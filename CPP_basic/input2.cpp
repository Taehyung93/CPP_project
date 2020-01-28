#include <iostream>
// Book says that you have to #include <string> for using string but it's okay with me
#include <sstream>
// sstream makes code use istringstream
using namespace std;

int main(){
    //Input String and Output
    string g;
    getline(cin,g);
    cout << g << endl;  

    //문자열을 받아서 숫자로 분리해내기 -> 문제풀 때 많이 사용한다.
    string s;
    int a,b;
    double c;

    getline(cin,s);
    // 입력 문자열 처리 전용 스트림
    istringstream sin(s);

    sin >> a >> b >> c;
    // 이렇게되면 숫자가 다 붙어서 출력이된다.
    cout << a << b << c << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    // while 문을 저렇게 선언하면 계속해서 입력을 받고 ctrl+z 를 눌러 EOF 처리를 해줘야된다는데 난 잘 안된다.
    int d;
    
    while (cin >> d){
        
    }


    return 0;
}