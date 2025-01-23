#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(string sName, string sAddress, string sCity, string sZip, string rName, string rAddress, string rCity, string rZip, int w, int cost, int fee)
    : Package(sName, sAddress, sCity, sZip, rName, rAddress, rCity, rZip, w, cost), flatFee(fee) {}

int TwoDayPackage::calculateCosttwo() {
    return calculateCost() + flatFee; // 加上固定費率
}