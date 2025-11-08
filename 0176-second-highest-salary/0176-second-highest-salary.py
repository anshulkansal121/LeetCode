import pandas as pd

def second_highest_salary(employee: pd.DataFrame) -> pd.DataFrame:
    unique_salaries = employee.sort_values('salary',ascending=False).drop_duplicates('salary')
    if len(unique_salaries) < 2:
        second_salary = None
    else:
        second_salary = unique_salaries.iloc[1][1]
    
    return pd.DataFrame({'SecondHighestSalary': [second_salary]})