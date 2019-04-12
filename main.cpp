#include <iostream>

using namespace std;

int main () {
    string output;
    int counter = 1;
    while(counter <= 100){
        output = "";
        if(counter % 3 == 0){
            output += "Fizz";
        }
        if(counter % 5 == 0){
            output += "Buzz";
        }
        if(output == ""){
            output = std::to_string(counter);
        }
        cout << output << endl;
        counter++;
    }

    return 0;
}
