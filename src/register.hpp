//
// This software is licensed under BSD0 (public domain).
// Therefore, this software belongs to humanity.
// See COPYING for more info.
//
#pragma once

#include "lex.hpp"

bool isRegister(TokenType reg);
bool isRegister8(TokenType reg);
bool isRegister16(TokenType reg);
bool isRegister32(TokenType reg);
bool isRegister64(TokenType reg);
bool isRegisterExt(TokenType reg);

