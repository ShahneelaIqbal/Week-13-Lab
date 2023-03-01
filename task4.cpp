#include <iostream>
using namespace std;

bool rows(int row, int nextRow);
int matrix[4][3] = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}, {2, 1, 0}};
main()
{
    int count = 0;
    bool answer;

    for (int row = 0; row < 4; row++)
    {
        for (int nextRow = 1; nextRow < 3; nextRow++)
        {
            answer = rows(row, nextRow);
            if (answer)
            {
                if (row != nextRow)
                {
                    count++;
                }
            }
        }
    }
    cout << count;
}
bool rows(int row, int nextRow)
{
    bool flag = true;
    for (int j = 0; j < 3; j++)
    {
        if (matrix[row][j] != matrix[nextRow][j])
        {
            flag = false;
            break;
        }
    }
    return flag;
}