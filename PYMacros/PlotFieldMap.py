from ROOT import *

import pandas as pd

import numpy as np

import root_numpy #import array2hist

field_df = pd.read_csv('../txt/SCC/field-map-run4-production-03.txt', header = None)

# print(field_df.shape)

field_array = field_df.to_numpy()
field_array = field_array.reshape([91,91])/1.45*1e6
print(field_array) #.shape)

# print(field_array.size())

# Loop thro' field and fill a TH2

hist = TH2D('field','field', 91, -45, 45, 91, -45, 45)
# 
# root_numpy.fill_hist(hist, field_array) #, weights=None, return_indices=False)
# 
# for i, j in enumerate(field_array):
# 	for val in j:
#  		hist.Fill(x,y)
# 
# c = TCanvas()
# hist.Draw()
# 
# c.SaveAs('tmp.png')

