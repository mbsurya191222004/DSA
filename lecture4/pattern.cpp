#include <iostream>
using namespace std;

void p1234()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void p321()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 3; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pstar()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void pPyramid123()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pPyramid123Rep()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = i; j <= i + (i - 1); j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pABC()
{
    for (int i = 'A'; i <= 'C'; i++)
    {
        for (int j = 'A'; j <= 'C'; j++)
        {
            cout << (char)i << " ";
        }
        cout << endl;
    }
}
void pAAABBBCCC()
{
    for (int i = 'A'; i <= 'C'; i++)
    {
        for (int j = 'A'; j <= 'C'; j++)
        {
            cout << (char)j << " ";
        }
        cout << endl;
    }
}
void pABCDEFG()
{
    for (int i = 'A'; i <= 'C'; i++)
    {
        for (int j = i; j <= i + 2; j++)
        {
            cout << (char)j << " ";
        }
        cout << endl;
    }
}

void pPyramidABC()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)(i + 64) << " ";
        }
        cout << endl;
    }
}

void pPyramidABCDEFG()
{
    int a = 65;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)(a) << " ";
            a++;
        }
        cout << endl;
    }
}

void pABCCDEDEFG()
{
    for (int i = 'A'; i <= 'D'; i++)
    {
        for (int j = i; j <= i + ((i - 64) - 1); j++)
        {
            cout << (char)j << " ";
        }
        cout << endl;
    }
}
void pstarRev()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4 - i; j++)
        {
            cout << "   ";
        }
        for (int a = 1; a <= i; a++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

int main()
{
    pstarRev();
    return 0;
}