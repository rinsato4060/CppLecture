#include "scoreboard.h"

ScoreBoard::ScoreBoard(std::string user_name, int japanese_score, int math_score, int english_score):
    name(user_name), japanese(japanese_score), math(math_score), english(english_score), average((japanese_score + math_score + english_score)/3.0) {}

void ScoreBoard::Print() {
    std::cout << name << "\n";
    std::cout << japanese << "\t";
    std::cout << math << "\t";
    std::cout << english << "\n";
    std::cout << "Average: " << average << "\n";
}