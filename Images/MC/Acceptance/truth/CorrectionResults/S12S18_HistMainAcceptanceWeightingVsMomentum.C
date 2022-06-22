void S12S18_HistMainAcceptanceWeightingVsMomentum()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun  3 03:41:31 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S12S18_ratio_main__2005 = new TH1D("S12S18_ratio_main__2005","S12S18",6,1000,2500);
   S12S18_ratio_main__2005->SetBinContent(1,0.3950764);
   S12S18_ratio_main__2005->SetBinContent(2,0.4600167);
   S12S18_ratio_main__2005->SetBinContent(3,0.5536233);
   S12S18_ratio_main__2005->SetBinContent(4,0.5998401);
   S12S18_ratio_main__2005->SetBinContent(5,0.6024564);
   S12S18_ratio_main__2005->SetBinContent(6,0.5884637);
   S12S18_ratio_main__2005->SetBinError(1,0.05047893);
   S12S18_ratio_main__2005->SetBinError(2,0.05132501);
   S12S18_ratio_main__2005->SetBinError(3,0.05564692);
   S12S18_ratio_main__2005->SetBinError(4,0.06156424);
   S12S18_ratio_main__2005->SetBinError(5,0.08830177);
   S12S18_ratio_main__2005->SetBinError(6,0.09650543);
   S12S18_ratio_main__2005->SetEntries(6);
   S12S18_ratio_main__2005->SetStats(0);
   S12S18_ratio_main__2005->SetMarkerStyle(20);
   S12S18_ratio_main__2005->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S12S18_ratio_main__2005->GetXaxis()->CenterTitle(true);
   S12S18_ratio_main__2005->GetXaxis()->SetLabelFont(42);
   S12S18_ratio_main__2005->GetXaxis()->SetTitleSize(0.04);
   S12S18_ratio_main__2005->GetXaxis()->SetTitleOffset(1.1);
   S12S18_ratio_main__2005->GetXaxis()->SetTitleFont(42);
   S12S18_ratio_main__2005->GetYaxis()->SetTitle("A_{EDM} acceptance factor / 250 MeV");
   S12S18_ratio_main__2005->GetYaxis()->CenterTitle(true);
   S12S18_ratio_main__2005->GetYaxis()->SetNdivisions(4000510);
   S12S18_ratio_main__2005->GetYaxis()->SetLabelFont(42);
   S12S18_ratio_main__2005->GetYaxis()->SetTitleSize(0.04);
   S12S18_ratio_main__2005->GetYaxis()->SetTitleOffset(1.1);
   S12S18_ratio_main__2005->GetYaxis()->SetTitleFont(42);
   S12S18_ratio_main__2005->GetZaxis()->SetLabelFont(42);
   S12S18_ratio_main__2005->GetZaxis()->SetTitleOffset(1);
   S12S18_ratio_main__2005->GetZaxis()->SetTitleFont(42);
   S12S18_ratio_main__2005->Draw("P");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
