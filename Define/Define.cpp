#include<bits/stdc++.h>
// #define symbol string
#define SUNDAY 0
#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6
using namespace std;

int main() {
    int day = 0;

    for (int i=0 ; i<7 ; i++)
        if (i==SUNDAY)
            cout<<"Yayy!! Sunday"<<endl;
        else if(i==SATURDAY)
            cout<<"Yayy!! Saturday"<<endl;
        else
            cout<<"NAAH"<<endl;
}