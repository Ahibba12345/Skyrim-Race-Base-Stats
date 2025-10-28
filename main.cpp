#include <iostream>
#include <string>
#include "ASList.h"

using namespace std;

int main() {
    ASList raceList;
    string sortKey;

    // Prompt user for sorting skill
    cout << "Enter the skill to sort by (e.g., sneak, alchemy, oneHanded): ";
    cin >> sortKey;

    // Create race entries
    RaceStats altmer = {"Altmer (High Elf)", 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 25, 20, 20, 20, 20, 20};
    RaceStats argonian = {"Argonian", 15, 15, 15, 15, 15, 15, 20, 20, 25, 20, 15, 15, 15, 15, 15, 20, 20, 15};
    RaceStats bosmer = {"Bosmer (Wood Elf)", 15, 15, 15, 15, 15, 25, 20, 20, 20, 20, 15, 20, 15, 15, 15, 15, 15, 15};
    RaceStats breton = {"Breton", 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 20, 20, 20, 25, 15, 20, 20, 15};
    RaceStats dunmer = {"Dunmer (Dark Elf)", 15, 15, 15, 15, 15, 15, 20, 20, 15, 15, 15, 20, 20, 15, 25, 15, 20, 15};
    RaceStats imperial = {"Imperial", 15, 20, 20, 15, 20, 15, 15, 15, 15, 15, 15, 15, 15, 15, 20, 25, 15, 20};
    RaceStats khajiit = {"Khajiit", 15, 15, 15, 15, 20, 20, 15, 25, 20, 20, 15, 20, 15, 15, 15, 15, 15, 15};
    RaceStats nord = {"Nord", 20, 15, 20, 25, 20, 15, 20, 15, 15, 15, 20, 15, 15, 15, 15, 15, 15, 15};
    RaceStats orsimer = {"Orsimer (Orc)", 20, 25, 20, 20, 20, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 20};
    RaceStats redguard = {"Redguard", 20, 15, 20, 15, 25, 20, 15, 15, 15, 15, 15, 15, 15, 15, 20, 15, 20, 15};

    // Insert races into ASList using selected sort key
    raceList.InsertSorted(altmer, sortKey);
    raceList.InsertSorted(argonian, sortKey);
    raceList.InsertSorted(bosmer, sortKey);
    raceList.InsertSorted(breton, sortKey);
    raceList.InsertSorted(dunmer, sortKey);
    raceList.InsertSorted(imperial, sortKey);
    raceList.InsertSorted(khajiit, sortKey);
    raceList.InsertSorted(nord, sortKey);
    raceList.InsertSorted(orsimer, sortKey);
    raceList.InsertSorted(redguard, sortKey);

    // Print sorted list
    cout << "\nSorted by " << sortKey << " (descending):\n";
    raceList.PrintList(sortKey);

	int filterValue;
	cout << "\nExtra Credit: Enter a value for " << sortKey << " to filter races with higher skill: ";
	cin >> filterValue;

	cout << "\nRaces with " << sortKey << " greater than " << filterValue << ":\n";

	RaceStats allRaces[] = {altmer, argonian, bosmer, breton, dunmer, imperial, khajiit, nord, orsimer, redguard};

	for (int i = 0; i < 10; i++) {
    	int value = raceList.GetSkillValue(allRaces[i], sortKey);
    	if (value > filterValue) {
       	 cout << allRaces[i].race << " - " << sortKey << ": " << value << endl;
    	}
	}

    return 0;
}