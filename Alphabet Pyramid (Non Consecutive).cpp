#include<iostream>

using namespace std;

int main(){

int i,j,n;
char ch = 'A';

cout<<"Enter total no. of Lines: ";
cin>>n;

for(i=1;i<n+1;i++){

    ch='A';

    for(j=0;j<i;j++){

        cout<<ch++<<" ";

    }


    cout<<endl;

}

}
