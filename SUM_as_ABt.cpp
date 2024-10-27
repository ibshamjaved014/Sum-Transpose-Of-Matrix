#include<iostream>
using namespace std;

int main()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j, transpose[100][100];

    cout << "Enter number of rows (between 1 and 100): ";
    cin >> r;

    cout << "Enter number of columns (between 1 and 100): ";
    cin >> c;

    cout << endl << "Enter elements of 1st matrix: " << endl;

    // Storing elements of first matrix entered by user.
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout<<"Enter the Element at index ["<<i+1<<"-"<<j+1<<"] :";
			cin>>a[i][j];
       }
    
	cout<<endl;   
    cout<<"The A Matrix you have entered :"<<endl;
	for(int i=0; i<r; ++i)
	{
		for(int j=0; j<c; ++j)
		{
			cout<<" "<<a[i][j];
			if(j==c -1){
				cout<<endl<<endl;
			}
		}
	}

    // Storing elements of second matrix entered by user.
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
       	    cout<<"Enter the Element at index ["<<i+1<<"-"<<j+1<<"] :";
			cin>>b[i][j];
       }
       
    cout<<endl;   
    cout<<"The B Matrix you have entered :"<<endl;
	for(int i=0; i<r; ++i)
	{
		for(int j=0; j<c; ++j)
		{
			cout<<" "<<b[i][j];
			if(j==c -1){
				cout<<endl<<endl;
			}
		}
	}
       
    for(int i=0; i<r; ++i)
	{
		for(int j=0; j<c; ++j)
		{
			transpose[j][i]=b[i][j];
		}
	}
	cout<<"The Transpose of The B matrix  :"<<endl;
	for (int i = 0; i < c; ++i)
      for (int j = 0; j < r; ++j) {
         cout << " " << transpose[i][j];
         if (j == r - 1)
            cout << endl << endl;
      }


       

    // Adding Two matrices
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + transpose[i][j];

    // Displaying the resultant sum matrix.
    cout << endl << "Sum of two matrix is as ABt: "<< endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }

    return 0;
}

