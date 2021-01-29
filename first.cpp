#include <iostream>
#include <string>

using namespace std;

struct doner {
    string name;
    int amount;
};

int noOfDoners = 0;
int currentMaxDonation = 0;
int maxDonerIndex = 0;
int numberOfDoners = 0;

struct doner doners[1000];

int main() {

    while (true) {
        
        string query;
        
        cin >> query;
        
        if (query == "donate") {
            
            int amount;
            string name;
            
            cout << "Enter Your Name: ";
            cin >> name; cout << endl;
            cout << "Enter Amount: ";
            cin >> amount;
            
            struct doner newDoner;
            newDoner.name = name;
            newDoner.amount = amount;
            
            doners[numberOfDoners] = newDoner;
            
            if (amount > currentMaxDonation) {
                currentMaxDonation = amount;
                maxDonerIndex = numberOfDoners;
            }
            
            numberOfDoners++;
            
        } else if (query == "max") {
            
            cout << "Name: " << doners[maxDonerIndex].name << endl;
            cout << "Amount: " << doners[maxDonerIndex].amount << endl;
            
        } else if (query == "random") {
            
            int randomDoner = rand() % (numberOfDoners);

            cout << "Name: " << doners[randomDoner].name << endl;
            cout << "Amount: " << doners[randomDoner].amount << endl;
            
        } else {
            cout << "Wrong Query!!" << endl;
        }
    }
}
