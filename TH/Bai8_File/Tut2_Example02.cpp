#include<iostream>
#include<fstream>
using namespace std;

int main() {
   char data[100]; // buffer to store a line read from file
   ifstream ifile; // declaring an object of class ifstream
   ifile.open("file.txt"); // open "file.txt" for reading
   cout << "Reading data from a file :-" << endl << endl;
   while (!ifile.eof()) { // while the end of file [ eof() ] is not reached 
      ifile.getline(data, 100); // read a line from file
      cout << data << endl; // print the file to console
   }
   ifile.close(); // close the file
   return 0;
}