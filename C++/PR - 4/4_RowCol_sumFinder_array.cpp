// row and column sum finder
#include <iostream>
using namespace std;
int main()
{
    int i, j, row, col, sum = 0;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;
    int arr[row][col];
    cout << "Enter the elements of array: ";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
    
    for(i=0;i<row;i++){
        for(j=0;j<col;j++) cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    cout<<"Enter the row number : ";
    cin>>j;
    
    if(j >= row) cout<<"sum of row "<<row<<" is : 0"<<endl;
    else{
        for(i=0;i<col;i++) sum = sum + arr[j][i];
        cout<<"sum of row "<<row<<" is : "<<sum<<endl;
    }
    sum = 0; // reset the previos sum
    
    cout<<"Enter the column number : ";
    cin>>j;
    if(j >= col) cout<<"the sum of column "<<col<<"is : 0"<<endl;
	else{
        for(i=0;i<row;i++) sum = sum + arr[i][j];
        cout<<"the sum of column "<<col<<"is : "<<sum<<endl;
    }   
    
}
