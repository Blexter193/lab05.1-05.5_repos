#include <iostream>
#include <cmath>

using namespace std;

double z(const double x);

int main()
{
    double kp, kk, p;
    int n;
    
    cout << "kp = "; cin >> kp;
    cout << "kk = "; cin >> kk;
    cout << "n  = "; cin >> n;
    
    double dk = (kk-kp)/n;
    
    double k = kp;
    
    while (k <= kk)
    {
        p = z(2*k + 1) - z(2*k - 1)*z(2*k - 1) + sqrt(z(k));
        cout << k << "  " << k << endl;
        k += dk;
    }
    
    return 0;
}

double z(const double x)
{
    if (abs(x) >= 1)
        return (cos(x+1)) / (sin(x)*sin(x) + exp(x));
    else
    {
        double S = 0;
        int j = 0;
        double a = 1. / exp(x);
        S = a;
        do
        {
            j++;
            double R = - x / j;
            a *= R;
            S += a;
        } while(j<7);
        return S;
    }
}

