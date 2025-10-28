// Implementation file for AUList
#include <iostream>
#include "ASList.h"

#include "ASList.h"
#include <iostream>

ASList::ASList() {
    length = 0;
}

int ASList::GetSkillValue(const RaceStats& race, const std::string& key) {
    if (key == "smithing") return race.smithing;
    if (key == "heavyArmor") return race.heavyArmor;
    if (key == "block") return race.block;
    if (key == "twoHanded") return race.twoHanded;
    if (key == "oneHanded") return race.oneHanded;
    if (key == "archery") return race.archery;
    if (key == "lightArmor") return race.lightArmor;
    if (key == "sneak") return race.sneak;
    if (key == "lockpicking") return race.lockpicking;
    if (key == "pickpocket") return race.pickpocket;
    if (key == "speechcraft") return race.speechcraft;
    if (key == "alchemy") return race.alchemy;
    if (key == "illusion") return race.illusion;
    if (key == "conjuration") return race.conjuration;
    if (key == "destruction") return race.destruction;
    if (key == "restoration") return race.restoration;
    if (key == "alteration") return race.alteration;
    if (key == "enchanting") return race.enchanting;
    return -1; // fallback if key is invalid
}

// Insert item sorted by selected key (descending)
void ASList::InsertSorted(RaceStats item, const std::string& sortKey) {
    int i = length - 1;
    while (i >= 0 && GetSkillValue(data[i], sortKey) < GetSkillValue(item, sortKey)) {
        data[i + 1] = data[i];
        i--;
    }
    data[i + 1] = item;
    length++;
}

// Print list sorted by selected key
void ASList::PrintList(const std::string& sortKey) {
    for (int i = 0; i < length; i++) {
        std::cout << data[i].race << " - " << sortKey << ": " << GetSkillValue(data[i], sortKey) << std::endl;
    }
}

int ASList::GetSkillValue(const RaceStats& race, const std::string& key) {
    if (key == "smithing") return race.smithing;
    if (key == "heavyArmor") return race.heavyArmor;
    if (key == "block") return race.block;
    if (key == "twoHanded") return race.twoHanded;
    if (key == "oneHanded") return race.oneHanded;
    if (key == "archery") return race.archery;
    if (key == "lightArmor") return race.lightArmor;
    if (key == "sneak") return race.sneak;
    if (key == "lockpicking") return race.lockpicking;
    if (key == "pickpocket") return race.pickpocket;
    if (key == "speechcraft") return race.speechcraft;
    if (key == "alchemy") return race.alchemy;
    if (key == "illusion") return race.illusion;
    if (key == "conjuration") return race.conjuration;
    if (key == "destruction") return race.destruction;
    if (key == "restoration") return race.restoration;
    if (key == "alteration") return race.alteration;
    if (key == "enchanting") return race.enchanting;
    return -1; // fallback for invalid key
}

