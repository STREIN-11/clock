#include<bits/stdc++.h>
using namespace std;
int main(){
    int sec_prev=0;
    while(1)
    {
        int seconds, minutes, hours;
        string str;
        time_t total_seconds=time(0);
        struct tm* ct=localtime(
            &total_seconds);
        seconds=ct->tm_sec;
        minutes=ct->tm_min;
        hours=ct->tm_hour;
        if(hours>=12)
         str="PM";
        else
         str="AM";
        hours=hours>12?hours-
        12:hours;
        if(seconds==sec_prev+1 ||
        (sec_prev==59 && seconds==0))
        {
            system("CLS");
            cout<<(hours<10?"0":"")<<
            hours<<":"<<
            (minutes<10?"0":"")<<minutes<<
            ":"<<(seconds<10?"0":"")<<
            seconds<< " "<<str<<endl;
        }
            sec_prev=seconds;
        }
        return 0;
    }