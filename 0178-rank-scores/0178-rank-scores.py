import pandas as pd

def order_scores(scores: pd.DataFrame) -> pd.DataFrame:
    scores['rank'] = scores['score'].rank(method = "dense",ascending = False,numeric_only=True)
    return scores[['score','rank']].sort_values('score',ascending = False)