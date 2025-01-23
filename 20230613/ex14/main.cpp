#include "OvernightPackage.h"
#include "TwoDayPackage.h"

int main() {
    Package package("�H��H", "�H��H�a�}", "�H��H����", "�H��H�l���ϸ�",
        "����H", "����H�a�}", "����H����", "����H�l���ϸ�",
        50, 100);
    TwoDayPackage twoDayPackage("�H��H", "�H��H�a�}", "�H��H����", "�H��H�l���ϸ�",
        "����H", "����H�a�}", "����H����", "����H�l���ϸ�",
        10, 1, 100.0);
    OvernightPackage overnightPackage("�H��H", "�H��H�a�}", "�H��H����", "�H��H�l���ϸ�",
        "����H", "����H�a�}", "����H����", "����H�l���ϸ�",
        20, 2, 200);

    cout << "Package Cost: $" << package.calculateCost() << endl; // ��X�l�����
    cout << "Two-Day Package Cost: $" << twoDayPackage.calculateCosttwo() << endl; // ��X��Ѩ�f�l�����
    cout << "Overnight Package Cost: $" << overnightPackage.calculateCostover() << endl; // ��X�j�]�l�����

    return 0;
}