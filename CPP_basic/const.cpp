#include <iostream>

void do_something(const int array[])
{
    std::cout << "go fuck yourself" << std::endl;
}

void print_array(const int data[], int size)
{
    for(int i = 0; i < size ; i++)
    {
        //const can not be changed after declare 
        //data[i]++;
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
    //if you want const data to another function, that's parameter must be const value
    do_something(data);
}

int main()
{
    int data[] = {1,2,3};
    print_array(data, 3);
    std::cout << data[0] << " ";
}