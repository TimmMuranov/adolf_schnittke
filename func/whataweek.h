#include <iostream>
#include <string>
#include <ctime>

#pragma once

#define FIRST_DAY  33 // Первый день учебы в к-ве дней от нового года
#define FIRST_WEEK_PARITY 0 // Четность первой недели. 1 - четная, 0 - нечетная

using namespace std;

string whataweek(){
    bool parityFlag = FIRST_WEEK_PARITY;
    time_t t = time(NULL);
    tm* timeinfo = localtime(&t);
    int today = timeinfo->tm_yday;

    if(((today - FIRST_DAY) / 7 ) % 2){
        return "Сейчас ЧЕТНАЯ неделя.";
    }
    return "Сейчас ЧЕТНАЯ неделя.";
}