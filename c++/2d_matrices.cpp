#include <iostream>
using namespace std;
// row_sum(int arr[][5],int i,int j){
//     int sum=0;
//     for(int x=0;x<i;x++){
//         for(int y=0;y<j;y++){
//             sum+=arr[x][y];
//         }
//     }cout<<sum;
// }
int main()
{
    int a, b;
    cout << "size of row :" << endl;
    cin >> a;
    cout << "size of colomn :" << endl;
    cin >> b;

    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }
    int maxi = INT_MIN;
    for (int x = 0; x < a; x++)
    {
        int sum = 0;
        for (int y = 0; y < b; y++)
        {
            sum += arr[x][y];
        }if(maxi<sum){
            maxi=sum;
        }
    }
    cout << maxi;

    return 0;
}