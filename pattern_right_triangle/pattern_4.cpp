//1
//2 3
//4 5 6 
 //note- consecutive series 
//floyd triangle
# include <iostream>
using namespace std;
int main()
{    int t=1;
    for(int r=1; r<=3; r++)
    {
        for(int c=1; c<=r; c++)
        {
            cout << t << "\t";
            t++;
        }
        cout << "\n";
    }
}