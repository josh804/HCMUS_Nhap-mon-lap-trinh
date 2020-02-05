#include<iostream>
#include<fstream>
using namespace std;

int main() {
   ofstream ofile; // declaring an object of class ofstream
   ofile.open("file.txt"); // open "file.txt" for writing data
   /* write to a file */
   ofile << "This is a line in a file" << endl;
   ofile << "This is another line" << endl;
   /* write to a console */
   cout << "Data written to file" << endl;
   ofile.close(); // close the file
   return 0;
}