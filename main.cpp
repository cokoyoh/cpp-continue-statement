#include <iostream>

using namespace std;

int main() {
    for (unsigned int count{1}; count <= 10 ; ++count) {
        if(count == 5) {
            continue; //skips the remaining code in the loop if the count is 5
        }

        cout << count << " ";
    }

    cout << "\nUsed continue to skip printing 5" << endl;
}
