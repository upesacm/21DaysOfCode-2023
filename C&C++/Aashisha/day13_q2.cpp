/*Create a program that dynamically allocates memory for a matrix of integers. 
Allow the user to enter the dimensions of the matrix and populate it with values.
 Perform matrix multiplication and print the result.*/
 #include <iostream>
 using namespace std;
 int main()
 {
    int row1,row2,col1,col2;
    //array 1
    cout<<"Enter the number of rows in the array1: "<<endl;
    cin>>row1;
    cout<<"Enter the number of columns in the array1: "<<endl;
    cin>>col1;
    int **a1;
    //dynamically adds storage for rows
    a1=new int *[row1];
    //dynamically adds storage for columns
    for(int z=0;z<row1;z++)
    { 
        a1[z]= new int [col1];
    }
    //array 2
    cout<<"Enter the number of rows in the array2: "<<endl;
    cin>>row2;
    cout<<"Enter the number of columns in the array2: "<<endl;
    cin>>col2;
    int **a2;
    //dynamically adds storage for rows
    a2=new int *[row2];
    //dynamically adds storage for columns
    for(int z=0;z<row2;z++)
    { 
        a2[z]= new int [col2];
    }
    cout<<"Enter the elements in the array1: "<<endl;
    //insert elements in array 1
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
        cin>>a1[i][j];
        }
    }
    cout<<"Enter the elements in the array2: "<<endl;
    //insert elements in array 2
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
        cin>>a2[i][j];
        }
    }
    //display the array 1
    cout<<"The array1 is: "<<endl;
    for(int p=0;p<row1;p++)
    {
        for(int q=0;q<col1;q++)
        {
        cout<<a1[p][q]<<" ";
        }
        cout<<endl;
    }
    //display the array 2
    cout<<"The array2 is: "<<endl;
    for(int p=0;p<row1;p++)
    {
        for(int q=0;q<col2;q++)
        {
        cout<<a2[p][q]<<" ";
        }
        cout<<endl;
    }
    //Matrix multiplication
    int **mul;
        //dynamically adds storage for rows
    mul=new int *[row1];
    //dynamically adds storage for columns
    for(int z=0;z<row1;z++)
    { 
        mul[z]= new int [col2];
    }
    cout<<"The new array is: "<<endl;
    int mult;
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++)
        {
           mul[i][j]=0;
           for (int k = 0; k < col1; k++)
            {
                mul[i][j] += a1[i][k] * a2[k][j];
            }
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
 }
