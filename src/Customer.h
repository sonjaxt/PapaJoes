/*
 * Customer.h
 *
 *  Created on: Apr 28, 2017
 *      Author: watanabekeisuke
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include "List.h"
#include "Order.h"
#include <iostream>
#include <string>
using namespace std;

class Customer {
private:
	string CustomerID;
	string password;
	string first_name;
	string last_name;
	List<Order> order;
	struct Address{
		string address;
		string city;
		string state;
		int zip;
		Address(string address, string city, string state, int zip)
		: address(address), city(city), state(state), zip(zip) {}
	};

public:
	Customer(string CustomerID, string password, string address,
			string first_name, string last_name, string city, string state, int zip)
	: CustomerID(CustomerID), password(password), first_name(first_name), last_name(last_name)
	{
			Address(address, city, state, zip);
	}


	const string& getCustomerId() const {
		return CustomerID;
	}

	void setCustomerId(const string& customerId) {
		CustomerID = customerId;
	}

	const string& getFirstName() const {
		return first_name;
	}

	void setFirstName(const string& firstName) {
		first_name = firstName;
	}

	const string& getLastName() const {
		return last_name;
	}

	void setLastName(const string& lastName) {
		last_name = lastName;
	}

	const List<Order>& getOrder() const {
		return order;
	}

	void setOrder(const List<Order>& order) {
		this->order = order;
	}

	const string& getPassword() const {
		return password;
	}

	void setPassword(const string& password) {
		this->password = password;
	}


};


#endif /* CUSTOMER_H_ */
