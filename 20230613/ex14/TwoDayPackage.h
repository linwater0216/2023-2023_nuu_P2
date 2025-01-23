#ifndef TwoDayPackage_H
#define TwoDayPackage_H
#include "Package.h"

class TwoDayPackage : public Package {
private:
    int flatFee; // 兩天到貨郵件服務的固定費率

public:
    TwoDayPackage(string sName, string sAddress, string sCity, string sZip, string rName, string rAddress, string rCity, string rZip, int w, int cost, int fee);
    int calculateCosttwo();
};
#endif
