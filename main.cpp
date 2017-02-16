// This program demonstrates the vector size,
// push_back, and pop_back member functions

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> values;

    // Store values in the vector
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);

    cout << "The size of values is " << values.size() << endl;
}