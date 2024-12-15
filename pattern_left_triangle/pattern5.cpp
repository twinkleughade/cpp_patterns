//      A
//    B A
//  C B A

# include <iostream>
using namespace std;
int main()
{  
    for(int i= 1; i<=3; i++)
    {
    
        for(int s=1; s>i; s--)
        { 
            cout << " ";
        }
        for(int j=1; j>=i; j--)
        {
            cout << char(j +64) ;
        }
        cout << "\n";
    }
}

