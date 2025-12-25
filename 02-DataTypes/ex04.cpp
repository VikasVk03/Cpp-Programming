/*
WAP that asks uer to enter the number of seconds as an integer value(use type long, or long long) and that displays the equivalent time in days, hours, minutes and seconds.

user input: number of seconds

sample output:
Enter the number of seconds: 31600000
31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds

conversion:
1) seconds to number of days
    userInputSeconds / SecondsInOneDay = give no. of days
        31600000 / 86400 = 365 days (seconds in one day = 24 * 60 * 60)
    userInputSeconds % SecondsInOneDay = remaining hours, minutes and seconds
        31600000 % 86400 = 64000
2) remaining seconds to number of hours
    remainingSeconds / SecondsInONeHour = give no. of hours
        64000 / 3600 = 17 hrs (seconds in hrs = 60 * 60)
    remainingSeconds % SecondsInOneHour = remaining minutes and seconds
        64000 % 3600 = 2800

3) remaining seconds to number of minute
    remainSeconds / SecondsInOneMinute = give no. of minutes
        2800 / 60 = 46 min (seconds in min = 60)
    remainSeconds % SecondsInOneMinute = remaining final seconds
        2800 % 60 = 40

*/

#include <iostream>

int main()
{
    using namespace std;

    const int SEC_IN_MIN = 60;
    const int SEC_IN_HRS = 3600;  // 60 * 60
    const int SEC_IN_DAY = 86400; // 60 * 60 * 24

    long long Totalseconds;

    cout << "Enter the number of seconds: ";
    cin >> Totalseconds;

    int No_Of_Day = Totalseconds / SEC_IN_DAY;
    int remaining_sec_after_day = Totalseconds % SEC_IN_DAY;

    int No_of_Hrs = remaining_sec_after_day / SEC_IN_HRS;
    int remaining_sec_after_hrs = remaining_sec_after_day % SEC_IN_HRS;

    int No_of_Min = remaining_sec_after_hrs / SEC_IN_MIN;
    int final_sec_after_min = remaining_sec_after_hrs % SEC_IN_MIN;

    cout << Totalseconds << " Seconds = " << No_Of_Day << " Days " << No_of_Hrs << " Hrs " << No_of_Min << " Min " << final_sec_after_min << " seconds" << endl;

    // cout << 31600000 / (60 * 60 * 24) << endl;
    // cout << 31600000 % (60 * 60 * 24) << endl;
    // cout << 64000 / (60 * 60) << endl;
    // cout << 64000 % (60 * 60) << endl;
    // cout << 2800 / 60 << endl;
    // cout << 2800 % 60 << endl;

    return 0;
}
