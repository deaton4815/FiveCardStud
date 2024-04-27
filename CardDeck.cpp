#include "CardDeck.h"

CardDeck::CardDeck() {
	initializeDeck();
}

void CardDeck::shuffleDeck() {
	m_deck = m_shuffler.shuffleCards(m_deck);
}

void CardDeck::initializeDeck() {

	const size_t cardCountTotal{ m_suits.size() * m_ranks.size() };
	m_deck.reserve(cardCountTotal);

	unsigned int cardCount{ 0 };
	for (auto suit{ cbegin(m_suits) }; suit != cend(m_suits); ++suit) {
		for (auto rank{ cbegin(m_ranks) }; rank != cend(m_ranks); ++rank) {
			m_deck.push_back(newCard(*suit, *rank));
		}
	}
}

Card CardDeck::newCard(char suit, unsigned int rank) const {
	Card card(suit, rank);
	return card;
}


void CardDeck::printDeck() {
	std::vector<Card>tempDeck{ m_deck };

	char suit;
	unsigned rank;
	for (auto card{ cbegin(m_deck) }; card != cend(m_deck); ++card) {

		suit = card->getSuit();
		rank = card->getRank();

		std::cout << suit << rank << std::endl;

	}
	std::cout << "------------------------------------------------------------------" << std::endl;
}