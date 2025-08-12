#include <iostream>
#include <vector>
using namespace std;

int main(){
	int arr[10]={3,3,3,2,1,6,7,5,5,9};
	
	int size=10;
	
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]==arr[j]){
				for(int k=i;k<size;k++){
						arr[k]=arr[k+1];
				}
				
				
				j--;
				size--;
			}
		}
	}
	
	
	for(int i=0;i<size;i++){
		cout<< endl<< arr[i] << " ";
	}
	