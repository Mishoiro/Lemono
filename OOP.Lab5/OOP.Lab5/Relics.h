#pragma once
#include<iostream>
#include<string>

using namespace std;

namespace relicInfo {
    enum Relics  {
        Lit,
        Mezo,
        Neo,
        Axi,
    };

    struct Relic {
    private:
        bool relicAvailability;
    public:
        static int relicImprovementType;
        static int relicNumber;
        const string relicName = "R1";
        const string relicType = "Axi";

        void setRelicAvailability(bool RA) {
            relicAvailability = RA;
        }
        bool getRelicAvailability() {
            return relicAvailability;
        }
    };

    class RelicItem {
    private:
        float itemDropChance;
    public:
        const string itemName = "Blueprint: Rhino Prime";
        const string itemType = "Gold";
        static int itemNumber;

        void setItemDropChance(float IDP) {
            itemDropChance = IDP;
        }
        float getItemDropChance() {
            return itemDropChance;
        }
    };
}