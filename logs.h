#include <string>
#pragma once

namespace logs {
    //std::string dayList[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    //std::string monthList[12] = {"jan","feb","mar","apr","may","jun","jul","aug","Sep","Sept","Oct","Nov","Dec"};
    //Не работат (если понадобится)
 //------------------------------------------------------------------------------------------
    std::string start = 
    "Привет)\n"
    "Доступлые команды к вашим услугам\n";
//------------------------------------------------------------------------------------------
    std::string commands =
    "/start\n"          // стартовая комманда. Выводит стартовые слова
    "/getlinks\n"       // кидает полезные ссылки (в разработке)
    "/whataweek\n"      // отображает четность недели
    "/menue\n"        // говорит сегодняшнее меню (в разработке)
    ;
//------------------------------------------------------------------------------------------
    std::string links = 
    "Сайт колледжа: https://www.schnittke-mgim.ru/structure/musical-college/\n\n"
    "Расписания: http://schnittke-mgim.ru/education/timetable/\n\n"
    "Конспекты: https://drive.google.com/drive/folders/1bX2l6SKacMwgKfMbJ2yQP8_Q1IP4UYg1\n\n"
    "Ноты тромбона: https://disk.yandex.ru/d/bwWVd9qe3Mqqb7\n\n"
    ;
}
