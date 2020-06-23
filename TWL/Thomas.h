#pragma once
#include "PlayableCharacter.h"

class Thomas : public PlayableCharacter
{
public:
	// A constructor specific to Thomas
	Thomas(); // EDITTED WAS Thomas::Thomas(); IN BOOK

	// The overridden input handler for Thomas
	bool virtual handleInput();
};