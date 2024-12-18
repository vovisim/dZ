#include <iostream>
#include <string>
#include <tuple>
#include <istream>
#include <vector>
using namespace std;


struct Cat 
{
    string name;
    int weight;
    

};

std::istream& operator>>(std::istream& is, Cat& cat) {
    // Rat Name 12
    std::string __cat;
    std::string name;
    int weight;
    is >> __cat >> name >> weight;
    cat.name = name;
    cat.weight = weight;
    return is;
}

std::ostream& operator<<(std::ostream& os, Cat cat) {
    os << cat.name << cat.weight;
    return os;
}

std::ostream& operator<<(std::ostream& os, std::vector<int>& vi) {
    os << "[";
    for (int i : vi) {
        os << i << ", ";
    }
    os << "]";
    return os;
}

int main(){
    return 0;
}