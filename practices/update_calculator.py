#RV 7th updating calculator

def print_expense(category_name, amount, income):
    percentage = round((amount / income) * 100, 2)
    print(f"You pay ${amount:.2f} for {category_name} each month, that is {percentage}% of your income")


income = input("What is your monthly income:\n")
rent = input("What is your monthly rent:\n")
utilities = input("What is your monthly pay in utilities:\n")
groceries = input("How much do you spend on groceries each month:\n")
transportation = input("How much do you spend on transportation monthly:\n")


income_num = float(income)
rent_num = float(rent)
utilities_num = float(utilities)
groceries_num = float(groceries)
transportation_num = float(transportation)


print_expense("rent", rent_num, income_num)
print_expense("utilities", utilities_num, income_num)
print_expense("groceries", groceries_num, income_num)
print_expense("transportation", transportation_num, income_num)


recommended_savings = round(income_num * 0.1, 2)
print(f"You should save ${recommended_savings} each month. That is 10% of your income.")


total_spent = rent_num + utilities_num + groceries_num + transportation_num + recommended_savings
leftover = round(income_num - total_spent, 2)
print(f"Your total spending money (after expenses and savings) is: ${leftover}")