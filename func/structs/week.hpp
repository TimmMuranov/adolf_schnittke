#include "day.hpp"

struct Week:Day {
    public:
        day week[7];
        void addEvents(){
            cout 
            << 
            "Введите ивенты в формате 'день&время-время1&ивент&&день2&время3-время4&ивент'"
            << 
            endl;
            std::string eventList;
            cin >> eventList;
        }
    private:
}