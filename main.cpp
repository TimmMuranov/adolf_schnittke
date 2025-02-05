/* 
g++ main.cpp -o bin/main --std=c++14 -I/usr/local/include -lTgBot -lboost_system -lssl -lcrypto -lpthread 
*/
/*если возникла ошибка при отправке комита без имени - "git pull --no-rebase" в консоль*/
#include <stdio.h>
#include <tgbot/tgbot.h>

#include "info/logs.h"
#include "func/headers.h"

int main() {
    TgBot::Bot bot("7923105858:AAFPCA1cc1sacxBdUpfQP1aeWI-Rv_mTdFg");

    std::vector<TgBot::Message> mesHis; // должен быть список команд

//-------------------------- обработчики команд -----------------------------------
    bot.getEvents().onCommand("start", [&bot](TgBot::Message::Ptr message) {
        bot.getApi().sendMessage(message->chat->id, logs::start + logs::commands);
    });
    bot.getEvents().onCommand("whataweek", [&bot](TgBot::Message::Ptr message) {
        bot.getApi().sendMessage(message->chat->id, whataweek());
    });
    bot.getEvents().onCommand("delete", [&bot](TgBot::Message::Ptr message) {
        //bot.getApi().deleteMessage(message->chat->id, mesHis);
    });
//-------------------------- обработчик сообщений ---------------------------------
    bot.getEvents().onAnyMessage([&bot](TgBot::Message::Ptr message) {
        printf("User wrote %s\n", message->text.c_str());
        if (StringTools::startsWith(message->text, "/start")) {
            return;
        }
        //bot.getApi().sendMessage(message->chat->id, "Your message is: " + message->text);
    });
//-----------------------------      старт      -----------------------------------
    try {
        printf("Bot username: %s\n", bot.getApi().getMe()->username.c_str());
        TgBot::TgLongPoll longPoll(bot);
        while (true) {
            printf("Long poll started\n");
            longPoll.start();
        }
    } catch (TgBot::TgException& e) {
        printf("error: %s\n", e.what());
    }
    return 0;
}
