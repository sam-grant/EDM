 
#include <fstream>

#include <string>
#include <fstream>
#include <vector>
#include <utility> 
#include <stdexcept> 
#include <sstream> 

void TestReader() {

    // Columns & rows
    vector< vector<float> > result;

    // Open file
	std::ifstream myFile("scan2.csv");

    // Check that it opened correctly 
	if(!myFile.is_open()) throw std::runtime_error("Could not open file");

    // Helper vars
    std::string line; float val; 

    // Read data, line by line
    while(std::getline(myFile, line))
    {
        // Create a stringstream of the current line
        std::stringstream ss(line);

        // Put each row in a vector
        vector<float> row;

        while(ss >> val){

            cout<<val<<endl;

            row.push_back(val);

            // If the next token is a comma, ignore it and move on
            if(ss.peek() == ',') ss.ignore();
            
        }

        // Store the row vectors in a vector of vectors

        result.push_back(row);

    }

    cout<<"\n";


    for (int i = 1; i < result.size(); i++ ) {

        vector<float> tmp = result.at(i);

        cout<<tmp.size()<<endl;

        cout<<tmp.at(0)<<", ";
        cout<<tmp.at(1)<<", ";
        cout<<tmp.at(2)<<endl;

    }
    // Close file
    myFile.close();

    return;

}

