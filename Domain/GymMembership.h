#ifndef FACTORYMETHODEXAMPLE_GYMMEMBERSHIP_H
#define FACTORYMETHODEXAMPLE_GYMMEMBERSHIP_H
#include "IMembership.h"

namespace domain {

    class GymMembership: public IMembership {
      private:
        string _name = "Gym Membership\n";
        string _description = "Ordinary gym membership\n";
        int _price = 100;
        string _userInfo;

      public:
        explicit GymMembership(const string& userInfo);

        string GetName() override;

        string GetDescription() override;

        int GetPrice() override;

    };

}

#endif //FACTORYMETHODEXAMPLE_GYMMEMBERSHIP_H
