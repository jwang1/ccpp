//
// Created by JWang on 5/13/18.
//

#include "ChickenRabbitCage.h"

using namespace std;

void ChickenRabbitCage::calculateNumbers() {
    for (auto h = 1; h < total; ++h) {
        for (auto p = 1; p < total; ++p) {
            for (auto r = 1; r < total; ++r) {
                if (h + p + r == total) {
                    if (h * Ten_horse_cost + p * Ten_pig_cost + r * Ten_rabbit_cost == 10 * total) {
                        horses = h;
                        pigs = p;
                        rabbits = r;
                    }
                }
            }
        }
    }

    solutions();
}

void ChickenRabbitCage::solutions() {

    if (horses > 0) {
        cout << "Find solutions:  "  << horses << " horses, " << pigs << " pigs, " << rabbits << " rabbits "
             << " for " << total << " numbers and prices" << endl;
    } else {
        cout << "no solutions for " << total << " numbers and prices" << endl;
    }

}
