import pandas as pd
from array import array
from ROOT import TGraph, TCanvas, TFile

# Set up array of doubles for mean QHV 
runs_ = array('d')
QHV_ = array('d')
x_ = array('d')

# Datasets
datasets = ['gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2', 'gm2pro_daq_full_run1_HighKick_5042B_GLdocDB20949-v3',
		'gm2pro_daq_full_run1_9d_5040A_GLdocDB17018-v3', 'gm2pro_daq_full_run1_EndGame_5042B_GLdocDB20839-v1', 
		'gm2pro_daq_offline_dqc_run2B', 'gm2pro_daq_offline_dqc_run2C', 'gm2pro_daq_offline_dqc_run2D',
		'gm2pro_daq_offline_dqc_run2E', 'gm2pro_daq_offline_dqc_run2F', 'gm2pro_daq_offline_dqc_run2G',
		'gm2pro_daq_offline_dqc_run2H', 'gm2pro_daq_offline_dqc_run3NW', 'gm2pro_daq_offline_dqc_run3OW']

# Loop (not ideal but no option here)
for i in range(len(datasets)):

	print(datasets[i])

	# Get run numbers
	runs = pd.read_csv('txt/runNumbers/'+datasets[i]+'.txt', header=None)

	meanQHV = 0

	# Loop through runs
	for j in range(len(runs)):

		# Get run 
		run = runs[0].iloc[j]

		# Get dataframe for that run
		data = pd.read_csv('txt/tables/'+str(run)+'.txt', delimiter = "|", header=None)

		# Get mean QHV 
		QHV = data[4]
		QHV = pd.to_numeric(QHV, errors='coerce')

		meanQHV += QHV.mean()

	meanQHV = meanQHV/len(runs)

	print('Mean QHV is ', meanQHV)

	QHV_.append(meanQHV)
	x_.append(i+1.)


# Define graph
gr = TGraph(len(x_), x_, QHV_)

names = ['1a', '1b', '1c', '1d', '2b', '2c', '2d', '2e', '2f', '2g', '2h', '3N', '3O']

for i in range(len(x_)): 
	gr.GetXaxis().SetBinLabel(gr.GetXaxis().FindBin(i+1.), names[i])

c = TCanvas('c', 'c', 800, 600)

gr.SetTitle(';Dataset;QHV [kV]')
gr.SetMarkerStyle(20)
gr.GetXaxis().CenterTitle(1)
gr.GetYaxis().CenterTitle(1)
gr.GetXaxis().SetTitleSize(.04)
gr.GetYaxis().SetTitleSize(.04)
gr.GetXaxis().SetTitleOffset(1.1)
gr.GetYaxis().SetTitleOffset(1.2)
gr.GetXaxis().LabelsOption("h")
gr.Draw('0APL')

c.SaveAs('../../Images/Data/DB/QHV_vs_DS.png')
c.SaveAs('../../Images/Data/DB/QHV_vs_DS.pdf')
c.SaveAs('../../Images/Data/DB/QHV_vs_DS.C')

# Set output
fout = TFile('../../Plots/Data/DB/QHV_vs_DS.root', 'RECREATE')


fout.mkdir('plots')
fout.cd('plots')
gr.SetName('QHV_vs_DS')
gr.Write()
fout.Close()

print('Plots written to ',fout)