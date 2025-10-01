#include <iostream>
using namespace std;

void testBitWise()
{
    int a = 1, b = 2;
    int XOR = a ^ b, AND = a & b, OR = a | b, NOT = ~a, RightShift = b >> a, leftShift = b << a;
    cout << XOR << endl;
    cout << AND << endl;
    cout << OR << endl;
    cout << NOT << endl;
    cout << RightShift << endl;
    cout << leftShift << endl;
}

int main()
{

    testBitWise();
    return 0;
}