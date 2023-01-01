#ifndef FACTORYMETHODEXAMPLE_PROMEMBERSHIP_H
#define FACTORYMETHODEXAMPLE_PROMEMBERSHIP_H
#include "IMembership.h"

namespace domain {

    class ProMembership:public IMembership {
    private:
        string _name = "Pro Membership\n";
        string _description = "Pro gym membership with personal trainer"
                              " and Swimming pool option\n";
        int _price = 500;
        string _userInfo;
        string _trainerInfo;

    public:
        explicit ProMembership(const string& userInfo);

        string GetName() override;

        string GetDescription() override;

        int GetPrice() override;

        string LookForTrainers();

    };

}

#endif //FACTORYMETHODEXAMPLE_PROMEMBERSHIP_H
