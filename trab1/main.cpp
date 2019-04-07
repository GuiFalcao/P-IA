#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
        cout << "You have entered " << argc
         << " arguments:" << "\n";
         if(argv[1] == std::string("-a")){
            cout << "Algorithm A\n";
         }else if(argv[1] == std::string("-idfs")){
            cout << "Algorithm IDFS\n";
         }else if(argv[1] == std::string("-astar")){
            cout << "Algorithm ASTAR\n";
         }else if(argv[1] == std::string("-idastar")){
            cout << "Algorithm IDASTAR\n";
         }else if(argv[1] == std::string("-gbfs")){
            cout << "Algorithm GBFS\n";
         }
    for (int i = 0; i < argc; ++i)
        cout << argv[i] << "\n";

    return 0;
}
