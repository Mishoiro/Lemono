#include <iostream>
#include <string>

using namespace std;

class Relic {
public:
    int relicImprovementType;
    int relicNumber;
    string relicName;
    string relicType;
    bool relicAvailability;
};
struct RelicItem {
public:
    float itemDropChance;
    string itemName;
    string itemType;
    int itemNumber;
};
class showInfo {
public:
    void relicInfo(Relic re) {
        cout << "Name relic: " + re.relicType + " " + re.relicName << endl;
        if (re.relicAvailability == true) {
            cout << "Numbers of relics: " << re.relicNumber << endl;
            cout << "Relics improvement type is: " << re.relicImprovementType << endl;
        }
        else {
            cout << "You haven`t such relics!" << endl;
        }
    }
    void itemInfo(RelicItem ri) {
        cout << "Name item: " + ri.itemName << endl;
        cout << "Type of item: " + ri.itemType << endl;
        cout << "Chance of drop this item: " << ri.itemDropChance << "%" << endl;
        cout << "Numbers of items: " << ri.itemNumber << endl;
    }
};
int main() {

    Relic re;
    re.relicType = "Axi";
    re.relicName = "R1";
    re.relicImprovementType = 4;
    re.relicAvailability = true;
    re.relicNumber = 3;

    RelicItem ri;
    ri.itemType = "Gold";
    ri.itemDropChance = 10;
    ri.itemName = "Blueprint: Rhino Prime";
    ri.itemNumber = 0;

    showInfo show;
    show.relicInfo(re);
    show.itemInfo(ri);
    return 0;
}

