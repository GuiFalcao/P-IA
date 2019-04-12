#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;
static const int MAX = 8;

//Closed set
map<vector<vector<int> > , bool> closed;
//State goal
vector<vector<int> > goal(3,vector<int> (3));

//Define state
typedef pair<vector<vector<int> > , int> state;


//Algorithms
void BFS(vector<vector<int> initial_form) {
}

void IDFS(vector<vector<int> initial_form) {
}

void ASTAR(vector<vector<int> initial_form) {
}

void IDASTAR(vector<vector<int> initial_form) {
}

void GBFS(vector<vector<int> initial_form) {
}

int main(int argc, char** argv)
{
    vector<vector<int> initial_form(3,vector<int> (3));

    //Set goal state
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


    //Reading args
    for (int i = 0; i < argc - 2; ++i){
        initial_form[i/3][i%3] = atoi(argv[i+2]);
        cout << argv[i] << "\n";
    }
    cout << atoi(argv[4]) << "\n";
    cout << lista[8] << " Aqui\n";
    cout << argc << "\n";

    //Reading what algorithm is
    if(argv[1] == string("-bfs")){
    cout << "Algorithm BFS\n";
    BFS(initial_form);
    }else if(argv[1] == string("-idfs")){
    cout << "Algorithm IDFS\n";
    IDFS(initial_form);
    }else if(argv[1] == string("-astar")){
    cout << "Algorithm ASTAR\n";
    ASTAR(initial_form);
    }else if(argv[1] == string("-idastar")){
    cout << "Algorithm IDASTAR\n";
    IDASTAR(initial_form);
    }else if(argv[1] == string("-gbfs")){
    cout << "Algorithm GBFS\n";
    GBFS(initial_form);
    }
    //
    return 0;
}
