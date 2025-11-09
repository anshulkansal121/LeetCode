import pandas as pd

def sales_person(sales_person: pd.DataFrame, company: pd.DataFrame, orders: pd.DataFrame) -> pd.DataFrame:
    com_red = company[(company['name']=='RED')]['com_id']
    order_red = orders[orders['com_id'].isin(com_red)]['sales_id']
    return sales_person[~(sales_person['sales_id'].isin(order_red))][['name']]
    