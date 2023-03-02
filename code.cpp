#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int n, int **CB)
{
    static int a = 1;
    cout<<" "<<a<<endl;

    for(int i=0; i<n; i++){
            cout<<"    ";
        for(int j =0; j<n; j++){
            cout<<CB[i][j]<<" ";
        }
        cout<<endl;
    }
    a++;
    cout<<endl;

}

int isSafe( int n, int row, int col, int **CB )
{
    int i, j;

    for(i=0; i<col; i++){
        if(CB[row][i])
            return 0;
    }

    for(i=row, j=col; i>=0 && j>=0; i--, j--){
        if(CB[i][j])
            return 0;
    }

    for(i=row, j=col; i<n && j>=0; i++, j--){
        if(CB[i][j])
            return 0;
    }

    return 1;
}

int solveQueen(int n, int c, int **CB )
{
    if(n==c){
        print(n, CB);
        return 1;
    }

    int position = 0;
    for(int i=0; i<n; i++){
        if( isSafe(n, i, c, CB ) ){
            CB[i][c] = 1;

            position = solveQueen(n, c+1, CB ) || position;

            CB[i][c] = 0;
        }
    }
    return position;
}

int main()
{
    int n;
    cout<<"\n=========== WELCOME to N-Queen Problem ===========\n"<<endl;
    cout<<"\tNumber of QUEEN : ";
    cin>>n;

    int **CB = new int*[n];
    for(int i=0; i<n; i++){
        CB[i] = new int[n];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            *(*(CB+i)+j)=0;
        }
    }

    if(n < 4)
        cout<<"\n\t   !!!!-- SORRY --!!!! \n\t Solution is not possible."<<endl;
    else
        solveQueen(n, 0, CB);

    for(int i=0; i<n; i++){
        delete CB[i];
    }
    delete CB;

    cout<<"\n\t ======== Thank you ========="<<endl;

    return 0;
}



