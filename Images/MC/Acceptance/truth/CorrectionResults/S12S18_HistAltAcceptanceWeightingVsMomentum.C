void S12S18_HistAltAcceptanceWeightingVsMomentum()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 12:38:04 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S12S18_ratio_alt__2 = new TH1D("S12S18_ratio_alt__2","S12S18",6,1000,2500);
   S12S18_ratio_alt__2->SetBinContent(1,0.5522859);
   S12S18_ratio_alt__2->SetBinContent(2,0.5550667);
   S12S18_ratio_alt__2->SetBinContent(3,0.6035574);
   S12S18_ratio_alt__2->SetBinContent(4,0.6257032);
   S12S18_ratio_alt__2->SetBinContent(5,0.5866217);
   S12S18_ratio_alt__2->SetBinContent(6,0.7226908);
   S12S18_ratio_alt__2->SetBinError(1,0.0309951);
   S12S18_ratio_alt__2->SetBinError(2,0.03520584);
   S12S18_ratio_alt__2->SetBinError(3,0.03932188);
   S12S18_ratio_alt__2->SetBinError(4,0.04208302);
   S12S18_ratio_alt__2->SetBinError(5,0.05937941);
   S12S18_ratio_alt__2->SetBinError(6,0.04729398);
   S12S18_ratio_alt__2->SetEntries(6);
   S12S18_ratio_alt__2->SetStats(0);
   S12S18_ratio_alt__2->SetMarkerStyle(20);
   S12S18_ratio_alt__2->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S12S18_ratio_alt__2->GetXaxis()->CenterTitle(true);
   S12S18_ratio_alt__2->GetXaxis()->SetLabelFont(42);
   S12S18_ratio_alt__2->GetXaxis()->SetTitleSize(0.04);
   S12S18_ratio_alt__2->GetXaxis()->SetTitleOffset(1.1);
   S12S18_ratio_alt__2->GetXaxis()->SetTitleFont(42);
   S12S18_ratio_alt__2->GetYaxis()->SetTitle("A_{EDM} acceptance fraction / 250 MeV");
   S12S18_ratio_alt__2->GetYaxis()->CenterTitle(true);
   S12S18_ratio_alt__2->GetYaxis()->SetNdivisions(4000510);
   S12S18_ratio_alt__2->GetYaxis()->SetLabelFont(42);
   S12S18_ratio_alt__2->GetYaxis()->SetTitleSize(0.04);
   S12S18_ratio_alt__2->GetYaxis()->SetTitleOffset(1.1);
   S12S18_ratio_alt__2->GetYaxis()->SetTitleFont(42);
   S12S18_ratio_alt__2->GetZaxis()->SetLabelFont(42);
   S12S18_ratio_alt__2->GetZaxis()->SetTitleOffset(1);
   S12S18_ratio_alt__2->GetZaxis()->SetTitleFont(42);
   S12S18_ratio_alt__2->Draw("P");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
