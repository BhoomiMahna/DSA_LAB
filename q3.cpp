A PART 
#include <iostream>
using namespace std;
void findMissingLinear(int arr[],int size) {
    for (int i=0;i<size;i++) {
        if(arr[i]!=i+1){
            cout<<"Element Missing is "<<i+1;
            return;
        }
    }
    cout<<"All Elements present";
}

int main() {
    int arr[7]={1,2,3,5,6,7,8};
    findMissingLinear(arr,7);
    return 0;
}



B PART
#include <iostream>
using namespace std;
void findMissingBinary(int arr[],int size){
    int s=0,e=size-1;
    while(s<=e) {
        int mid=s+(e-s)/2;
        if (arr[mid]==mid+1){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    cout<<"Element Missing "<<s+1;
}

int main() {
    int arr[7]={1,2,3,5,6,7,8};
    findMissingBinary(arr,7);
    return 0;
}