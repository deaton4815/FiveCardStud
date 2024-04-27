#pragma once

#include <vector>

#include "Card.h"
#include "CardDeck.h"
#include "Hand.h"

class Dealer
{
public:

	void FiveCardStud();

private:
	
	CardDeck m_deck;
	Hand m_hand;

	void dealCards();

	std::vector<unsigned> getKeepers();
};

