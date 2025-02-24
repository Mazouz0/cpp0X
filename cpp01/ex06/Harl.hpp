#pragma once

#include <iostream>


class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:
	void complain( std::string level );
};

typedef void(Harl::*fun_ptr)(void);
int	get_lvl(std::string level);