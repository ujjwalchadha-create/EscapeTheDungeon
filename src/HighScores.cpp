#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class HighScores {
public:
    void addScore(const std::string& name, int score) {
        scores.push_back({name, score});
        sortScores();
    }

    void displayScores() const {
        std::cout << "High Scores:\n";
        for (const auto& entry : scores) {
            std::cout << entry.first << ": " << entry.second << "\n";
        }
    }

private:
    std::vector<std::pair<std::string, int>> scores;

    void sortScores() {
        std::sort(scores.begin(), scores.end(), [](auto& a, auto& b) {
            return b.second < a.second; // Sort in descending order
        });
    }
};
