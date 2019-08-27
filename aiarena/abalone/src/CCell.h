#pragma once
#include <string>

namespace Abalone {

class CCell {

// static member variables
public:
static const char NONE = '.';
static const char WHITE = 'w';
static const char BLACK = 'b';

public:
char color;
CCell();
CCell(const char color);
~CCell();
bool isValidType(const char c);
CCell invertColor();
std::string toString();
};
}
