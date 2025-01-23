#ifndef OvernightPackage_H
#define OvernightPackage_H
#include "Package.h"

class OvernightPackage : public Package {
private:
    int additionalCostPerOunce; // 隔夜送貨服務每盎司的費率

public:
    OvernightPackage(string sName, string sAddress, string sCity, string sZip, string rName, string rAddress, string rCity, string rZip, int w, int cost, int additionalCost);
    int calculateCostover();
};
#endif
