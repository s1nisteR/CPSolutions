//Problem 16.1

#include <iostream>
#include <string>

using namespace std;


void fastSwap(int& a, int& b)
{
    a ^= b;
    b ^= a;
    a ^= b;
}


int main()
{
    int a = 3, b = 5;
    //Swapping without temp variable, without XOR, assuming b > a (not very flexible, only for numerics)
    a = b - a;
    b = b - a;
    a = b + a;
    cout << "a: " << a << " " << "b: " << b << endl; 


    int c = 23, d = 56;
    //swapping using XOR, without any extra variables
    c ^= d;
    d ^= c;
    c ^= d;
    cout << "c: " << c << " " << "d: " << d << endl; 
    
    
    //fastSwap function
    int e = 10, f = 20;
    fastSwap(e, f);
    cout << "e: " << e << " " << "f: " << f << endl;

    return 0;
}