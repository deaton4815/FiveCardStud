#include "Dealer.h"

using namespace std;

void Dealer::FiveCardStud() {

	dealCards();
	vector <unsigned> keepers = getKeepers();
	m_hand.setDiscards(keepers);

}

void Dealer::dealCards() {
	vector<Card> dealt = m_deck.getCards(m_hand.getHandSize());
	m_hand.newHand(dealt);
}

// TO BE REPLACED
vector<unsigned> Dealer::getKeepers() {
	vector<unsigned> keepers{ 1,3 };
	return keepers;
}