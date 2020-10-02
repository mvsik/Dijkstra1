/*
 * Implement1.cpp
 *
 *  Created on: Sep 22, 2020
 *      Author: kylej
 */

#include<list>
using std::list;
using std::fill;

#include <iostream>




#include "Implement1.h"



Node::Node () {
	count_idNO++;
	this->idNO = count_idNO;

	//fill(connection_list.begin(), connection_list.end(), list<int>(1));
}

Connection::Connection (Node* n1,Node* n2,int c) {
	this->NodeOne = n1;
	this->NodeTwo = n2;
	this->cost = c;
}

Node* Connection::get_NodeOne ()
{
	return this->NodeOne;
}

Node* Connection::get_NodeTwo () {
	return this->NodeTwo;
}

int Connection::get_cost () {
	return this->cost;
}

void Connection::set_NodeOne (Node* n){
	this->NodeOne = n;
}

void Connection::set_NodeTwo(Node* n){
	this->NodeTwo = n;
}

void Connection::set_cost (int c){
	this->cost = c;
}


void Network::add_connection(Connection* con1){
	//implement fn
	this->network_vector.push_back(con1);
}

Network::Network () {

}

/*
Network::~Network () {

}
*/

/*
void Network::add_connection(int c) {
	Node* n1 ;
	Node* n2 ;
	Connection con1;
	con1.set_NodeOne(n1);
	con1.set_NodeTwo(n2);
	con1.set_cost(c);
	this->network_vector.push_back(&con1);
}
*/

void Network::remove_connection(Node& n1,Node& n2){
	//implement fn
	this->network_vector.pop_back();
}

//std::vector<int>::iterator it = myvector.begin() ; it != myvector.end(); ++it

void Network::print_network(std::ostream& stream){
	for (int count = 0; count != this->network_vector.size(); ++count) {
		stream << "Connection " << count << ": " << "\n" << flush;
		stream << "Node One ID: " << this->network_vector[count]->get_NodeOne()->idNO << "\n" << flush;
		stream << "Node Two ID: " << this->network_vector[count]->get_NodeTwo()->idNO << "\n" << flush;
		stream << "Cost: " << this->network_vector[count]->get_cost() << "\n" << flush;
		stream << "\n" << flush;
	}

	//implement fn
}



