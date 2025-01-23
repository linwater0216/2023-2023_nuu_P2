#include "Package.h"

Package::Package(string sName, string sAddress, string sCity, string sZip, string rName, string rAddress, string rCity, string rZip, int w, int cost)
    : senderName(sName), senderAddress(sAddress), senderCity(sCity), senderZip(sZip),
    recipientName(rName), recipientAddress(rAddress), recipientCity(rCity), recipientZip(rZip) {
    setWeight(w);
    setCostPerOunce(cost);
}

void Package::setWeight(double w) {
    if (w > 0) {
        weight = w;
    }
    else {
        cout << "Invalid weight. Weight set to 0." << endl;
        weight = 0;
    }
}

void Package::setCostPerOunce(double cost) {
    if (cost > 0) {
        costPerOunce = cost;
    }
    else {
        cout << "Invalid cost per ounce. Cost set to 0." << endl;
        costPerOunce = 0;
    }
}

int Package::calculateCost() {
    return weight * costPerOunce; // 計算郵件的價錢
}