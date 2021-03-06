#include <string>
#include "Equipment.h"

class Employee {
public:
	std::string getName();
	void setName(std::string);
	int getID();
	void setID(int);
	int getSkillClass();
	void setSkillClass(int);
	void printEquipment();
	void checkOutEquipment();
	void checkInEquipment();
	bool IDInUse(int);
	bool inputValid(int, std::string); // ID,Password

private:
	std::string name;
	std::string password; // change to SecureString
	int ID;
	int skillClass;
	Equipment equipment[];




};