void decayX_vs_decayZ_trackFilter()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun  9 18:19:13 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLogz();
   c->SetRightMargin(0.13);
   c->SetFrameBorderMode(0);
   
   TH2D *decayX_vs_decayZ = new TH2D("decayX_vs_decayZ","",800,-8000,8000,800,-8000,8000);
   decayX_vs_decayZ->SetBinContent(36475,1);
   decayX_vs_decayZ->SetBinContent(36515,1);
   decayX_vs_decayZ->SetBinContent(46021,1);
   decayX_vs_decayZ->SetBinContent(53210,1);
   decayX_vs_decayZ->SetBinContent(71147,1);
   decayX_vs_decayZ->SetBinContent(88827,1);
   decayX_vs_decayZ->SetBinContent(94020,1);
   decayX_vs_decayZ->SetBinContent(145283,1);
   decayX_vs_decayZ->SetBinContent(221283,1);
   decayX_vs_decayZ->SetBinContent(246271,1);
   decayX_vs_decayZ->SetBinContent(275937,1);
   decayX_vs_decayZ->SetBinContent(283859,1);
   decayX_vs_decayZ->SetBinContent(289474,1);
   decayX_vs_decayZ->SetBinContent(295182,1);
   decayX_vs_decayZ->SetBinContent(334386,1);
   decayX_vs_decayZ->SetBinContent(390629,1);
   decayX_vs_decayZ->SetBinContent(477291,1);
   decayX_vs_decayZ->SetBinContent(498966,1);
   decayX_vs_decayZ->SetBinContent(605898,1);
   decayX_vs_decayZ->SetEntries(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   decayX_vs_decayZ->SetLineColor(ci);
   decayX_vs_decayZ->GetXaxis()->SetTitle("Decay position X [mm]");
   decayX_vs_decayZ->GetXaxis()->CenterTitle(true);
   decayX_vs_decayZ->GetXaxis()->SetLabelFont(42);
   decayX_vs_decayZ->GetXaxis()->SetTitleSize(0.04);
   decayX_vs_decayZ->GetXaxis()->SetTitleOffset(1.1);
   decayX_vs_decayZ->GetXaxis()->SetTitleFont(42);
   decayX_vs_decayZ->GetYaxis()->SetTitle("Decay position Z [mm]");
   decayX_vs_decayZ->GetYaxis()->CenterTitle(true);
   decayX_vs_decayZ->GetYaxis()->SetNdivisions(4000510);
   decayX_vs_decayZ->GetYaxis()->SetLabelFont(42);
   decayX_vs_decayZ->GetYaxis()->SetTitleSize(0.04);
   decayX_vs_decayZ->GetYaxis()->SetTitleOffset(1.1);
   decayX_vs_decayZ->GetYaxis()->SetTitleFont(42);
   decayX_vs_decayZ->GetZaxis()->SetLabelFont(42);
   decayX_vs_decayZ->GetZaxis()->SetTitleOffset(1);
   decayX_vs_decayZ->GetZaxis()->SetTitleFont(42);
   decayX_vs_decayZ->Draw("COLZ");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
