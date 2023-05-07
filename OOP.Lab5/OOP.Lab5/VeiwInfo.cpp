#include"RelicsData.h"

namespace relicsFunction {
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
}