#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(string sName, string sAddress, string sCity, string sZip, string rName, string rAddress, string rCity, string rZip, int w, int cost, int additionalCost)
    : Package(sName, sAddress, sCity, sZip, rName, rAddress, rCity, rZip, w, cost),
    additionalCostPerOunce(additionalCost) {}

int OvernightPackage::calculateCostover() {
    return calculateCost() + (additionalCostPerOunce * weight); // 加上隔夜服務的費用
}