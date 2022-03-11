#include "Account.hpp"
# include <iostream>
# include <ctime>

int	Account::_nbAccounts=0;
int Account::_totalAmount=0;
int Account::_totalNbDeposits=0;
int Account::_totalNbWithdrawals=0;

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout<<"index:"<< this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void time_format(int i)
{
    if (i < 10)
        std::cout << "0" << i;
    else
        std::cout << i;
}

void Account::_displayTimestamp()
{
    std::time_t result = std::time(0);
    tm *t = std::localtime(&result);
    std::cout << "[" << t->tm_year + 1900;
    time_format(t->tm_mon + 1);
    time_format(t->tm_mday);
    std::cout << "_";
    time_format(t->tm_hour);
    time_format(t->tm_min);
    time_format(t->tm_sec);
    std::cout << "] ";
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts;
    std::cout << ";total:" << _totalAmount;
    std::cout << ";deposits:" << _totalNbDeposits;
    std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{
    (void)initial_deposit;
    this->_accountIndex = _nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:"<< this->_accountIndex <<";amount:" << this->_amount << ";created" << std::endl;
    _nbAccounts++;
}
void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:"<< this->_accountIndex;
    std::cout <<";p_amount:" << this->_amount;
    std::cout << ";deposit:" << deposit;
    this->_amount += deposit;
    std::cout <<";amount:" << this->_amount;
    this->_nbDeposits++;
    std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
    _totalAmount += deposit;
    _totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:"<< this->_accountIndex;
    std::cout <<";p_amount:" << this->_amount;
    std::cout << ";withdrawal:";
    if (this->_amount < withdrawal)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    std::cout << withdrawal;
    this->_amount -= withdrawal;
    _totalAmount -= withdrawal;
    std::cout <<";amount:" << this->_amount;
    this->_nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout <<";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return(true);
}

int		Account::checkAmount( void ) const
{
    return(this->_amount);
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:"<< this->_accountIndex;
    std::cout <<";amount:" << this->_amount;
    std::cout << ";deposits:" << this->_nbDeposits;
    std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}