#include <stdio.h>
#include "Date.h"

typedef struct {
    int year;
    int month;
    int day;
} Date;

typedef struct {
    char* title
    

void date_printUS(Date d);
char* date_month
void date_printUSText(Date d);

void date_printUS(Date d) {
    printf("%d/%d/%d", d.month, d.day, d.year);
}

char* monthName(int month) {
    char* name[12] = {"January", "February", "March", "April"}
    if (month >= 1 && month <= 12)
         return name[month - 1];
    else
        return "unknown";
    
}

void printAppointName(Appointment* appt) {
    printf("%d:%02d\n", (*appt).start_time.hour, appt->start_time.minute);
}


void date_printUSText(Date d) {
    printf("%s %d, %d", monthName(d.month), d.date, d.year);
}

int main() {
    Appointment doctor = {"doctor", {2020, 7 ,31}, {10, 30, "am"}}
    Date today = {2020, 7, 28};
    printUSDate(today);
    fputsc("\n", stdout);
    printUSTextDate(doctor.today);
    fputsc("\n", stdout);

    return 0;
}


