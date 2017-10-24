
#ifndef SDI_HAND_H
#define SDI_HAND_H

#include "card.h"

namespace SDI_REVIEW {
    class Hand {
    private:
        static const int num = 5;
        Card playerHand[num];
    public:
        Hand();
    }
}

#endif /* hand_h */
