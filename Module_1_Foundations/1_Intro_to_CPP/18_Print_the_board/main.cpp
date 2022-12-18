#include <iostream>
#include <vector>
using std::cout;
using std::vector;

// TODO: Add PrintBoard function here.

void PrintBoard(vector<vector<int>> board){

  for (vector<int> i : board)
  {

    for (int j : i)
    {
      cout<<j;

    }
    cout<<"\n";
  }



}

int main() {
  vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 0, 0, 0, 1, 0}};
  // TODO: Call PrintBoard function here.

  PrintBoard(board);
  
}