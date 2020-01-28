#include <iostream>
#include <array>

//it also need -std=c++11 to be compiled
//it has size(), not pointer to transfer data, but static data size
void print_templatized_array(std::array<int,10> data)
{
    for(int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << " ";
    }
    std::cout << "\n";
}

int main()
{
    std::array<int,10> data = {1,2,3,4,5};
    print_templatized_array(data);
    int data_array[] = {1,2,3,4,5,6};
    //-std=c++11 and only pure array can this
    for(int n : data_array)
    {
        std::cout << n << " ";
    }
}