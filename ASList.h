#ifndef ASLIST_H
#define ASLIST_H

#include <string>

struct RaceStats {
    std::string race;
    int smithing;
    int heavyArmor;
    int block;
    int twoHanded;
    int oneHanded;
    int archery;
    int lightArmor;
    int sneak;
    int lockpicking;
    int pickpocket;
    int speechcraft;
    int alchemy;
    int illusion;
    int conjuration;
    int destruction;
    int restoration;
    int alteration;
    int enchanting;
};

class ASList {
private:
    RaceStats data[100];
    int length;

    int GetSkillValue(const RaceStats& race, const std::string& key);

public:
    ASList();
    void InsertSorted(RaceStats item, const std::string& sortKey);
    void PrintList(const std::string& sortKey);
    int GetSkillValue(const RaceStats& race, const std::string& key);
};

#endif

