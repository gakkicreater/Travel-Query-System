#include "attribute.h"

Attribute::Attribute()
{
    this->from = -1;
}

Attribute::Attribute(int from, int to, QString num, QDate begin, QDate end, int cost, int vehicle)
{
    this->from = from;
    this->to = to;
    this->num = num;
    this->begin = begin;
    this->end = end;
    this->cost = cost;
    this->vehicle = vehicle;
}

//QDate Attribute::getDuration(int from, int to)
//{
//    return this->end - this->begin;
//}

