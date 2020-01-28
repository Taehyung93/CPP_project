#include <iostream>

//pass by reference
//& specifically locate value of address
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    std::cout << "a: " << a << "\t b: " << b << "\n";
}
//Template
template <typename T>
void swap(T a[], T b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
        std::cout << a[i] << " " << b[i] << " ";
    }
    std::cout << "\n";
}

//c++ identify function by it's name and parameter not data type.
//if int swap(int &a, int &b) function can not be generated.
void swap(std::string &a, std::string &b)
{
    std::string temp = a;
    a = b;
    b = temp;
}



int main()
{
    int SIZE = 6;
    int a = 10;
    int b = 20;
    std::cout << "a: " << a << "\t b: " << b << "\n";
    swap(a,b);
    std::string c = "come";
    std::string d = "on";
    swap(c,d);
    std::cout << c << d << std::endl;
    int nines[] = {9,9,9,9,9,9};
    int ones[]  = {1,1,1,1,1,1};

    for (int i = 0; i < SIZE; i++)
    {
        std::cout << nines[i] << " " << ones[i] << " ";
    }
    std::cout << "\n";

    swap(nines,ones,SIZE);

    return 0;
}