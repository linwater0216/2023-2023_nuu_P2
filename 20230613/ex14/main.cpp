#include "OvernightPackage.h"
#include "TwoDayPackage.h"

int main() {
    Package package("寄件人", "寄件人地址", "寄件人城市", "寄件人郵遞區號",
        "收件人", "收件人地址", "收件人城市", "收件人郵遞區號",
        50, 100);
    TwoDayPackage twoDayPackage("寄件人", "寄件人地址", "寄件人城市", "寄件人郵遞區號",
        "收件人", "收件人地址", "收件人城市", "收件人郵遞區號",
        10, 1, 100.0);
    OvernightPackage overnightPackage("寄件人", "寄件人地址", "寄件人城市", "寄件人郵遞區號",
        "收件人", "收件人地址", "收件人城市", "收件人郵遞區號",
        20, 2, 200);

    cout << "Package Cost: $" << package.calculateCost() << endl; // 輸出郵件價格
    cout << "Two-Day Package Cost: $" << twoDayPackage.calculateCosttwo() << endl; // 輸出兩天到貨郵件價格
    cout << "Overnight Package Cost: $" << overnightPackage.calculateCostover() << endl; // 輸出隔夜郵件價格

    return 0;
}