#include "Rock.h"
#include "Scissors.h"

bool Rock::beats(const Move& move) const {
    return move.getName() == "Scissors";
}
