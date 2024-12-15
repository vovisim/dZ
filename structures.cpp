#include <iostream>

using namespace std;

struct Phone
{
	string phoneModel;
	string phoneManufacturer;
	int phoneDisplaySize;
	int phoneCurrentCharge;
	int phoneBatteryCapasity;
};

void updatePhoneCharge(Phone* p, int newCharge) {
	p->phoneCurrentCharge = newCharge;
}

Phone doNewPhone(string phone_model, string phone_manufacturer, int phone_display_size, int phone_current_charge, int phone_battery_capasity) {
	Phone newPhone;
	newPhone.phoneModel = phone_model;
	newPhone.phoneManufacturer = phone_manufacturer;
	newPhone.phoneDisplaySize = phone_display_size;
	newPhone.phoneCurrentCharge = phone_current_charge;
	newPhone.phoneBatteryCapasity = phone_battery_capasity;
	return newPhone;
}

int main() {
	Phone a = doNewPhone("dsdas", "adwd", 123, 213, 464);

	cout << a.phoneBatteryCapasity << a.phoneCurrentCharge;
}

