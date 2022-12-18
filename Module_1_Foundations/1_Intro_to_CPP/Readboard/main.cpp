#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using std::cout;
using std::string;
using std::vector;

// TODO: Add the ReadBoardFile function here.

// /home/workspace/1.board

void ReadBoardFile(string file_path){
  
  std::ifstream file_reader(file_path);
  
  if (file_reader){
    
    cout << "File has been read" << "\n";
    
    //read each line
    
    string each_line;
    
//     getline is a string method
    while(getline(file_reader, each_line)){
      
      cout << each_line << "\n";
    
    }
    
  }

}

// PrintBoard not used in this exercise
void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

int main() {
  // TODO: Call the ReadBoardFile function here.
  ReadBoardFile("1.board");
  
  // Leave the following line commented out.
//   PrintBoard(board);
}