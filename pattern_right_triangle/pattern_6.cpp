//1
//1 4
//1 4 9

 # include <iostream>
using namespace std;
int main()
{
    for(int r=1; r<=3; r++)
    {
        for(int c=1; c<=r; c++)
        {
            cout << c*c << "\t";
        }
        cout << "\n";
    }
}