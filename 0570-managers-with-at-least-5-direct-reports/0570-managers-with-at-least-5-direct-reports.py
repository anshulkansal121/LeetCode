import pandas as pd

def find_managers(employee: pd.DataFrame) -> pd.DataFrame:
    count = employee.groupby('managerId')['id'].count().reset_index()
    count = count[count['id'] >= 5]
    return count.merge(employee,left_on = "managerId",right_on="id")[['name']]