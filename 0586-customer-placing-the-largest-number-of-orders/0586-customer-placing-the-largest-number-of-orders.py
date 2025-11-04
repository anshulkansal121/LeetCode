import pandas as pd

def largest_orders(orders: pd.DataFrame) -> pd.DataFrame:
    order_count = orders.groupby('customer_number')['order_number'].count().reset_index()
    return order_count[order_count['order_number'] == order_count['order_number'].max()][['customer_number']]
    