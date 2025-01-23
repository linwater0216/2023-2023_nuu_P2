#ifndef OvernightPackage_H
#define OvernightPackage_H
#include "Package.h"

class OvernightPackage : public Package {
private:
    int additionalCostPerOunce; // �j�]�e�f�A�ȨC�s�q���O�v

public:
    OvernightPackage(string sName, string sAddress, string sCity, string sZip, string rName, string rAddress, string rCity, string rZip, int w, int cost, int additionalCost);
    int calculateCostover();
};
#endif
