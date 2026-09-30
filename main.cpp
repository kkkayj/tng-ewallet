#include <iostream>
using namespace std;

int main(){
    int choice; //menu choices for user to choose

   //Welcome banner
   cout << "====================================" << endl;
   cout << "   Welcome to TNG eWallet" << endl;
   cout << "  Cashless payments, no cash needed!" << endl;
   cout << "====================================" << endl;
   
   // Giving users to key in the input
   // Keep showing the menu until the user picks 5 (Exit)
   
   do{
    cout << endl;
    cout << "----------MAIN MENU-----------" << endl;
    cout << "1. Check Balance" << endl;
        cout << "2. Reload" << endl;
        cout << "3. Pay Toll" << endl;
        cout << "4. Scan & Pay" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

     // Giving outputs based on the user's choice
     switch (choice){
        case 1:
            cout << "CHeck Balance -  coming soon" << endl;
            break;

        case 2: 
            cout << "Reload - coming soon" << endl;
            break;

        case 3: 
            cout << "Pay Toll - coming soon" << endl;
            break;

        case 4:
            cout << "Scan & Pay - coming soon" << endl;
            break;

        case 5:
            cout << "Thank you for using TNG eWallet" << endl;
            break;
        
        default:
            cout << "Invalid choice. Please enter 1 to 5." << endl;
     }
   }
   while (choice != 5);

    return 0;
}