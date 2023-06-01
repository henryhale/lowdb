#include "db.h"

/**
 *  LowDB Implementation
 **/

LowDB::LowDB(string const & fileName)
{
	this->file = new string(fileName);
	this->data = new vector<string>();
	this->data->clear();
};

LowDB::~LowDB()
{
	delete this->file;
	delete this->data;
        this->file = nullptr;
        this->data = nullptr;
};

void LowDB::read()
{
	std::ifstream * f = new std::ifstream(*this->file);
	if(!f->is_open())
        {
		std::cerr << "[x] read : " << *this->file << " could not be opened" << std::endl;
		return;
	}
        this->data->clear();
	for(string line; std::getline(*f, line);)
	{
		if(line.size())
                {
			this->data->push_back(line);
		}
	}
	f->close();
	delete f;
        f = nullptr;
};

void LowDB::write()
{
	std::ofstream * f;
	f = new std::ofstream(*this->file, std::ios::trunc);
	if(!f->is_open())
        {
		std::cerr << "[x] write : " << *this->file << " could not be opened" << std::endl;
		return;
	}
       	if(this->data->size() > 0)
        {
	 	for(auto s : *this->data)
                {
	 		*f << s;
                        *f << std::endl;
		}
	}
	f->close();
	delete f;
        f = nullptr;
};
