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

    //���ڿ��� �޾Ƽ� ���ڷ� �и��س��� -> ����Ǯ �� ���� ����Ѵ�.
    string s;
    int a,b;
    double c;

    getline(cin,s);
    // �Է� ���ڿ� ó�� ���� ��Ʈ��
    istringstream sin(s);

    sin >> a >> b >> c;
    // �̷��ԵǸ� ���ڰ� �� �پ ����̵ȴ�.
    cout << a << b << c << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    // while ���� ������ �����ϸ� ����ؼ� �Է��� �ް� ctrl+z �� ���� EOF ó���� ����ߵȴٴµ� �� �� �ȵȴ�.
    int d;
    
    while (cin >> d){
        
    }


    return 0;
}