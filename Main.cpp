#include "CardDeck.h"
#include "Card.h"
#include "Hand.h"

using namespace std;

int main() {

	CardDeck deck;
	

	/*
	char suit;
	unsigned rank;
	for (auto card{ cbegin(handCards) }; card != cend(handCards); ++card) {

		suit = card->getSuit();
		rank = card->getRank();

		cout << suit << rank << endl;

	}
	*/

	Hand myHand;
	vector<Card> dealtCards = deck.getCards(myHand.getHandSize());
	deck.printDeck();
	myHand.newHand(dealtCards);

	vector<unsigned> keeps{ 1,3 };
	myHand.setDiscards(keeps);
	vector<Card> replacements = deck.getCards(myHand.getDiscardCount());
	myHand.replaceDiscards(replacements);

	vector<Card> playedCards = myHand.getAllCards();
	myHand.resetHand();

	deck.addCards(playedCards);
	deck.printDeck();

	

	vector<Card> newCards = deck.getCards(myHand.getHandSize());
	myHand.newHand(newCards);
	vector<unsigned> newKeeps{ 0 };
	myHand.setDiscards(newKeeps);
	vector<Card> newReplacement = deck.getCards(myHand.getDiscardCount());
	myHand.replaceDiscards(newReplacement);
	myHand.resetHand();


	deck.printDeck();

}