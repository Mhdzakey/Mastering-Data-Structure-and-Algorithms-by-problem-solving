#include <iostream>
using namespace std;
int main(){

/*
    //creating 2D array
    int n;
    cout << "Enter matrix row and column ... " << endl;
    cin >> n;
    int** array = new int*[n];

    //traversing 2D
    for (int i = 0; i < n; i++)
    {
        array[i] = new int[n];
    }
    
    //taking input from user
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
        
    }

    //printing output
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j]<< " ";
        }
        cout << endl;



    // creating 2D for different row and col
    //creating 2D array
    cout << "Enter matrix row ... " << endl;
    int row;
    cin >> row;
    cout << "Enter matrix col ... " << endl;
    int col;
    cin >> col;
    int** array = new int*[row];

    //traversing 2D
    for (int i = 0; i < row; i++)
    {
        array[i] = new int[row];
    }
    
    //taking input from user
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> array[i][j];
        }
        
    }

    //printing output
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j]<< " ";
        }
        cout << endl;
        
    }


    // Releasing memoray from heap
    // memoray allocated here
    // freeing it by using keyword delete
    /*   //traversing 2D
    for (int i = 0; i < row; i++)
    {
        array[i] = new int[row];
    }

       //cleaning
    for (int i = 0; i < row; i++)
    {
        delete[] array[i];
    }

    delete[] array;
*/

    cout << "Enter no row you wanna ..... " << endl;
    int row,col;
    cin >> row;
    cout << "Enter no of column .... " << endl;
    cin >> col;
    int** array = new int*[row];

    for(int i = 0; i < row; i++){
        array[i] = new int[row];
    }
    // taking input 
    for(int i = 0; i < row; i++){
        for (int  j = 0; j < col; j++)
        {
            cin >> array[i][j];
        }
        
    }
    //output
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << array[i][j]<< " ";
        }
        cout << endl;
    }


}