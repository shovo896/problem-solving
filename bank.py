class BankAccount:
    def__init__(self,account_number,holder_name,balance=0):
        self.account_number=account_number 
        self.holder_number=holder_number 
        self.balance=balance 
    def deposit(self,accout):
        if amount>0:
            self.balance+=amount
            print(f"{amount} deposoted.New balance:{self.balance}")
        else:
            print("Deposit number must be positive")

    def withdraw(self,amount):
        if amount <= self.balance:
            print(f"{amount}withdraw.New balance:{self.balance}")
        else:
            print("Insufficient balance")
    def __str__(self):
        return f"Account {self.account_number}-Holder:{self.holder_name}-Balance(self.balance)"
    
    