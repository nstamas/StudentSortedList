/*
 * SortedList.cpp
 *
 *  Created on: Oct 21, 2013
 *      Author: stamas
 */
#include <iostream>
#include <list>
#include "SortedList.h"
using namespace std;
SortedList::SortedList() {
	head = NULL;
	// TODO Auto-generated constructor stub
}

bool SortedList::insert(Student *s){
	if(head == NULL){
		head->next->student = s;
		return true;
	}
	while(head->next != NULL){
		if(head->next->student->getID() == s->studentID){
			return false;
		}
		if(head->next->student->getID() > s->getID()){
			Listnode *newStudent;
			newStudent->student = s;
			newStudent->next = head->next;
			head->next = newStudent;
			return true;
		}
		head = head->next;
	}
	Listnode *newStudent;
	newStudent->student = s;
	head->next = newStudent;
	return true;
}

SortedList::Student *find(int studentID){
	if(head == NULL){
		return NULL;
	}
	while(head->next != Null){
		if(head->next->student->getID() == s->getID()){
			return head->next->student;
		}
		head = head->next;
	}
	return NULL;
}

SortedList::Student *remove(int studentID){
	if(head == NULL){
		return NULL;
	}
	while(head->next !=Null){
		if(head->next->student->getID() == s->getID()){
			Student *tmp = head->next->student;
			if(head->next->next == NULL){
				head->next = NULL;
			}
			Listnode *replace;
			replace->next = head->next->next;
			head->next = replace;
			return tmp;
		}
		head = head.next;
	}
	return NULL;
}

void SortedList::print() const{
	if(head == NULL){
		return;
	}
	while(head->next != NULL){
		cout << head->next->student->getID() << ", " << head->next->student->getCredits() << ", " << head->next->student->getGPA() << endl;
	}
}
