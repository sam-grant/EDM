void decayX_vs_decayZ_truth()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 22 14:00:30 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLogz();
   c->SetRightMargin(0.13);
   c->SetFrameBorderMode(0);
   
   TH2D *DecayZ_vs_DecayX = new TH2D("DecayZ_vs_DecayX","",800,-8000,8000,800,-8000,8000);
   DecayZ_vs_DecayX->SetBinContent(321554,918666);
   DecayZ_vs_DecayX->SetBinContent(321555,5330364);
   DecayZ_vs_DecayX->SetBinContent(321556,1.293698e+07);
   DecayZ_vs_DecayX->SetBinContent(321557,7560326);
   DecayZ_vs_DecayX->SetBinContent(321558,1145291);
   DecayZ_vs_DecayX->SetBinContent(322356,5117573);
   DecayZ_vs_DecayX->SetBinContent(322357,2.898588e+07);
   DecayZ_vs_DecayX->SetBinContent(322358,6.898698e+07);
   DecayZ_vs_DecayX->SetBinContent(322359,3.980382e+07);
   DecayZ_vs_DecayX->SetBinContent(322360,5962240);
   DecayZ_vs_DecayX->SetEntries(1.767481e+08);
   DecayZ_vs_DecayX->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   DecayZ_vs_DecayX->SetLineColor(ci);
   DecayZ_vs_DecayX->GetXaxis()->SetTitle("Decay position X [mm]");
   DecayZ_vs_DecayX->GetXaxis()->CenterTitle(true);
   DecayZ_vs_DecayX->GetXaxis()->SetLabelFont(42);
   DecayZ_vs_DecayX->GetXaxis()->SetTitleSize(0.04);
   DecayZ_vs_DecayX->GetXaxis()->SetTitleOffset(1.1);
   DecayZ_vs_DecayX->GetXaxis()->SetTitleFont(42);
   DecayZ_vs_DecayX->GetYaxis()->SetTitle("Decay position Z [mm]");
   DecayZ_vs_DecayX->GetYaxis()->CenterTitle(true);
   DecayZ_vs_DecayX->GetYaxis()->SetNdivisions(4000510);
   DecayZ_vs_DecayX->GetYaxis()->SetLabelFont(42);
   DecayZ_vs_DecayX->GetYaxis()->SetTitleSize(0.04);
   DecayZ_vs_DecayX->GetYaxis()->SetTitleOffset(1.1);
   DecayZ_vs_DecayX->GetYaxis()->SetTitleFont(42);
   DecayZ_vs_DecayX->GetZaxis()->SetLabelFont(42);
   DecayZ_vs_DecayX->GetZaxis()->SetTitleOffset(1);
   DecayZ_vs_DecayX->GetZaxis()->SetTitleFont(42);
   DecayZ_vs_DecayX->Draw("COLZ");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
