#include <iostream>
using namespace std;
/*

A PART
int main(){
char   s2[50]="hey";
char s1[50]="hello";
int i=0;
while(s2[i]!='\0'){
i++;
}

int j=0;
while(s1[j]!='\0'){
s2[i]=s1[j];
i++;
j++;
}
s2[i]='\0';

cout<<s2<<endl;
return 0;
}


B PART
int main(){
char s1[50]="helloo";
int i=0;

while(s1[i]!='\0'){
i++;
}
int len=i-1;
int j=0;
while(j<=i/2){
char temp=s1[j];
s1[j]=s1[len];
s1[len]=temp;

j++;
len--;
}
cout<<s1;
}

C PART
int main(){
    char s[]="helloo";
    int j=0;
    while(s[j]!='\0'){
        j++;
    }
   
    int i=0;
    while(s[i]!='\0'){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            for(int k=i;k<j;k++){
                 s[k]=s[k+1];
            }
           
            j--;
           
        }
        else i++;
    }
    cout<<s;
}




*/
/*


D PART
int main(){
    char s[]="hello";
    char s1[50]="";
    int arr[50]={};
    int i=0;
    while(s[i]!='\0'){
        arr[i]=s[i];
        i++;
    }
    for(int j=0;j<i-1;j++){
        for(int k=0;k<i-j-1;k++){
            if(arr[k]>arr[k+1]){
                int temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
    for(int l=0;l<i;l++){
        s1[l]=(char)arr[l];
    }
    s1[i]='\0';
    cout<<s1;
   
}*/

// E PART
int main(){
    char s[]="hello";
    char s1[50]="";
    int arr[50]={};
   
    int i=0;
    while(s[i]!='\0'){
        arr[i]=s[i]-32;
        i++;
    }
    for(int l=0;l<i;l++){
        s1[l]=(char)arr[l];
    }
    s1[i]='\0';
    cout<<s1;
   
}