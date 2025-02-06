#include <iostream>
#include <string>
#include <ctime>

const int FIRST_DAY = 33; // Первый день учебы в количестве дней от нового года
const int FIRST_WEEK_PARITY = 0; // Четность первой недели в семестре. 1 - четная, 0 - нечетная

std::string whataweek() {
    bool parityFlag = FIRST_WEEK_PARITY;
    
    time_t t = time(nullptr);
    struct tm* timeinfo = localtime(&t);
    int today = timeinfo->tm_yday;

    int weekNumber = (today - FIRST_DAY + 6) / 7;
    if (weekNumber % 2 == 0) {
        parityFlag = !parityFlag;
    }
    
    return parityFlag ? 
       "Сейчас четная неделя." 
       : //или
       "Сейчас нечетная неделя.";
}

/*
int main() {
    std::cout << whatAWeek() << std::endl;
    return 0;
}
*/
