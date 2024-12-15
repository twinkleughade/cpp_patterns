// 1
// 1 2 
// 1 2 3

# include <iostream>
using namespace std;
int main()
{
    int r=3,c=3;
    // for (int r=1; r<=3; r++)
    // {
    //     for(int c=1; c<=r; c++)
    //     {
    //         cout << c << "\t";
    //     }
    //     cout << "\n";
    // }
    for (int i=1; i<=r; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << j << "\t";
        }
        cout << "\n";
    }
}