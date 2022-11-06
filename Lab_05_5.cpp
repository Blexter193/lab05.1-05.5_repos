#include<iostream>
#include<math.h>

using namespace std;
 
int func(int n, int level, int& depth)
{
    if (level > depth)
    {
        depth = level;
    }
    cout << "level = " << level << endl;
    if (n == 0)
        return 0;
    else
        return (n % 10) + func((n / 10), level + 1, depth);
}
 
 
 
int main()
{
    int depth = 0;
    int n;
    cout << "n < 2 147 483 647" << endl;
    cout << "n = "; cin >> n;
    cout << endl;
    cout << "sum = " << func(n, 1, depth) << endl;
    cout << "depth = " << depth;
 
    return 0;
}
