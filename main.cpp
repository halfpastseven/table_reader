/** File name: main.cpp
 ** Last modified: Thu Aug  4 16:55:32 2016
 */

/* 
 * File:   main.cpp
 * Author: AQN
 *
 * Created on July 25, 2016, 4:37 PM
 */

#include <cstdlib>
#include "table_reader.h"
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    table_reader Table (table_reader::Tab);
    Table.open (std::string ("TESTFILE.txt"), true);

    cout<<"Table header: ";
    for (int i=0; i<Table.header().size(); i++) cout<<Table.header()[i]<<" , ";
    cout<<endl;
    const vector<int>& Frequency = Table.i(0);
    const vector<float>& Zr = Table.f(1);
    const vector<double>& Zi = Table.d(2);
    
    for (int row=0; row<Table.rows();row++) cout<<Frequency[row]<<" , "<<Zr[row]<<" , "<<Zi[row]<<endl;
    /*for (int row=0; row<Table.rows();row++){
        for (int col=0; col<Table.cols();col++){
            cout<<"|"<< Table[col][row];
        }
        cout<<endl;
    }*/
    cout <<"Reading State: "<<Table.status();
    return 0;
}

