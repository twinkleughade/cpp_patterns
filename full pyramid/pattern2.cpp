//     1
//   0  1
//  0   1  0
//1   0   1   0

# include <iostream>
using namespace std;
int main()
{   int a=1, k=0, d;
    for(int i=1; i<=5; i++)
    {
        for(int s=5; s>i; s--)
        {
            cout << " ";
        }
        for(int j=1; j<=i; j++){
            d=a;
            a=k;
            k=d;
            cout << d << " ";
        }
        cout<<"\n";
    }
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int t = 0;
//     for (int r = 1; r <= 6; r++)
//     {
        
//         for (int s = 6; s > r; s--)
//         {
//             cout << " ";
//         }

//         for (int c = 1; c <= r; c++)
//         {
//             if (t == 0)
//             {
//                 cout << "1 ";
//                 t = 1;
//             }
//             else
//             {
//                 cout << "0 ";
//                 t = 0;
//             }
//         }
//         cout << "\n";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
// int val=1;
// for(int i=1;i<=5;i++){
// 	for(int j=5;j>i;j--)
// 	{
// 		cout<<" ";
// 	}
//  for (int c = 1; c <= (2 * i - 1); c++) {
//             cout << val;
//             val = 1 - val; 
//         }
// 	cout<<"\n";
// }


// 	return 0;
// }