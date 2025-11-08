import pandas as pd

def nth_highest_salary(employee: pd.DataFrame, N: int) -> pd.DataFrame:
    unique_salaries = employee.sort_values('salary',ascending = False).drop_duplicates(['salary'])
    if(N <= 0 or len(unique_salaries) < N):
        sal = [None]
    else:
        sal = unique_salaries['salary'].iloc[N-1:N]
    return pd.DataFrame({'getNthHighestSalary('+str(N)+')' : sal})