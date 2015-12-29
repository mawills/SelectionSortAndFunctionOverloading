#include <iostream>
#include <fstream>
#include "SortedList.h"

using namespace std;

int main()
{
    SortedList floatList;

    //Read in the data from float.dat and save it to the values[] array in floatList
    float line;
    ifstream myfile ("float.dat");
    if (myfile.is_open())
    {

        cout << "Original data: " << endl;
        for(int i = 0; i < MAX_ITEMS; i++)
        {
            myfile >> line;
            floatList.values[i] = line;
            floatList.length++;
            cout << line << endl;
            if (myfile.eof()) break;
        }

        cout << endl << "Sorted data: " << endl;
        floatList.selectionSort(floatList.values);

        floatList.insertItem(4.4);
        floatList.insertItem(10.0);
        floatList.insertItem(1.0);
        floatList.insertItem(7.1);
        floatList.insertItem(6.6);

        floatList.deleteItem(69);
        floatList.deleteItem(4.4);
        floatList.deleteItem(10.0);
        floatList.deleteItem(1.0);


    }
    else cout << "Unable to open file." << endl;

    ofstream outputFile;
    outputFile.open("output.dat");
    if (outputFile.is_open())
    {
        for(int i = 0; i < floatList.length; i++)
        {
            //write each value into the output file output.dat
            outputFile << floatList.values[i];
            //makes new line after writing each value, excluding the last.
            if(i != floatList.length - 1)
                outputFile << '\n';
        }
    }
    outputFile.close();

    return 0;
}
