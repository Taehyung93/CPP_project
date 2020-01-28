#include <iostream>

using namespace std;


int main()

{

    //In data type's first bit is always sign bit that determine data has only positive or not 
    char x = 'B';
    cout << "Alpabet B's ASCII code is " << (int) x << endl; //It returns ASCII code : 66

    //x and X is diffendt variale.
    char X = 'A';
    cout << "x is " << x << ", X is " << X << endl;
    
    cout << "5/2: " << 5/2 << ", 5/2.0: " << 5/2.0 << endl;

    //Integer
    //data size for descending order : short, int, long, long long
    //sizeof is operator not function
    cout << "size of short data type is " << sizeof(short) << endl; //2 bite -> 16 bit -> 2^16 approximately 64000.
    cout << "size of int data type is " << sizeof(int) << endl; //4 bite -> 32 bit -> 2^32
    cout << "size of long data type is " << sizeof(long) << endl; //8 bite -> 64 bit -> 2^64
    cout << "size of long long data type is " << sizeof(long long) << endl; //8 bite -> 64 bit -> 2^64
    //below code SHRT is short Max means positive max limit that is 32767.
    //so USHRT_MIN does not exist and USHRT_MAX has twice of positive number that just SHRT_MAX.
    cout << SHRT_MAX << SHRT_MIN << USHRT_MAX << LLONG_MAX << LLONG_MIN << ULLONG_MAX << endl;

    //Float
    //data size for descending order : float, double, long double
    return 0;
}
