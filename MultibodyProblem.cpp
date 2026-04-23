#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>

char a = 'a';
char b = 'b' ;
char c = 'c' ;
char d = 'd';
char e = 'e';
std::vector<char> PossibleStates = {a, b, c, d, e};
std::vector<std::vector<char>> Wavefunction;
bool IsBosons = true;

void FindPermutations() {
    int x = 0;
do {
        x++;
        std::vector<char> DevelopedState;
        DevelopedState.clear();
        std::cout << "PERMUTATION NUMBER " << x << std::endl; 
        std::cout << "STATE [";
        
       for (char c : PossibleStates) {
            std::cout << c << " ";
            DevelopedState.push_back(c);
        }
        std::cout << "]" << std::endl;
        Wavefunction.push_back(DevelopedState);
    } while (std::next_permutation(PossibleStates.begin(), PossibleStates.end()));

}

int countInversions(const std::vector<char>& state) {
    int inversions = 0;
    // Look at each character...
    for (size_t i = 0; i < state.size(); ++i) {
        // ...and compare it to every character that comes AFTER it
        for (size_t j = i + 1; j < state.size(); ++j) {
            // If the first character is alphabetically greater, it's an inversion!
            if (state[i] > state[j]) {
                inversions++;
            }
        }
    }
    return inversions;
}

int main() {
    
    int PossibleStatesLength = PossibleStates.size();
   /// for (int n = 0; n < (120 - 1); n++) {
    //element x will be the leading element of each new string. Parse through each entry, find possibilities, then replace x with next element.
    std::sort(PossibleStates.begin(), PossibleStates.end());
    std::cout << "The following program will print the permutations of the elements within PossibleStates" << std::endl;
    FindPermutations();
    std::cout << "Linear Combinations: " << std::endl;

    if (IsBosons == false) {
    std::cout << "Proper Fermion State (Antisymmetric): " << std::endl;
    
    // Add the normalization constant for 5 particles 
    std::cout << "( 1 / sqrt(120) ) * (" << std::endl;
    
    for (int i = 0; i < Wavefunction.size(); i++) {
        
        
        int inversions = countInversions(Wavefunction[i]);
        char sign = (inversions % 2 == 0) ? '+' : '-';

        // Print the sign (we skip printing a '+' for the very first term)
        if (i == 0) {
            std::cout << "    |";
        } else {
            std::cout << "  " << sign << " |";
        }
        
        
        for (int j = 0; j < Wavefunction[i].size(); j++) {
            std::cout << Wavefunction[i][j];
            
            // Only print the comma if it is not the last element, hi conlin
            if (j < Wavefunction[i].size() - 1) {
                std::cout << ", ";
            }
        }   
        std::cout << ">" << std::endl; // Removed the trailing +
    }
    
    std::cout << ")" << std::endl; // Close the normalization bracket
    }
    
    if (IsBosons == true) {
         FindPermutations();
        std::cout << "( 1 / sqrt(120) ) * (" << std::endl;
   
    for (int i = 0; Wavefunction.size() > i; i++) {
        std::cout << " |";
        for (int j = 0; Wavefunction[i].size() > j; j++) {
            std::cout << Wavefunction[i][j] << ", ";
        }   
        std::cout << "> + " << std::endl;
    }
    std::cout << ")" << std::endl;
    }
}
