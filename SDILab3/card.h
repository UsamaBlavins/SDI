#ifndef SDI_CARD_H
#define SDI_CARD_H

#include <string>

namespace SDI_REVIEW {
	class Card {
		// data members
        
	private:
		int suit_;
		int faceValue_;
		//interface functions
        
	public:
        Card ();
		Card(int cardNum);			//Constructor (parameterised)
		std::string toString();
		//private functions
        
	private:
		std::string suitName(int suitNum);
        std::string faceName(int faceVal);
        static const std::vector<std::string> faceNames;
        static const std::vector<std::string> suitNames;
    };
}  //namespace
#endif
