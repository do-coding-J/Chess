#pragma once
#include <iostream>
#include <string>
#include <array>
#include "Piece.h"

using namespace std;

Piece::Piece(const std::string& name, const std::string& color, int posX, int posY):mName(name),mColor(color),mPosX(posX), mPosY(posY)
{
}

Piece::~Piece()
{
}

string& Piece::getMName(){
	return mName;
}