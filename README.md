# ATM_Controller
BearRobotics_CodingTest

## 💵 Explanation 💵
I made a Class named 'ATM' and in this class, there are methods named 'work', 'Check_Balance', 'Deposit', and 'Withdraw'.
As a constructor of 'ATM' class, 
### <mark>1. Insert Card :</mark>
Before we use ATM, we should insert card which has the information about the balance of each account. Based on this mechanism, I tried to show the information of card by using vector. Each value of the vector represents the balance of each account. For example, the first value of the vector shows the balance of the first account and so on. In addition, in the main function, I make an object of 'ATM' class with the constructor using this 1 dimensional vector.
### <mark>2. Pin number :</mark> 
I just used "Correct" string so that we can access the account. If you don't type "Correct", you cannot access the account and you have to type again.
### <mark>3. Select account :</mark>
Based on the information of card that is mentioned in the main function, you can choose the account. The thing that you have to be careful is that if you type wrong account number, you have to type again. 
### <mark>4. See Balance :</mark>
If you type option "1", you can check the balance of the account that you chose.
### <mark>5. Deposit :</mark>
If you type option "2", you can deposit money. You have to type the amount of money that you want to deposit.
### <mark>6. Withdraw :</mark>
If you type option "3", you can withdraw money. You have to type the amount of money that you want to withdraw. If you type the the amount of money which is more than in your account, the program will tell you that there is not enough money.
### <mark>7. End :</mark>
If you finished the work, you can end the ATM program.

### How to Clone?
All the cards have the information of the accounts but I think the information that cards have is much more complicated. Because I just simplified the information that cards have, if you want to clone my code, you have to change the way that my code reads the account information from cards.

### Test Code:
4

Correct

99

1

1

2

100

3

1000

2

10000

3

1000

1

4

![image](https://github.com/ItsGJun/ATM_Controller/assets/113964367/68e939d1-4028-4731-b6a0-0f50432f6426)

