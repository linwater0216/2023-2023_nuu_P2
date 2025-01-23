#ifndef Package_H
#define Package_H
#include <string>
#include <iostream>
using namespace std;

class Package {
protected:
    string senderName; // �H��H�m�W
    string senderAddress; // �H��H�a�}
    string senderCity; // �H��H����
    string senderZip; // �H��H�l���ϸ�
    string recipientName; // ����H�m�W
    string recipientAddress; // ����H�a�}
    string recipientCity; // ����H����
    string recipientZip; // ����H�l���ϸ�
    int weight; // ���q�]�s�q�^
    int costPerOunce; // �C�s�q�f������

public:
    Package(string sName, string sAddress, string sCity, string sZip, string rName, string rAddress, string rCity, string rZip, int w, int cost);
    void setWeight(double w);
    void setCostPerOunce(double cost);
    int calculateCost();
};

#endif
