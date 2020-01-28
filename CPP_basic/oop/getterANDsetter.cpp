#include <iostream>
#include <vector>

class User
{
    std::string status = "sleepy";
    public:
        std::string first_name;
        std::string last_name;
        //getter�� �ϳ��� ���� ������ �� ���δ�.
        std::string get_status()
        {
            return status;
        }
        //setter�� constructor�� �ٸ��� ���� �Լ��� ������༭ ������ �ϳ��� ���� �־��ִ� �Լ��̴�.
        //�Ʒ��� ���� �ϳ��� ���� ���� ������ �� �� ����ϸ� ����.
        void set_status(std::string status)
        {
            if(status == "Gold" || status == "Silver" || status == "Bronze")
            {
                this->status = status;
            }
            else
            {
                this->status = "That is not fit for status";
            }
            
            this->status = status;
        }
};

int main()
{
    User me;
    me.set_status("Gold");
    std::cout << me.get_status() << std::endl;
}
