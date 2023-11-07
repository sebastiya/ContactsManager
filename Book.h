#pragma once


class Book
{
    int numGroups;          
    int maxGroups;          
    Group* groups;          

public:
    Book();
    Book( int numGroups, int maxGroups);
    ~Book();
    Group* getGroups() const;
};

