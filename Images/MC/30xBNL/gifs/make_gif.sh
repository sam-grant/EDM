convert -delay 100 `ls ../MomScan/ThetaY_vs_DecayTime_Modulo_2D_{0..6}_noQ.png | sort -V` ThetaY_vs_DecayTime_Modulo_2D_MomScan_noQ.gif
convert -delay 100 `ls ../MomScan/ThetaY_vs_DecayTime_Modulo_2D_{0..6}_vQ.png | sort -V` ThetaY_vs_DecayTime_Modulo_2D_MomScan_vQ.gif

convert -delay 100 `ls ../MomScan/ThetaY_vs_DecayTime_Modulo_ProjX_{0..6}_noQ.png | sort -V` ThetaY_vs_DecayTime_Modulo_ProjX_MomScan_noQ.gif
convert -delay 100 `ls ../MomScan/ThetaY_vs_DecayTime_Modulo_ProjX_{0..6}_vQ.png | sort -V` ThetaY_vs_DecayTime_Modulo_ProjX_MomScan_vQ.gif
