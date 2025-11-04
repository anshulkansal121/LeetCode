import pandas as pd

def find_classes(courses: pd.DataFrame) -> pd.DataFrame:
    student_count = courses.groupby('class')[['student']].count().reset_index()
    return student_count[student_count['student'] >= 5][['class']]