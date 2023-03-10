#ifndef QUESTANSWER_H
#define QUESTANSWER_H

#include <iostream>

using namespace std;


class QuestAnswer{
    string quest_answer;
    bool answered;

    public:
        QuestAnswer();
        QuestAnswer(string quest_answer);
        string getQuestAnswer();
        void setQuestAnswer(string quest_answer);
        bool getAnswered();
        void setAnswered(bool answered);     
};

#endif