#include <iostream>
using namespace std;

int main(){
    
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
    int whichRow;
    int whichCol;
    cin>> whichRow <, whichCol;
    int sum_row=0; int sum_col=0;
    for(int j=0;j<3;j++){
        sum_row+=arr[whichRow][j];
    }
    for(int i=0;i<3;i++){
        sum_col+=arr[i][whichCol];
    }
    cout<<sum_row <<" "<< sum_col;
    
}