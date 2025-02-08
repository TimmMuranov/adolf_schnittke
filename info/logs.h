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
    "/getlinks\n"       // кидает полезные ссылки
    "/whataweek\n"      // отображает четность недели
    "/menue\n"        // говорит сегодняшнее меню (в разработке)
    ;
//------------------------------------------------------------------------------------------
    std::string links = 
    "Сайт колледжа: https://www.schnittke-mgim.ru/structure/musical-college/\n"
    "Расписания: http://schnittke-mgim.ru/education/timetable/\n"
    "Чего-то не хватает? Отправьте запрос в https://github.com/TimmMuranov/adolf_schnittke/issues/new/"
    ;
}
