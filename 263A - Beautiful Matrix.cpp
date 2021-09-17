#include <iostream>
using namespace std;
 
int main()
{
    int arr[6][6];
 
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
            cin >> arr[i][j];
    }
 
    if (arr[1][1] == 1 || arr[5][5] == 1 || arr[5][1] || arr[1][5])
        cout << "4";
    else if (arr[1][2] == 1 || arr[1][4] || arr[2][1] == 1 || arr[2][5] || arr[4][1] == 1 || arr[5][2] == 1 || arr[4][5] == 1 || arr[5][4] == 1)
        cout << "3";
    else if (arr[3][2] == 1 || arr[2][3] == 1 || arr[3][4] ==1 || arr[4][3] == 1)
        cout << "1";
    else if (arr[1][3] == 1 || arr[3][1] || arr[5][3] == 1 || arr[3][5] || arr[2][2] == 1 || arr[4][4] == 1 || arr[4][2] == 1 || arr[2][4] == 1)
        cout << "2";
    else cout << "0";
    return 0;
}