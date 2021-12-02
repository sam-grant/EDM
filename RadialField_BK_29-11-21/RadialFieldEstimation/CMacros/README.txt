0. Beam position histograms are under samweb caloBeamPosPlots_EDM;
1. ReadNearlineTrees produces calo position plots from the nearline;
2. PlotCaloYvsRun produces <y> plots;
3. GetRefPos produces a file for the reference position, and check for bad calos (calos 5 & 9 which are out of line in the mean subtracted plots);
4. CheckCaloAlignment produces an uncertainty associated with calo misalignment;
5. EstimateRadialField converts the <y> plots into <Br> plots and combines all uncertainties;
6. PlotBrVsDS to present results per dataset.
