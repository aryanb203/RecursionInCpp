#include<iostream>
using namespace std;
int count=0;
void TOH(int n, int A, int B, int C){
    if(n>0){
        TOH(n-1, A, C, B);
        //cout<<"from "<<A<<" to "<<C<<endl;
        count++;
        TOH(n-1, B, A, C);
    }
}

int main()
{   int n=16;
    TOH(n,1,2,3);
    cout<<count;
    return 0;
}
