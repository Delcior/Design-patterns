//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : polearm.h
//  @ Date : 30.04.2020
//  @ Author : 
//
//


#if !defined(_POLEARM_H)
#define _POLEARM_H

class polearm : public Weapon {
private:
    std::string type="polearm";
public:
    std::string getType(){return type;}
};

#endif  //_POLEARM_H
