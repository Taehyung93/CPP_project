#include <iostream>
#include <vector>

class User
{
    std::string status = "sleepy";
    public:
        std::string first_name;
        std::string last_name;
        std::string get_status()
        {
            return status;
        }
        //constructor는 class가 실행이 되면 무조건 실행이되는 함수이다. python의 _init__ 이라고 보면된다.
        User()
        {
            std::cout << "Constructor" << std::endl;
        }
        //아래를 정의하면 위의 User()를 사용할 수 없게된다고 강의에서는 그랬지만 나는 된다.. 아니 안될 이유가 애초에 없잖아?
        //3개 를 정의했는데 두개만 넣으면 안된다. 이건 확실하다!!
        User(std::string first_name, std::string last_name, std::string status)
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
        }
        //Destructor는 아래와 같이 정의된 경우 클래스가 호출되면 모양에 관계없이 무조건 호출
        //class가 해제되는 순간에 호출된다. initial 만 User me; 처럼했다면 constructor만 뜨는 것이고, 이를 호출했다면 끝도 나온다. 모든 것이 실행되고서 실행이된다.
        //~User() me; 해서 미리 해제할 수도 있다.
        ~User()
        {
            std::cout << "Destructor\n";
        }
};

int main()
{
    User me;
    User user("Kim", "Curry", "Rice");
    std::cout << user.last_name << user.get_status() << std::endl;
}
