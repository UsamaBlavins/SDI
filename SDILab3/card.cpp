#ifndef SDI_CARD_CPP
#define SDI_CARD_CPP

#include <string>
#include <cassert>
#include <vector>

#include "card.h"


namespace SDI_REVIEW {
    
    const std::vector<std::string> Card::faceNames = {
        "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"
    };
    //this is the second task
    
    Card::Card(int cardNum) {
        assert(cardNum < 52);
        faceValue_ = cardNum % 13;
        suit_ = cardNum / 13;
    } // This should be left public since as deck.h uses the Card constructor
    
    std::string Card::toString() {
        std::string result;
        result = faceName(faceValue_);
        result += " of ";
        result += suitName(suit_);
        return result;
    }
    
    std::string Card::suitName(int suitNum) {
        const std::vector<std::string> suitNames = {
            "Hearts", "Clubs", "Diamonds", "Spades"
        };
        assert(suitNum < 4);
        return (suitNames[suitNum]);
    }
    
    std::string Card::faceName(int faceVal) {
        assert(faceVal < 13);
        return (Card::faceNames[faceVal]);
    }
    
}  //namespace
#endif
