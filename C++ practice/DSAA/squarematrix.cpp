#include <iostream>

using namespace std;

void init()
{

}

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        int h, v;
        cin >> h >> v;
        int array[h + 1][v + 1];
        int array1[h + 1][v + 1];
        for (int i = 0; i <= h; i++)
        {
            for (int j = 0; j <= v; j++)
            {
                array[i][j] = 0;
                array1[i][j] = 0;
            }
        }
        for (int i = 1; i <= h; i++)
        {
            for (int j = 1; j <= v; j++)
                cin >> array[i][j];
        }
        array1[1][1] = 1;
        for (int i = 1; i <= h; i++)
        {
            for (int j = 1; j <= v; j++)
            {
                if (i == 1 && j == 1)
                    continue;
                array1[i][j] = array1[i - 1][j] + array1[i][j - 1];
            }
        }
        cout << array1[h][v] << endl;
    }
}