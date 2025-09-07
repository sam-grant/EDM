import pandas as pd
from ROOT import TFile, TGraphErrors, TCanvas
import datetime as dt

# 2018-04-22 to 2018-06-28
# 15907 to 17527

# Import dataframe
df = pd.read_csv('../txt/temp_run1.txt')

t_ = df[df.columns[0]].to_numpy()
T_ = df[df.columns[1]].to_numpy()
eT_ = df[df.columns[2]].to_numpy()

print(T_.min())
print(T_.max())

gr = TGraphErrors()

i = 0
for t in t_: 
	# print(dt.date.fromtimestamp(t))
	gr.SetPoint(i, float(t), float(T_[i]))
	gr.SetPointError(i, 0, float(eT_[i]))
	i = i + 1

c = TCanvas()
gr.SetMarkerStyle(20)
gr.Draw("APL")
c.SaveAs("../Images/HallTempRun1.png")

fout = TFile("../Plots/Data/HallTempRun1.root", "RECREATE")
gr.Write("HallTempRun1")
fout.Close()
# t_ = df[["time [s]"]].to_numpy()
# T = df[["T [C]"]].to_numpy()
# eT = df[["eT [C]"]].to_numpy()



