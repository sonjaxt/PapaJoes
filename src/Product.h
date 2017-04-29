#ifndef PRODUCT_H_
#define PRODUCT_H_

#include <iostream>
#include <string>
using namespace std;

enum CATEGORY {BACKPACK, HAT, SHOE };	// secondary key
class Product {
private:
	string name;  // primary key
	string manufacture;
	string description;
	double price;
	string color;
	int size;
	CATEGORY category;
public:


	CATEGORY getCategory() const {
		return category;
	}

	void setCategory(CATEGORY category) {
		this->category = category;
	}

	const string& getColor() const {
		return color;
	}

	void setColor(const string& color) {
		this->color = color;
	}

	const string& getDescription() const {
		return description;
	}

	void setDescription(const string& description) {
		this->description = description;
	}

	const string& getManufacture() const {
		return manufacture;
	}

	void setManufacture(const string& manufacture) {
		this->manufacture = manufacture;
	}

	double getPrice() const {
		return price;
	}

	void setPrice(double price) {
		this->price = price;
	}

	const string& getname() const {
		return name;
	}

	void setname(const string& name) {
		this->name = name;
	}

	int getSize() const {
		return size;
	}

	void setSize(int size) {
		this->size = size;
	}

	void print() const;
};



void Product::print() const
{
	cout << name << " made by " << manufacture << " of category " << category << " Price:" << price << endl;
}





#endif /* PRODUCT_H_ */
