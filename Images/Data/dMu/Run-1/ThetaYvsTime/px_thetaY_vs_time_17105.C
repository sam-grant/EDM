void px_thetaY_vs_time_17105()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 13:25:44 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TProfile *S12S18_ThetaY_vs_Time_pfx = new TProfile("S12S18_ThetaY_vs_Time_pfx","17105",40,0,399.856,"");
   S12S18_ThetaY_vs_Time_pfx->SetBinEntries(4,2);
   S12S18_ThetaY_vs_Time_pfx->SetBinEntries(7,2);
   S12S18_ThetaY_vs_Time_pfx->SetBinEntries(9,1);
   S12S18_ThetaY_vs_Time_pfx->SetBinContent(4,36.45107);
   S12S18_ThetaY_vs_Time_pfx->SetBinContent(7,128.6508);
   S12S18_ThetaY_vs_Time_pfx->SetBinContent(9,-8.040678);
   S12S18_ThetaY_vs_Time_pfx->SetBinError(4,86.5576);
   S12S18_ThetaY_vs_Time_pfx->SetBinError(7,90.97304);
   S12S18_ThetaY_vs_Time_pfx->SetBinError(9,8.040678);
   S12S18_ThetaY_vs_Time_pfx->SetEntries(5);
   S12S18_ThetaY_vs_Time_pfx->GetXaxis()->SetTitle("Decay time [#mus]");
   S12S18_ThetaY_vs_Time_pfx->GetXaxis()->CenterTitle(true);
   S12S18_ThetaY_vs_Time_pfx->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_vs_Time_pfx->GetXaxis()->SetTitleSize(0.04);
   S12S18_ThetaY_vs_Time_pfx->GetXaxis()->SetTitleOffset(1.1);
   S12S18_ThetaY_vs_Time_pfx->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_vs_Time_pfx->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   S12S18_ThetaY_vs_Time_pfx->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_vs_Time_pfx->GetYaxis()->SetNdivisions(4000510);
   S12S18_ThetaY_vs_Time_pfx->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_vs_Time_pfx->GetYaxis()->SetTitleSize(0.04);
   S12S18_ThetaY_vs_Time_pfx->GetYaxis()->SetTitleOffset(1.1);
   S12S18_ThetaY_vs_Time_pfx->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_vs_Time_pfx->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_vs_Time_pfx->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_vs_Time_pfx->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_vs_Time_pfx->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
