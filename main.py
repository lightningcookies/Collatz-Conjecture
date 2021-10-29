import pandas as pd
import plotly.express as px
import os

if not os.path.exists("images"):
    os.mkdir("images")

df = pd.read_csv('/Users/Davis/CLionProjects/untitled/cmake-build-debug/steps.csv')
print(df)
#fig = px.scatter(df, x = 'Input Value', y = 'Steps', title='Cortez Conjecture')
#fig.update_traces(marker_size=1)
#fig.write_image("images/fig1.png", height=4320, width=7680)