#ifndef Package_H
#define Package_H
#include <string>
#include <iostream>
using namespace std;

class Package {
protected:
    string senderName; // 寄件人姓名
    string senderAddress; // 寄件人地址
    string senderCity; // 寄件人城市
    string senderZip; // 寄件人郵遞區號
    string recipientName; // 收件人姓名
    string recipientAddress; // 收件人地址
    string recipientCity; // 收件人城市
    string recipientZip; // 收件人郵遞區號
    int weight; // 重量（盎司）
    int costPerOunce; // 每盎司貨物價格

public:
    Package(string sName, string sAddress, string sCity, string sZip, string rName, string rAddress, string rCity, string rZip, int w, int cost);
    void setWeight(double w);
    void setCostPerOunce(double cost);
    int calculateCost();
};

#endif
