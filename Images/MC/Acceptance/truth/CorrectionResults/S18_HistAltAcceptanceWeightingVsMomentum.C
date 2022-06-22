void S18_HistAltAcceptanceWeightingVsMomentum()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun  3 03:41:27 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S18_ratio_alt__1004 = new TH1D("S18_ratio_alt__1004","S18",6,1000,2500);
   S18_ratio_alt__1004->SetBinContent(1,0.5449746);
   S18_ratio_alt__1004->SetBinContent(2,0.5570115);
   S18_ratio_alt__1004->SetBinContent(3,0.6066434);
   S18_ratio_alt__1004->SetBinContent(4,0.6169807);
   S18_ratio_alt__1004->SetBinContent(5,0.5822527);
   S18_ratio_alt__1004->SetBinContent(6,0.7097404);
   S18_ratio_alt__1004->SetBinError(1,0.02624445);
   S18_ratio_alt__1004->SetBinError(2,0.03604472);
   S18_ratio_alt__1004->SetBinError(3,0.03658584);
   S18_ratio_alt__1004->SetBinError(4,0.03940738);
   S18_ratio_alt__1004->SetBinError(5,0.04602204);
   S18_ratio_alt__1004->SetBinError(6,0.05613425);
   S18_ratio_alt__1004->SetEntries(6);
   S18_ratio_alt__1004->SetStats(0);
   S18_ratio_alt__1004->SetMarkerStyle(20);
   S18_ratio_alt__1004->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S18_ratio_alt__1004->GetXaxis()->CenterTitle(true);
   S18_ratio_alt__1004->GetXaxis()->SetLabelFont(42);
   S18_ratio_alt__1004->GetXaxis()->SetTitleSize(0.04);
   S18_ratio_alt__1004->GetXaxis()->SetTitleOffset(1.1);
   S18_ratio_alt__1004->GetXaxis()->SetTitleFont(42);
   S18_ratio_alt__1004->GetYaxis()->SetTitle("A_{EDM} acceptance factor / 250 MeV");
   S18_ratio_alt__1004->GetYaxis()->CenterTitle(true);
   S18_ratio_alt__1004->GetYaxis()->SetNdivisions(4000510);
   S18_ratio_alt__1004->GetYaxis()->SetLabelFont(42);
   S18_ratio_alt__1004->GetYaxis()->SetTitleSize(0.04);
   S18_ratio_alt__1004->GetYaxis()->SetTitleOffset(1.1);
   S18_ratio_alt__1004->GetYaxis()->SetTitleFont(42);
   S18_ratio_alt__1004->GetZaxis()->SetLabelFont(42);
   S18_ratio_alt__1004->GetZaxis()->SetTitleOffset(1);
   S18_ratio_alt__1004->GetZaxis()->SetTitleFont(42);
   S18_ratio_alt__1004->Draw("P");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
