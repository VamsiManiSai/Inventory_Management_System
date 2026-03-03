#include "Item.h"
#include <iostream>
using namespace std;

Item :: Item() {

	set_name("unknown");
	set_quantity(0);
	set_price(0.0);
	set_sellprice(0.0);
}

Item::Item(string name, int quantity, double price, double sellprice) {

	set_name(name);
	set_quantity(quantity);
	set_price(price);
	set_sellprice(sellprice);
}

void Item::update(int quantity) {

	set_quantity(quantity);
}

void Item::update(int quantity, double price) {

	set_quantity(quantity);
	set_price(price);
}

void Item::push(int amount) {

	this -> quantity = this -> quantity + amount;
}

void Item::pop(int amount) {

	this->quantity = (this->quantity != 0 and this -> quantity - amount < 0) ? 0 : this -> quantity - amount;

}

double Item::get_allprice() {

	return this->quantity * this->price;
}

double Item::get_allsellprice() {

	return this->quantity * this->sellprice;
}

double Item::get_profit() {

	return (this->sellprice - this->price) * this->quantity;
}

void Item::display() {

	cout << " Details of the inventory " << endl;
	cout << " name of the book     : " << this->name << endl;
	cout << " quantity of the book : " << this->quantity << endl;
	cout << " purchase price of the book : " << this->price <<  endl;
	cout << " selling price of the book  : " << this->sellprice << endl << endl;
}

void Item::set_name(string name) {
	this->name = name;
}

void Item::set_quantity(int quantity) {
	this->quantity = quantity;
}

void Item::set_price(double price) {
	this->price = price;
}

void Item::set_sellprice(double sellprice) {
	this->sellprice = sellprice;
}
