//     A
//   B B
// C C C

# include <iostream>
using namespace std;
int main()
{
    for(int r='A'; r<='C'; r++)
    {
        for(int s=3; s>r; s--)
        { cout << "  ";
        }
        for(int c='A'; c<=r; c++)
        {
            cout <<char (r );
        }
        cout << "\n";
    }
}