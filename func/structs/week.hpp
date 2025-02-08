#include "day.hpp"
#include <stdlib.h>

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
            int cond_flag = 0;
            int marker_cord = 0;
            for(int x=0; x<eventList.length(); ++x){
                if(eventList[x] == '&'){
                    if(eventList[x+1] == '&'){
                        cond_flag = 0;
                        x += 2;
                    } else {
                        string day = eventList.substr(marker_cord, x);
                        int day = atoi(day.c_str());
                        //дописать, я задрался уже....
                    }
                }
            }
        }
    private:
}