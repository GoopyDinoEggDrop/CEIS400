

class Equipment
{
public:
	std::string getName();
	void setName(std::string);
	int getID();
	void setID(int);
	double getPrice();
	void setPrice(double);
private:
	std::string name;
	int ID;
	double price;
};