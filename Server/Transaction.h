#ifndef TRANSACTION_H
#define TRANSACTION_H


#include <string>
#include "DatabaseConnector.h"
#include "Account.h"
#include "Utility.h"


using namespace std;


class Transaction {
private:
   DatabaseConnector* db;
   Account* account;
public:
   Transaction(DatabaseConnector* connector, Account* acc);
   bool processDeposit(int accountId, double amount);
   bool processWithdrawal(int accountId, double amount);
   bool processTransfer(int senderAccountId, int receiverAccountId, double amount);
};


#endif // TRANSACTION_H
