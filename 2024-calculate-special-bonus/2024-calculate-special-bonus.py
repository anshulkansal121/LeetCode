import pandas as pd

def calculate_special_bonus(employees: pd.DataFrame) -> pd.DataFrame:
    employees['bonus'] = 0
    employees.loc[(employees['employee_id'] % 2 != 0) & (~employees['name'].str.startswith('M')),'bonus'] = employees['salary']
    return employees.sort_values('employee_id')[['employee_id','bonus']]
    

    