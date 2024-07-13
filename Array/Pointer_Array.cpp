#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};

    int *ptr= arr;

    for(auto i = ptr ; i < &arr[9] ; i++)
        cout<<*i<<" ";
}