#include <iostream>
using namespace std;

int main(){
	//Declare variables to store customer information
	string customerName;
	string phoneModel;
	int quantityBought;
	double pricePerphone;
	double totalAmount;
	
	//input customer details
	//ask the user to enter customer name
	cout <<"Enter customer name: ";
	cin >> customerName;
	
	//ask the user to enter the phone model
	cout <<"Enter phone model: ";
	cin >> phoneModel;
	
	//ask the user to enter quantity bought
	cout <<"Enter quantity bought: ";
	cin >> quantityBought;
	
	//ask to enter the price of one phone
	cout <<"Enter price per phone: ";
	cin >> pricePerphone;
	
	//calculate the total amount
	totalAmount = quantityBought * pricePerphone;
	
	//Display the sales recipt 
	cout << "\n===================MOBILE PHONE SALES RECEIPT ==================" << endl;
	cout << "Customer Name: " <<customerName<<endl;
	cout << "Phone model: " <<phoneModel<<endl;
	cout << "Quantity Bought: " <<quantityBought<<endl;
	cout << "Price Per Phone: " <<pricePerphone<<endl;
	cout << "Total Amount: " <<totalAmount<<endl;
	
	 return 0;
}