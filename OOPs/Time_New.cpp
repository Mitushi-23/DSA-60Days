#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
public:
    int hour;
    int minute;
    int second;

    Time(int h = 0, int m = 0, int s = 0)
    {
        hour = h;
        minute = m;
        second = s;
    }

    void setTime(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }

    void showTime()
    {
        cout << setw(2) << setfill('0') << hour << ":"
             << setw(2) << setfill('0') << minute << ":"
             << setw(2) << setfill('0') << second << "\n";
    }

    Time addTime(Time a, Time b)
    {
        Time tf; //object created with default value
        int totals = (a.hour + b.hour) * 3600 + (a.minute + b.minute) * 60 + a.second + b.second;
        int hf = totals / 3600;
        totals %= 3600;
        int mf = totals / 60;
        totals %= 60;
        int sf = totals;
        tf.hour = hf;
        tf.minute = mf;
        tf.second = sf;
        return tf;
    }
    Time subtractTime(Time a, Time b)
    {
        Time tf; //object created with default value
        int totals = (a.hour - b.hour) * 3600 + (a.minute - b.minute) * 60 + a.second - b.second;
        int hf = totals / 3600;
        totals %= 3600;
        int mf = totals / 60;
        totals %= 60;
        int sf = totals;
        tf.hour = hf;
        tf.minute = mf;
        tf.second = sf;
        return tf;
    }
};
int main()
{
    cout << "time 1\t:";
    Time t1(3, 34, 54);
    t1.showTime(); // 10:50:59
    cout << "time 2\t:";
    Time t2(4, 24, 35);
    t2.showTime(); // 06:33:33
    cout << "sum\t:";
    t1.addTime(t1, t2).showTime();
    cout << "diff\t:";
    t1.subtractTime(t2, t1).showTime();

    return 0;
}
