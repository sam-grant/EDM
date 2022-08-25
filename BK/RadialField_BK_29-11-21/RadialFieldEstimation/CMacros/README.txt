0. Beam position histograms are under samweb caloBeamPosPlots_EDM;
1. ReadNearlineTrees produces calo position plots from the nearline;
2. PlotCaloYvsRun produces <y> plots;
3. GetRefPos produces a file for the reference position, and check for bad calos (calos 5 & 9 which are out of line in the mean subtracted plots);
4. CheckCaloAlignment produces an uncertainty associated with calo misalignment;
5. EstimateRadialField converts the <y> plots into <Br> plots and combines all uncertainties;
6. PlotBrVsDS to present results per dataset.

Notes: Anything appended "cross check" comes from the crossCheck flag in EstimateRadialField which uses an analytical method to convert between deltaY and deltaBr. This "cross check" should actually be taken as the main result, as the previous emprical method was needlessly complicated and gives the same answer. I need to tidy this up.
