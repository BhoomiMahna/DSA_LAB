#include <iostream>
using namespace std;

int arr[5]={3,4,2,1,6};
	int brr[5];
	int i=0;
	
	while(i!=5){
		for(int j=4;j>=0;j--){
			brr[j]=arr[i];
			i++;
		}
		
	}
	
	for(int i=0;i<5;i++){
		cout<< brr[i]<< endl;

	}
    
    
    
    /* Q4 B PART

int arr[3][3]= {1,2,3,4,5,6,7,8,9};
	int brr[3][3]={1,2,3,4,5,6,7,8,9};
	
	
	int crr[3][3]={0};
	
	for(int k=0;k<3;k++){
		for(int i=0;i<3;i++){
		crr[k][i]=0;
			for(int j=0;j<3;j++){
				crr[k][i]+=arr[k][j]*brr[j][i];
			}
		}
	}

	
	for(int k=0;k<3;k++){
		for(int i=0;i<3;i++){
			cout<< crr[k][i] << " "<< endl;
		}
}
        */





/* Q4 C PART
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};


for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		if(i<j){
			int temp =arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]= temp;
		}
	}
}
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	  cout<< arr[i][j] << endl;
}}
*/

}