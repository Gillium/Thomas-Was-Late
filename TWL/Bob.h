#pragma once
#include "PlayableCharacter.h"

class Bob : public PlayableCharacter
{
public:
	// A constructor specific to Bob
	Bob(); // EDITTED, WAS Bob::Bob(); IN TEXTBOOK

	// The overridden input handler for Bob
	bool virtual handleInput();
};