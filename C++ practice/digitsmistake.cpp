#include <bits/stdc++.h>

using namespace std;

int convertFiveToSix(int addOne)
{
    string str = to_string(addOne);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '5')
            str[i] = '6';
    }
    int converted = stoi(str);
    return converted;
}
int convertSixToFive(int addTwo)
{
    string str = to_string(addTwo);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '6')
            str[i] = '5';
    }
    int converted = stoi(str);
    return converted;
}
int main()
{
    int addOne, addTwo;
    cin >> addOne >> addTwo;
    cout << convertSixToFive(addOne) + convertSixToFive(addTwo) << " " << convertFiveToSix(addOne) + convertFiveToSix(addTwo);
    cout << endl;
}