#include <stdio.h>

int hours_calculated(int seconds);
int minutes_calculated(int seconds);
int seconds_calculated(int seconds);

int main(void)
{
    int seconds;

    printf("Enter the amount of seconds: ");

    scanf("%i", &seconds);
    printf(" %i seconds are equal to: \n", seconds);

    int hours_ammount = (hours_calculated(seconds));
    seconds = seconds - (hours_ammount * 3600);

    int minutes_ammount = (minutes_calculated(seconds));
    seconds = seconds - (minutes_ammount * 60);

    int seconds_ammount = (seconds_calculated(seconds));
    seconds = seconds - (seconds_ammount * 1);

    printf(" Hours: %i\n Minutes: %i\n Seconds: %i\n", hours_ammount, minutes_ammount, seconds_ammount);
    int hour = 3600;
    int minute = 60;
    int second = 1;
}

int hours_calculated(int seconds)
{
    int hours_ammount = 0;
    while (seconds >= 3600)
    {
        seconds = seconds - 3600;
        hours_ammount++;
    }
    return hours_ammount;
}

int minutes_calculated(int seconds)
{
    int minutes_ammount = 0;
    while (seconds >= 60)
    {
        seconds = seconds - 60;
        minutes_ammount++;
    }
    return minutes_ammount;
}

int seconds_calculated(int seconds)
{
    int seconds_ammount = 0;
    while (seconds >= 1)
    {
        seconds = seconds - 1;
        seconds_ammount++;
    }
    return seconds_ammount;
}
// 18550 seconds is equal to 5 hours, 9 minutes, and 10 seconds

