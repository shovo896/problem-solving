class BankAccount:
    def__init__(self,account_number,holder_name,balance=0):
        self.account_number=account_number 
        self.holder_number=holder_number 
        self.balance=balance 
    def deposit(self,accout):
        if amount>0:
            self.balance+=amount
            print(f"{amount} deposoted.New balance:{self.balance}")