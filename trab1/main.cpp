#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;
static const int MAX = 8;


int main(int argc, char** argv)
{
    int lista[MAX];
    int linha = 0;

    //State goal
    vector<vector<int> > goal(3,vector<int> (3));
    goal[0][0] = 1;
    goal[0][1] = 2;
    goal[0][2] = 3;
    goal[1][0] = 4;
    goal[1][1] = 5;
    goal[1][2] = 6;
    goal[2][0] = 7;
    goal[2][1] = 8;
    goal[2][2] = 0;
    //

    cout << "You have entered " << argc
     << " arguments:" << "\n";
    for (int i = 2; i <= MAX + 2; ++i){
        cout << argv[i] << "\n";
        lista[i - 2] = atoi(argv[i]);
        string a = argv[i];
    }
    cout << atoi(argv[4]) << "\n";
    cout << lista[8] << " Aqui\n";
    cout << argc << "\n";

    //Reading what algorithm is
    if(argv[1] == string("-bfs")){
    cout << "Algorithm BFS\n";
    }else if(argv[1] == string("-idfs")){
    cout << "Algorithm IDFS\n";
    }else if(argv[1] == string("-astar")){
    cout << "Algorithm ASTAR\n";
    }else if(argv[1] == string("-idastar")){
    cout << "Algorithm IDASTAR\n";
    }else if(argv[1] == string("-gbfs")){
    cout << "Algorithm GBFS\n";
    }
    //
    return 0;
}
