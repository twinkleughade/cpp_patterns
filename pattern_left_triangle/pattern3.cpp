//     1
//   2 2
// 3 3 3

# include <iostream>
using namespace std;
int main()
{
    for(int r=1; r<=3; r++)
    {
        for(int s=3; s>=r; s--)
        { cout << " ";
        }
        for(int c=1; c<=r; c++)
        {
            cout << r ;
        }
        cout << "\n";
    }
}