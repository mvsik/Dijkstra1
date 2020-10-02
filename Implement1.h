/*
 * Implement1.h
 *
 *  Created on: Sep 22, 2020
 *      Author: kylej
 */

#ifndef IMPLEMENT1_H_
#define IMPLEMENT1_H_

#include <list>
using std::list;
#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using std::endl;
using std::flush;
#include <iterator>



class Node {
public:
	static int count_idNO; //must initialize to 0 to use (before main)
	int idNO;
	vector<list <int> > connection_list;
	Node();
	static int get_count_idNO (){
		return count_idNO;
	}
};

class Connection {
	int cost;
	Node* NodeOne;
	Node* NodeTwo;
public:
	Connection (Node*,Node*,int);
	void set_NodeOne (Node*);
	void set_NodeTwo (Node*);
	void set_cost (int);

	Node* get_NodeOne ();
	Node* get_NodeTwo ();
	int get_cost ();

};

class Network {
	//vector<Connection*> network_vector;
public:
	vector<Connection*> network_vector;
	Network ();
	//~Network();
	void add_connection(Connection*);
	void add_connection(int);
	void remove_connection(Node&,Node&);
	void print_network(std::ostream&);

};







#endif /* IMPLEMENT1_H_ */
