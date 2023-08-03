#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player {
private:
    std::string name;
public:
    Human(std::string name) : name(name) {}
    Move* makeMove() override;
    std::string getName() const override { return name; }
};

#endif  // HUMAN_H
