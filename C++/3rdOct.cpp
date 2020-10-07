#include<bits/stdc++.h>
using namespace std;
struct Date
{
    int year;
    int month;
    int day;
};

const int monthDays[12] = {31, 28, 31, 30, 31, 30,
                           31, 31, 30, 31, 30, 31
                          };

const string monthInThreeLetter[12] = {"Jan", "Feb", "Mar", "Apr", "May","Jun","Jul",
                                       "Aug","Sep","Oct","Nov","Dec"
                                      };

const string suffix[] = {"th ","st ","nd ","rd ","th ","th ","th ","th ","th ","th "};

int countLeapYears(Date date)
{
    int years = date.year;
    if (date.month <= 2)
        years--;

    return years / 4 - years / 100 + years / 400;
}

int getDifference(Date previousDate, Date currentDate)
{
    long int previousDayCount = previousDate.year*365 + previousDate.day;
    for (int i=0; i<previousDate.month - 1; i++)
        previousDayCount += monthDays[i];
    previousDayCount += countLeapYears(previousDate);

    long int currentDayCount = currentDate.year*365 + currentDate.day;
    for (int i=0; i<currentDate.month - 1; i++)
        currentDayCount += monthDays[i];
    currentDayCount += countLeapYears(currentDate);

    return (currentDayCount - previousDayCount);
}


int main()
{
    Date time;
    string city,dateVisited;
    vector<pair<string,Date> > v;
    while(cin>>city>>dateVisited)
    {
        int month;
        int day;
        int year;
        if (sscanf(dateVisited.c_str(), "%d/%d/%d", &day, &month, &year) != 3)
        {
            /// handle error
        }
        else
        {
            time.day = day;
            time.month = month;
            time.year = year;
            v.push_back({city,time});
        }
    }

    cout<<"Traveller itinerary in "<<v[0].second.year<<", he visited "<<v[0].first<<" on "<<v[0].second.day<<suffix[v[0].second.day%10]<< monthInThreeLetter[v[0].second.month-1]<<", ";

    for(int i=1; i<v.size(); i++)
    {
        int daysStayed = getDifference(v[i-1].second,v[i].second);
        if(daysStayed > 0)
        {
            if(daysStayed == 1)
                cout<<"Stayed for "<<daysStayed<<" day then left for "<<v[i].first<<" on "<<v[i].second.day<<suffix[v[i].second.day%10]<<monthInThreeLetter[v[i].second.month-1]<<". ";
            else
                cout<<"Stayed for "<<daysStayed<<" days then left for "<<v[i].first<<" on "<<v[i].second.day<<suffix[v[i].second.day%10]<<monthInThreeLetter[v[i].second.month-1]<<". ";
        }
        else
            cout<<"Didn't stay in "<<v[i-1].first<<" went directly to "<<v[i].first<<". ";
    }
    cout<<endl;
}
