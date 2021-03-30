#include <iostream>

using namespace std;

struct Inputs
{
    int a;
    int b;
};

class Utils
{
public:
    int gcd(int a, int b)
    {
        if (a == 0)
            return b;
        return gcd(b % a, a);
    }

    int lcm(int a, int b)
    {
        return (a * b) / gcd(a, b);
    }
};

int main()
{
    int n, a, b;
    cin >> n;
    Utils utils;
    Inputs inputs[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        inputs[i] = {a, b};
    }
    for (int i = 0; i < n; i++)
    {
        a = inputs[i].a;
        b = inputs[i].b;
        cout << utils.lcm(a, b) << " " << utils.gcd(a, b) << endl;
    }
}