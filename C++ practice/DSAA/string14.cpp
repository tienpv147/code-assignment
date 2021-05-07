#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);

        char *cstr = new char[s.length() + 1];
        strcpy(cstr, s.c_str());
        char *p;
        int count = 0;
        p = strtok(cstr, " \n\t");

        while (p != NULL )
        {
            count++;
            p = strtok(NULL, " \n\t");
        }

        cout << count << endl;
    }
    return 0;
}