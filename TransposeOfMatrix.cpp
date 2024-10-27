#include <iostream>
using namespace std;

int main()
{
	int a[10][10], transpose[10][10], row, column,i,j;
	
	cout<<" Enter the row of the matrix :"<<endl;
	cin>> row;
	cout<<"Tnter the column of the matrix :"<<endl;
	cin>>column;
	
	cout<<"\n Enter the elements of matrix: "<<endl;
	
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<column; ++j)
		{
			cout<<"Enter the Element at index ["<<i+1<<"-"<<j+1<<"] :";
			cin>>a[i][j];
		}
	}
	cout<<endl;
	
	cout<<"The Matrix you have entered :"<<endl;
	for(int i=0; i<row; ++i)
	{
		for(int j=0; j<column; ++j)
		{
			cout<<" "<<a[i][j];
			if(j==column -1){
				cout<<endl<<endl;
			}
		}
	}
	
	for(int i=0; i<row; ++i)
	{
		for(int j=0; j<column; ++j)
		{
			transpose[j][i]=a[i][j];
		}
	}
	
	cout<<"The Transpose of the entered matrix :"<<endl;
	for (int i = 0; i < column; ++i)
      for (int j = 0; j < row; ++j) {
         cout << " " << transpose[i][j];
         if (j == row - 1)
            cout << endl << endl;
      }

   return 0;
}
