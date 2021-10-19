#include <bits/stdc++.h>
using namespace std;

class Time
{
    int hour;
    int minutes;
    int seconds;

public:
    Time()
    {
        int hour = 0;
        int minutes = 0;
        int seconds = 0;
    }

    void setHour(int hour)
    {
        this->hour = hour;
    }

    void setMinutes(int minutes)
    {
        this->minutes = minutes;
    }

    void setSeconds(int seconds)
    {
        this->seconds = seconds;
    }

    Time add(Time &t2)
    {
        int h = hour + t2.hour;
        int m = minutes + t2.minutes;

        int s = seconds + t2.seconds;
        if (s > 60)
        {
            m += 1;
            s = s - 60;
        }
        if (m > 60)
        {
            h += 1;
            m = m - 60;
        }
        Time tNew;
        tNew.setHour(h);
        tNew.setMinutes(m);
        tNew.setSeconds(s);
        return tNew;
    }

    Time subtract(Time &t2)
    {
        int h = hour - t2.hour;
        int m = minutes - t2.minutes;

        int s = seconds - t2.seconds;
        if(h>0)
        {
        if (s < 0)
        {
            m -= 1;
            s = s + 60;
        }
        if (m < 0)
        {
            h -= 1;
            m = m + 60;
        }
        }
        
        Time tNew;
        tNew.setHour(h);
        tNew.setMinutes(m);
        tNew.setSeconds(s);
        return tNew;
    }

    void print()
    {
        cout << hour << " : " << minutes << " : " << seconds << endl;
    }
};
