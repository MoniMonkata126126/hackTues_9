#include <iostream>
#include "quest_class.hpp"

using namespace std;


QuestAnswer::QuestAnswer(){
    this->quest_answer = "No answer input!";
    this->answered = false;
}

QuestAnswer::QuestAnswer(string quest_answer){
    this->quest_answer = quest_answer;
    this->answered = false;
}

string QuestAnswer::getQuestAnswer(){
    return quest_answer;
}

void QuestAnswer::setQuestAnswer(string quest_answer){
    this->quest_answer = quest_answer;
}

bool QuestAnswer::getAnswered(){
    return answered;
}

void QuestAnswer::setAnswered(bool answered){
    this->answered = answered;
}     