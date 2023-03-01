#include <iostream>
using namespace std;

string fireFun(string address);
char fire[5][5] = {{'.', '.', '.', '*', '*'}, {'.', '*', '.', '.', '.'}, {'.', '*', '.', '.', '.'}, {'.', '*', '.', '.', '.'}, {'.', '.', '*', '*', '.'}};
main()
{
    string answer;
    string address;
    cout << "Please enter address:  ";
    cin >> address;
    answer = fireFun(address);
    cout << answer << endl;
}
string fireFun(string address)
{
    string result;
    char row;
    int num;
    row = address[0];
    num = address[1];
    int colIndex = (int(num) - '0') - 1;
    int rowIndex;
    if(row == 'a')
    {
        rowIndex = 0;
    }
    else if(row == 'b')
    {
        rowIndex = 1;
    }
    else if(row == 'c')
    {
        rowIndex = 2;
    }
    else if(row == 'd')
    {
        rowIndex = 3;
    }
    else if(row == 'e')
    {
        rowIndex = 4;
    }
    if (fire[rowIndex][colIndex] == '.')
    {
        result = "Splash";
    }
    else if (fire[rowIndex][colIndex] == '*')
    {
        result = "Boom";
    }
    return result;
}
