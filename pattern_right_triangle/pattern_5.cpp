//1
//4 9
//16 25 36

# include <iostream>
using namespace std;
int main()
{
     int t=1;
    for(int r=1; r<=3; r++)
    {
        for(int c=1; c<=r; c++)
        {
            cout << t*t << "\t";
            t++;
        }
        cout << "\n";
    }
}