//
// Created by JWang on 5/13/18.
//

#ifndef TICTACTOE_CHICKENRABBITCAGE_H
#define TICTACTOE_CHICKENRABBITCAGE_H

#include <iostream>

class ChickenRabbitCage {
    const int Ten_horse_cost = 100;
    const int Ten_pig_cost = 30;
    const int Ten_rabbit_cost = 5;

    int horses,
        pigs,
        rabbits;

    int total;

public:
    ChickenRabbitCage(int t)
    : total {t},
      horses {-1},
      pigs {-1},
      rabbits {-1}
    {
    }

    ~ChickenRabbitCage() {
    }

    void calculateNumbers();

    void solutions();

};


#endif //TICTACTOE_CHICKENRABBITCAGE_H
