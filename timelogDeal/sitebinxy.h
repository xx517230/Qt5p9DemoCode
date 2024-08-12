#ifndef SITEBINXY_H
#define SITEBINXY_H

class SITEBINXY
{
private:
    short site;
    short bin;
    short x;
    short y;
public:
    SITEBINXY();
    short getSite() const;
    void setSite(short newSite);
    short getBin() const;
    void setBin(short newBin);
    short getX() const;
    void setX(short newX);
    short getY() const;
    void setY(short newY);
};

#endif // SITEBINXY_H
