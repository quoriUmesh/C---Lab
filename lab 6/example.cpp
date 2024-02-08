/*Overload the binary operator - to multiply the 2x2 matrix. Define a class Matrix with 2-D integer
type array with equal size 2. Initialize one object of Matrix M1 with predefined values. Initialize
another object of Matrix M2 with the user's values. Similarly, create another object M3 with 0
values to store the result. Now define an operator function to make the expression M3 = M1-M2
executable.*/

#include<iostream>

using namespace std;

class Matrix{
    int mat[2][2];

    public:
    Matrix(){
        for( int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                mat[i][j]=1;
            }
        }
    }
    
    Matrix(int a, int b, int c, int d){
        mat[0][0] = a;
        mat[0][1] = b;
        mat[1][0] = c;
        mat[1][1] = d;
    }

    Matrix operator - (Matrix &a){
        Matrix tempMat;

        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                 tempMat.mat[i][j]=0;
                for(int k=0; k<2; k++){
                    tempMat.mat[i][j] += mat[i][k]*a.mat[k][j];
                }
            }
        }

        return tempMat;
    }

   

    void display(){
        for(int i=0; i<2; i++){
            for(int j=0; j<2;j++){
                cout<<mat[i][j]<<"\t";
            }
            cout<<endl;
        }
        
    }

};

int main(){
    int a, b, c, d;
    cout<<"Enter the value for 2*2 matrix:"<<endl;
    cin>>a>>b>>c>>d;
    Matrix M1;
    Matrix M2(a,b,c,d);
    Matrix M3= M1-M2;
    M3.display();
}