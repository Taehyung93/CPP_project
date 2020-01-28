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
        //constructor�� class�� ������ �Ǹ� ������ �����̵Ǵ� �Լ��̴�. python�� _init__ �̶�� ����ȴ�.
        User()
        {
            std::cout << "Constructor" << std::endl;
        }
        //�Ʒ��� �����ϸ� ���� User()�� ����� �� ���Եȴٰ� ���ǿ����� �׷����� ���� �ȴ�.. �ƴ� �ȵ� ������ ���ʿ� ���ݾ�?
        //3�� �� �����ߴµ� �ΰ��� ������ �ȵȴ�. �̰� Ȯ���ϴ�!!
        User(std::string first_name, std::string last_name, std::string status)
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
        }
        //Destructor�� �Ʒ��� ���� ���ǵ� ��� Ŭ������ ȣ��Ǹ� ��翡 ������� ������ ȣ��
        //class�� �����Ǵ� ������ ȣ��ȴ�. initial �� User me; ó���ߴٸ� constructor�� �ߴ� ���̰�, �̸� ȣ���ߴٸ� ���� ���´�. ��� ���� ����ǰ� �����̵ȴ�.
        //~User() me; �ؼ� �̸� ������ ���� �ִ�.
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
