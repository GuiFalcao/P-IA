#include <iostream>
#include <stdlib.h>

using namespace std;
static const int MAX = 4;
int main(int argc, char** argv)
{
    int lista[16][16];
    cout << "You have entered " << argc
     << " arguments:" << "\n";
     if(argv[1] == std::string("-bfs")){
        cout << "Algorithm BFS\n";
     }else if(argv[1] == std::string("-idfs")){
        cout << "Algorithm IDFS\n";
     }else if(argv[1] == std::string("-astar")){
        cout << "Algorithm ASTAR\n";
     }else if(argv[1] == std::string("-idastar")){
        cout << "Algorithm IDASTAR\n";
     }else if(argv[1] == std::string("-gbfs")){
        cout << "Algorithm GBFS\n";
     }
     int linha = 0;
    for (int i = 0; i < argc; ++i){
        cout << argv[i] << "\n";
        lista[linha][i] = strtol(argv[i], NULL, 10);
        if(argv[i][1] == ','){
            cout << "TOMA NO CU\n";
            linha++;
        }
    }
    cout << lista[0].size() << "\n";
    cout << argc << "\n";

    return 0;
}
