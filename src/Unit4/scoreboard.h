#include <iostream>
#include <string>

class ScoreBoard {
    private:
        std::string name;
        int japanese;
        int math;
        int english;
        double average;
    public:
        ScoreBoard(std::string user_name, int japanese_score, int math_score, int english_score);
            
        void Print();
    };