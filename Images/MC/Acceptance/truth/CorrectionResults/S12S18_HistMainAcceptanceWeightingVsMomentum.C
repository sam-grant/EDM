void S12S18_HistMainAcceptanceWeightingVsMomentum()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 19:19:34 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S12S18_ratio_main__2005 = new TH1D("S12S18_ratio_main__2005","S12S18",6,1000,2500);
   S12S18_ratio_main__2005->SetBinContent(1,0.394966);
   S12S18_ratio_main__2005->SetBinContent(2,0.4600627);
   S12S18_ratio_main__2005->SetBinContent(3,0.5536347);
   S12S18_ratio_main__2005->SetBinContent(4,0.6001469);
   S12S18_ratio_main__2005->SetBinContent(5,0.6027818);
   S12S18_ratio_main__2005->SetBinContent(6,0.5891708);
   S12S18_ratio_main__2005->SetBinError(1,0.05047315);
   S12S18_ratio_main__2005->SetBinError(2,0.05132248);
   S12S18_ratio_main__2005->SetBinError(3,0.0556446);
   S12S18_ratio_main__2005->SetBinError(4,0.06156342);
   S12S18_ratio_main__2005->SetBinError(5,0.08830089);
   S12S18_ratio_main__2005->SetBinError(6,0.09651334);
   S12S18_ratio_main__2005->SetEntries(6);
   S12S18_ratio_main__2005->SetStats(0);
   S12S18_ratio_main__2005->SetLineWidth(3);
   S12S18_ratio_main__2005->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S12S18_ratio_main__2005->GetXaxis()->CenterTitle(true);
   S12S18_ratio_main__2005->GetXaxis()->SetLabelFont(42);
   S12S18_ratio_main__2005->GetXaxis()->SetTitleSize(0.04);
   S12S18_ratio_main__2005->GetXaxis()->SetTitleOffset(1.1);
   S12S18_ratio_main__2005->GetXaxis()->SetTitleFont(42);
   S12S18_ratio_main__2005->GetYaxis()->SetTitle("A_{EDM} acceptance fraction / 250 MeV");
   S12S18_ratio_main__2005->GetYaxis()->CenterTitle(true);
   S12S18_ratio_main__2005->GetYaxis()->SetNdivisions(4000510);
   S12S18_ratio_main__2005->GetYaxis()->SetLabelFont(42);
   S12S18_ratio_main__2005->GetYaxis()->SetTitleSize(0.04);
   S12S18_ratio_main__2005->GetYaxis()->SetTitleOffset(1.1);
   S12S18_ratio_main__2005->GetYaxis()->SetTitleFont(42);
   S12S18_ratio_main__2005->GetZaxis()->SetLabelFont(42);
   S12S18_ratio_main__2005->GetZaxis()->SetTitleOffset(1);
   S12S18_ratio_main__2005->GetZaxis()->SetTitleFont(42);
   S12S18_ratio_main__2005->Draw("E");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
