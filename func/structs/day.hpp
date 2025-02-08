#include <iostream>
#include <iomanip>
#include <map>
#include <utility>

#pragma once

typedef std::pair<float, float> TimeRange;

struct Day {
    std::map<TimeRange, std::string> events;

    void addEvent(TimeRange time, const std::string& event) {
        if(time.first >= time.second){
            cout << "Неправильно указано время" << endl;
            return;
        }
        events[time] = event;
    }

    void removeEvent(const TimeRange& time) {
        events.erase(time);
    }

    void printEvents() const {
        for (const auto& [time, event] : events) {
            std::cout << std::fixed << std::setprecision(2)
                      << time.first << ", " << time.second << " - "
                      << event << "\n";
        }
    }
};

/*
int main() {
    Day d1;
    std::string eventName;
    TimeRange timeRange;

    std::cout << "Введите количество событий сегодня: ";
    int numEvents;
    std::cin >> numEvents;

    for (int i = 0; i < numEvents; ++i) {
        std::cout << "Введите название события: ";
        std::getline(std::cin >> std::ws, eventName); // Очистка буфера после ввода числа

        std::cout << "Введите время начала и конца события через пробел: ";
        std::cin >> timeRange.first >> timeRange.second;
        
        d1.addEvent(timeRange, eventName);
    }
    std::cout << "Сегодняшние события:\n";
    d1.printEvents();

    return 0;
}
*/
