#include <iostream>
#include <fstream>

using namespace std;

char *doinhiphan(float x, int n)
{   
    float y = x;
    while(n--) {
        y *= 2;
        if (y >= 1) {
            cout << 1;
            y = y - 1;
            continue;
        }
        cout << 0;
    }
    return 0;
}

void *doctep(float &x, int &n)
{
    fstream file("prime.txt");
    file.open("prime.txt");
    file << x;
    file >> x;
    doinhiphan(x, n);
    file.close();
} 

int main()
{
    float x;
    int n;
    cin >> x >> n;
    doctep(x, n);
}