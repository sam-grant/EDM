void S12S18_HistAltAcceptanceWeightingVsMomentum()
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
   
   TH1D *S12S18_ratio_alt__2006 = new TH1D("S12S18_ratio_alt__2006","S12S18",6,1000,2500);
   S12S18_ratio_alt__2006->SetBinContent(1,0.5522917);
   S12S18_ratio_alt__2006->SetBinContent(2,0.5550669);
   S12S18_ratio_alt__2006->SetBinContent(3,0.6035487);
   S12S18_ratio_alt__2006->SetBinContent(4,0.6257361);
   S12S18_ratio_alt__2006->SetBinContent(5,0.5866392);
   S12S18_ratio_alt__2006->SetBinContent(6,0.7227005);
   S12S18_ratio_alt__2006->SetBinError(1,0.03100377);
   S12S18_ratio_alt__2006->SetBinError(2,0.03520232);
   S12S18_ratio_alt__2006->SetBinError(3,0.03932108);
   S12S18_ratio_alt__2006->SetBinError(4,0.0420615);
   S12S18_ratio_alt__2006->SetBinError(5,0.05934736);
   S12S18_ratio_alt__2006->SetBinError(6,0.04723722);
   S12S18_ratio_alt__2006->SetEntries(6);
   S12S18_ratio_alt__2006->SetStats(0);
   S12S18_ratio_alt__2006->SetMarkerStyle(20);
   S12S18_ratio_alt__2006->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S12S18_ratio_alt__2006->GetXaxis()->CenterTitle(true);
   S12S18_ratio_alt__2006->GetXaxis()->SetLabelFont(42);
   S12S18_ratio_alt__2006->GetXaxis()->SetTitleSize(0.04);
   S12S18_ratio_alt__2006->GetXaxis()->SetTitleOffset(1.1);
   S12S18_ratio_alt__2006->GetXaxis()->SetTitleFont(42);
   S12S18_ratio_alt__2006->GetYaxis()->SetTitle("A_{EDM} acceptance factor / 250 MeV");
   S12S18_ratio_alt__2006->GetYaxis()->CenterTitle(true);
   S12S18_ratio_alt__2006->GetYaxis()->SetNdivisions(4000510);
   S12S18_ratio_alt__2006->GetYaxis()->SetLabelFont(42);
   S12S18_ratio_alt__2006->GetYaxis()->SetTitleSize(0.04);
   S12S18_ratio_alt__2006->GetYaxis()->SetTitleOffset(1.1);
   S12S18_ratio_alt__2006->GetYaxis()->SetTitleFont(42);
   S12S18_ratio_alt__2006->GetZaxis()->SetLabelFont(42);
   S12S18_ratio_alt__2006->GetZaxis()->SetTitleOffset(1);
   S12S18_ratio_alt__2006->GetZaxis()->SetTitleFont(42);
   S12S18_ratio_alt__2006->Draw("P");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
