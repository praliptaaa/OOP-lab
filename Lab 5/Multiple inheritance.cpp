Multiple inheritance : A smart home control engine needs to control a hardware hub that integrates two independent communication modules with overlapping method names.


#include <iostream>
using namespace std;

// Base Class 1
class WiFiModule {
public:
    // Overlapping method name
    void connect() {
        cout << "Connecting via Wi-Fi network..." << endl;
    }
};

// Base Class 2
class BluetoothModule {
public:
    // Overlapping method name
    void connect() {
        cout << "Pairing via Bluetooth..." << endl;
    }
};

// Derived Class (Multiple Inheritance)
class SmartHub : public WiFiModule, public BluetoothModule {
public:
    void initializeHub() {
        cout << "--- Smart Hub Initialization ---" << endl;
        // Resolving ambiguity using the scope resolution operator (::)
        WiFiModule::connect();
        BluetoothModule::connect();
        cout << "Hub is ready.\n" << endl;
    }
};

int main() {
    SmartHub hub;
    hub.initializeHub();
    return 0;
}