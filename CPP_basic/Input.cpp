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
    
    // �̷��ԵǸ� �Էµ� ���� ����̵ǰ��� �ٽ� ����ϰԵȴ�. python �� �Ȱ���. 
    //�׷��� ������ %i �� �޾Ƶ��ȴ�. ������ �̷��� c �� �ٸ��� c++ ������ ����ϸ� �ȵȴ�.
    cin >> c;
    cin >> d;
    printf("%d\n",c);
    printf("%d\n",d);

    cin >> e;
    printf("%f\n",e);

    // char �� ������ �� �ϳ��� ���ڸ� �޴´�. char �� �ᵵ c �� ����̵ȴ�.
    cin >> f;
    printf("%c",f);
    // ������ ���� �𸣰����� �ٸ� �Է��� ���������� �Է��� ������ �����̵��� �ʴ´�.
    getline(cin,g);
    cout << g << endl;

    return 0;
}