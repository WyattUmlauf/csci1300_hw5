#include <iostream>
#include <string>

using namespace std;

void daysToFund(int startBalance, int dailyDeposit){
int Index = 0;
int goal = 42500;
cout << "--- Vault Savings Plan ---" << endl;
while(startBalance < goal){
    Index++;
startBalance += dailyDeposit;
cout << "Day " << Index << ": deposited " << dailyDeposit << ", balance now " << startBalance << endl;

    
}
cout << "The Vault was funded in " << Index << " days!" << endl;
}

int main(){
int balance;
int deposit;
cout << "Enter the starting Vault balance: ";
cin >> balance;
cout << "Enter the daily deposit amount: ";
cin >> deposit;
daysToFund(balance, deposit);






}