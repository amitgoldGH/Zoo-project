#pragma once
#ifndef __WALLET_H
#define __WALLET_H

class Wallet
{

public:
	void set_Amount(int sum);	//set initial amount in wallet
	int get_Money();			//get sum in wallet
	int pay_Money(int amount);	//decrease specific amount of money

private:
	int money;					//current sum in wallet
};

#endif