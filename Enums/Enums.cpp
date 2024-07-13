#include <bits/stdc++.h>
using namespace std;
enum Weekdays {
    Sun,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat
};

Weekdays operator+(Weekdays day , int days) {
    return static_cast<Weekdays>((static_cast<int>(day)+days)%7);
}

ostream& operator<<(ostream &strm , Weekdays day) {
    if(day==0)
        strm<<"Sunday";
    else if(day==1)
            strm<<"Monday";
    else if(day==2)
        strm<<"Tuesday";
    else if(day==3)
        strm<<"Wednesday";
    else if(day==4)
        strm<<"Thursday";
    else if(day==5)
        strm<<"Friday";
    else if(day==6)
        strm<<"Saturday";
    else
        strm<<"Somewhere Inside the depths of time";
    return strm;
}
int main() {
    cout<<Sun<<endl;
    cout<<Fri<<endl;
    int day = Wed;
    cout<<day<<endl;
    auto newday = static_cast<Weekdays>(25);
    cout<<newday<<endl;

    newday=newday+1;
    cout<<newday<<endl;

}