/*
 * main.cpp
 *
 *  Created on: Sep 22, 2020
 *      Author: kylej
 */

#include "Implement1.h"

/*
#include <iostream>
using std::cout;
using std::endl;
*/

int Node::count_idNO = 0;

int main ()
{
	Node nodeOneI;
	Node nodeTwoI;
	Node nodeThreeI;
	Connection connectionOne(&nodeOneI,&nodeTwoI,4);
	Connection connectionTwo(&nodeTwoI,&nodeThreeI,7);
	Network networkOne;


	cout << "Node 1 IdNO: " << nodeOneI.idNO << endl;
	cout << "count_idNO: " << nodeOneI.get_count_idNO() << endl;
	cout << "Node 2 IdNO: " << nodeTwoI.idNO << endl;
	cout << "count_idNO: " << nodeTwoI.get_count_idNO() << endl;

	cout << "Connection 1 Cost: " << connectionOne.get_cost() << endl;
	connectionOne.set_cost(5);
	cout << "Connection 1 Cost: " << connectionOne.get_cost() << endl;

	cout << "Connection 2 Cost: " << connectionTwo.get_cost() << endl;


	networkOne.add_connection(&connectionOne);
	networkOne.add_connection(&connectionTwo);
	cout << "Network 1 Size: " << networkOne.network_vector.size() << endl;
	cout << "Network 1 Connection 1 Cost: " << networkOne.network_vector[0]->get_cost() << endl;

	cout << "Network 1 Connection 1 ID Node 1: " << networkOne.network_vector[0]->get_NodeOne()->idNO << endl;
	cout << endl;
	networkOne.print_network(cout);

	return 0;
}


