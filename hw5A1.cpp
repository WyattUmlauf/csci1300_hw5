#include <iostream>
#include <string>

using namespace std;

int totalGold(int donations[], int size){
int sum = 0;
    for(int i = 0; i < size; i++){
sum += donations[i];
    }
    return sum;
}

int main(){
int size = 0;
cout << "Enter the number of gold donations: ";
cin >> size;
int donations[100];
for(int i = 0; i < size; i++){
cout << "Enter gold donation " << (i + 1) << ": ";
cin >> donations[i];

}
cout << "--- Vault Funding ---" << endl;
int goal = 42500;
int sumGold = totalGold(donations, size);
cout << "Total gold donated: " << sumGold << endl;
cout << "Vault goal: " << goal << endl;
if(sumGold >= goal){
    cout << "The Vault is fully funded! Surplus: " << (sumGold - goal) << " gold" << endl;
}
else if(goal > sumGold){
    cout << "The Vault still needs " << (goal - sumGold) << " more gold." << endl;
}


    return 0;
}