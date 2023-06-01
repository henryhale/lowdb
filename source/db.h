#pragma once
/**
 *  LowDB implementation
 **/
#ifndef LOWDB_H
#define LOWDB_H

#include "shared.h"

class LowDB {
	private:
		string *file;
	public:
		vector<string> * data;
		LowDB(string const & fileName);
		~LowDB();
		void read();
		void write();
};

#endif
