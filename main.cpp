#include <iostream>
#include <iomanip> // for setprecision (show 2 decimal places)
using namespace std;

int main(){
    int choice; //menu choices for user to choose
    double balance = 20.00; // starting wallet balance in RM
    double amount; // amount the user types in (RM)
    int plaza; // toll plaza the user input picks
    double fare; // toll fare for that plaza (RM)

   //Welcome banner
   cout << "====================================" << endl;
   cout << "   Welcome to TNG eWallet" << endl;
   cout << "  Cashless payments, no cash needed!" << endl;
   cout << "====================================" << endl;
   cout << fixed << setprecision(2); // show money like RM20.00

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
     // Just a prototype, "coming soon" will be replace with real code later
     switch (choice){
        case 1:
            cout << "Your Balance: RM "<< balance << endl;
            break;

        case 2: 
            cout << "Enter reload amount (RM10 - RM500): RM ";
            cin >> amount;

            //Check the amount is within the allowed range
            if (amount < 10 || amount > 500){
                cout << "Reload failed. Amount must be between RM10 and RM500" << endl;
            } else {
                balance = balance + amount;
                cout << "Reload successful! Total balance now: RM " << balance << endl;
            }
            break;

        case 3: 
            cout << "Choose toll plaza:" << endl;
            cout << "1. LDP          - RM 2.10" << endl;
            cout << "2. SMART Tunnel - RM 3.00" << endl;
            cout << "3. PLUS Highway - RM 8.50" << endl;
            cout << "Enter plaza (1-3): ";
            cin >> plaza;

            //Set the fare based on the plaza chosen
            if (plaza == 1){
                fare = 2.10;
            } else if (plaza == 2){
                fare = 3.00;
            } else if (plaza == 3){
                fare = 8.50;
            } else {
                fare = 0; // means its invaliid as there is no choice for other fare number
            }

            //Check if the plaza is valid and the balance is enough
            if (fare == 0){
                cout << "Invalid plaza. Please choose 1 to 3";
            } else if (balance < fare){
                cout << "Insufficient balance! Please reload first" << endl;
            } else {
                balance = balance - fare;
                cout << "Toll Paid: RM " << fare << endl;
                cout << "Remaining balance: RM" << balance << endl;
            }
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