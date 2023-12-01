#ifndef __SPACE_H__
#define __SPACE_H__

#include "observer.h"
#include <iostream>
#include <vector>

enum class Piece {Rook, Knight, Bishop, Pawn, King, Queen};

class Space: public Observer {
    std::vector<Observer*> observers;
    Piece pieceType;

    public:
};

#endif