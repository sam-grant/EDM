import pandas as pd
from ROOT import TFile, TGraph, TH1D

data = pd.read_csv('yCOD_HV18300V.txt', sep='	')
print(data.columns.values.tolist())