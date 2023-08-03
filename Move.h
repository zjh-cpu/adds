#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move {
public:
    virtual ~Move() {}
    virtual std::string getName() const = 0;
    virtual bool beats(const Move& move) const = 0;
};

#endif  // MOVE_H
