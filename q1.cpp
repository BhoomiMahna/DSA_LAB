#include <iostream>
using namespace std;

const int capacity=5;

void push(int *arr,int x,int *top){
    if(*top==capacity-1){
        cout<<"stack overflow"<<endl;;
        return;
    }
    (*top)++;
    arr[*top]=x;
   
}
void pop(int *arr,int *top){
    if(*top==-1){
        cout<<"stack is empty"<<endl;
        return;
    }
    (*top)--;
}
bool isEmpty(int *top){
    if(*top==-1) return 1;
    return 0;
}
bool isFull(int *top){
    if(*top==capacity-1) return 1;
    return 0;
}
void display(int *arr,int *top){
    if(*top==-1){
        cout<<"stack is empty";
        return;
    }
    for(int i=*top;i>=0;i--){
        cout<<arr[i]<<endl;
    }
}
void peek(int *arr,int *top){
    if(*top==-1){
        cout<<"stack is empty";
        return;
    }
    cout<<"peek element is "<<arr[*top]<<endl;
}

int main() {
    // Write C++ code here
   // int capacity=5;
    int choice, value;
   
     int top=-1;
   
    int arr[5];
   
    while(true){
        cout<<"1 is push\n";
        cout<<"2 is pop\n";
        cout<<"3 is isfull\n";
        cout<<"4 is isempty\n";
        cout<<"5 is display\n";
        cout<<"6 is peek\n";
        //cout<<"3 is isempty\n";
        cout<<"enter number from menu\n";
        cin>>choice;
       
        switch(choice){
            case 1:
            cout<<"enter value ";
            cin>>value;
            push(arr,value, &top);
            break;
            case 2:
            pop(arr,&top);
            break;
            case 3:
            isFull(&top);
            break;
            case 4:
            isEmpty(&top);
            break;
            case 5:
            display(arr,&top);
            break;
            case 6:
            peek(arr,&top);
            break;
           
            defaut:
            cout<<"invalid";
           
           
        }
    }
   
   
   
    return 0;
}