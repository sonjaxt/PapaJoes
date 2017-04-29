#ifndef ORDER_H_
#define ORDER_H_

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

enum SHIPPING_TYPE {OVERNIGHT, RUSH, STANDARD};  // overnight, standard
class Order {
private:
	string productName;
	tm* dateOfPurchase;
	bool shippingStatus; // already shipped
	SHIPPING_TYPE shippingType;
public:
	Order(string productName, SHIPPING_TYPE shippingType);
	tm* getDateOfPurchase() const {
		return dateOfPurchase;
	}

	void setDateOfPurchase(tm* dateOfPurchase) {
		this->dateOfPurchase = dateOfPurchase;
	}

	const string& getProductName() const {
		return productName;
	}

	void setProductName(const string& productName) {
		this->productName = productName;
	}

	bool isShippingStatus() const {
		return shippingStatus;
	}

	void setShippingStatus(bool shippingStatus) {
		this->shippingStatus = shippingStatus;
	}

	SHIPPING_TYPE getShippingType() const {
		return shippingType;
	}

	void setShippingType(SHIPPING_TYPE shippingType) {
		this->shippingType = shippingType;
	}


	void print() const;
};

Order::Order(string productName, SHIPPING_TYPE shippingType)
: productName(productName), shippingType(shippingType), shippingStatus(false)
{
	time_t now = time(0);
	dateOfPurchase = localtime(&now);
}

void Order::print() const
{
	cout << productName << " was purchased on "
			<< 1 + dateOfPurchase->tm_mon << "/" << dateOfPurchase->tm_mday << "/" << dateOfPurchase->tm_year << endl;
}

#endif /* ORDER_H_ */
