void dBr_250()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct  8 17:32:50 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__19 = new TH1D("__19","Number of sub-runs: 250",300,0,3);
   __19->SetBinContent(0,498);
   __19->SetBinContent(50,4);
   __19->SetBinContent(51,27);
   __19->SetBinContent(52,106);
   __19->SetBinContent(53,168);
   __19->SetBinContent(54,125);
   __19->SetBinContent(55,54);
   __19->SetBinContent(56,16);
   __19->SetBinContent(57,2);
   __19->SetEntries(1000);
   __19->SetLineWidth(3);
   __19->GetXaxis()->SetTitle("Background #deltaB_{r} [ppm]");
   __19->GetXaxis()->CenterTitle(true);
   __19->GetXaxis()->SetLabelFont(42);
   __19->GetXaxis()->SetTitleSize(0.04);
   __19->GetXaxis()->SetTitleOffset(1.1);
   __19->GetXaxis()->SetTitleFont(42);
   __19->GetYaxis()->SetTitle("Experiments");
   __19->GetYaxis()->CenterTitle(true);
   __19->GetYaxis()->SetNdivisions(4000510);
   __19->GetYaxis()->SetLabelFont(42);
   __19->GetYaxis()->SetTitleSize(0.04);
   __19->GetYaxis()->SetTitleOffset(1.1);
   __19->GetYaxis()->SetTitleFont(42);
   __19->GetZaxis()->SetLabelFont(42);
   __19->GetZaxis()->SetTitleOffset(1);
   __19->GetZaxis()->SetTitleFont(42);
   __19->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
