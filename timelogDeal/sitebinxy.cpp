#include "sitebinxy.h"

short SITEBINXY::getSite() const
{
    return site;
}

void SITEBINXY::setSite(short newSite)
{
    site = newSite;
}

short SITEBINXY::getBin() const
{
    return bin;
}

void SITEBINXY::setBin(short newBin)
{
    bin = newBin;
}

short SITEBINXY::getX() const
{
    return x;
}

void SITEBINXY::setX(short newX)
{
    x = newX;
}

short SITEBINXY::getY() const
{
    return y;
}

void SITEBINXY::setY(short newY)
{
    y = newY;
}

SITEBINXY::SITEBINXY()
{

}
