import pandas as pd

def department_highest_salary(employee: pd.DataFrame, department: pd.DataFrame) -> pd.DataFrame:
    filtered = employee.merge(department, left_on = "departmentId",right_on = "id").rename(columns = {
        'name_x':'Employee',
        'name_y':'Department',
        'salary':'Salary'
    })[['Department','Employee','Salary']]
    return filtered[filtered['Salary']==filtered.groupby('Department').Salary.transform(max)]