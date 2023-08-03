#ifndef ROCK_H
#define ROCK_H

#include "Move.h"

class Rock : public Move {
public:
    std::string getName() const override { return "Rock"; }
    bool beats(const Move& move) const override;
};

#endif  // ROCK_H
