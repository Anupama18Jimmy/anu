#include<bits/stdc++.h>
using namespace std;
int FindDiff(int a,int b){
    int v=a^b,i=1;
    while(v!=0){
        if(v&1) return i;
        v=v>>1;
        i++;
    }
    return -1;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<FindDiff(a,b);
}