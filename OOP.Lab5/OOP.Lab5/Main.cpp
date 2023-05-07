#include"Relics.h"

int main() {
	relicInfo::Relic re;
	relicInfo::RelicItem ri;
 
	re.setRelicAvailability(true);
	ri.setItemDropChance(10);

    cout << "Name relic: " + re.relicType + " " + re.relicName << endl;
    if (true == re.getRelicAvailability()) {
        cout << "Numbers of relics: " << re.relicNumber << endl;
        cout << "Relics improvement type is: " << re.relicImprovementType << endl;
    }
    else {
        cout << "You haven`t such relics!" << endl;
    }
    cout << "Name item: " + ri.itemName << endl;
    cout << "Type of item: " + ri.itemType << endl;
    cout << "Chance of drop this item: " << ri.getItemDropChance() << "%" << endl;
    cout << "Numbers of items: " << ri.itemNumber << endl;
}