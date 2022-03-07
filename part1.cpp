#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using RealVec = vector<double>;
using RealMatrix = vector<RealVec>;

int main() 
    {

    cout << "This program is designed to create an nxn identity matrix." << endl;
    cout << "Please enter a positive integer value for n:" << endl;
    double n{};
    cin >> n;

    if (n <= 1)
        {
            cout << "Invalid value. Please enter a positive integer value >= 1" << endl;
            return -1;
        }
    
    cout << "Creating a " << n << " by " << n << " matrix." << endl;
    cout << endl;
    
    RealVec V = {0.0};

    V.resize(n, 0.0);

    RealMatrix I = {};

    for (int i = 0; i < n; ++i)
        {
            RealVec W = V;
            W[i] = 1.0;
            for (auto e : W)
                {
                    cout << e;
                }
            I.push_back(W);
            cout << endl;
        };

    cout << endl;
    }