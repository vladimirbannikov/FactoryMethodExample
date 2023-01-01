#ifndef FACTORYMETHODEXAMPLE_GYMANDPOOLMEMBERSHIP_H
#define FACTORYMETHODEXAMPLE_GYMANDPOOLMEMBERSHIP_H

#include "IMembership.h"

namespace domain {

class GymAndPoolMembership:public domain::IMembership {
    private:
        string _name = "Gym and pool Membership\n";
        string _description = "Gym membership and Swimming pool option\n";
        string _userInfo;
        int _price = 200;

    public:
        explicit GymAndPoolMembership(const string& userInfo);

        string GetName() override;

        string GetDescription() override;

        int GetPrice() override;

    };

}

#endif //FACTORYMETHODEXAMPLE_GYMANDPOOLMEMBERSHIP_H
