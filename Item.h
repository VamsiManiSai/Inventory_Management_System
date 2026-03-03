#pragma once
#include <string>
using namespace std;

class Item
{
	private:
		string name;
		int quantity;
		double price;
		double sellprice;

	public:
		Item();

		Item(string name = "unknown", int quantity = 0, double price = 0.0, double sellprice = 0.0);

	public:
		void update(int quantity);

		void update(int quantity, double price);

		void push(int amount);

		void pop(int amount);

		double get_allprice();

		double get_allsellprice();

		double get_profit();

		void display();

	public:
		void set_name(string name);

		void set_quantity(int quantity);

		void set_price(double price);

		void set_sellprice(double sellprice);

};

