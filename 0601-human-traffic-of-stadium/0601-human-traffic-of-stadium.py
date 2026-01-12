import pandas as pd

def human_traffic(stadium: pd.DataFrame) -> pd.DataFrame:
    # Add a 'row_number' column using the index (starts at 0)
    if len(stadium) < 3:
        return stadium
    stadium['row_number'] = stadium.index + 1
    stadium['>=100'] = 1

    # Use .loc to selectively update rows where the condition is True
    stadium.loc[stadium['people'] < 100, '>=100'] = 0
    z = stadium.loc[stadium[">=100"] == 0, "id"]
    b = z.tolist() + [stadium["id"].max()]
    max_index = pd.Series(b).diff().iloc[1:].idxmax()
    if stadium['people'][max_index] < 100:
        max_index -= 1
    window_slize = b[max_index], b[max_index - 1]
    print(window_slize)
    out = stadium.iloc[window_slize[1]: window_slize[0]].drop(columns=['row_number', '>=100'])
    if len(out) < 3:
        return pd.DataFrame(columns=['id', 'visit_date', 'people'])

    return out