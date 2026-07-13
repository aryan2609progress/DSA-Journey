class Solution {
public:
    bool leap(int year)
    {
        return (year % 400 == 0) ||
               (year % 4 == 0 && year % 100 != 0);
    }

    int totalDays(string date)
    {
        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));

        int monthDays[] =
        {31,28,31,30,31,30,31,31,30,31,30,31};

        int days = 0;

        // Previous years
        for(int y = 1971; y < year; y++)
        {
            days += leap(y) ? 366 : 365;
        }

        // Previous months
        for(int m = 0; m < month - 1; m++)
        {
            days += monthDays[m];
        }

        // Leap day
        if(month > 2 && leap(year))
            days++;

        // Current month
        days += day;

        return days;
    }

    int daysBetweenDates(string date1, string date2)
    {
        return abs(totalDays(date1) - totalDays(date2));
    }
};