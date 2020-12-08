void Px_vs_t()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 23 13:10:18 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.13);
   c->SetFrameBorderMode(0);
   
   TH2F *Px_vs_t = new TH2F("Px_vs_t","0ppm_20thTurn",6000,0,893.616,220,-3300,3300);
   Px_vs_t->SetBinContent(48015,96);
   Px_vs_t->SetBinContent(54017,222);
   Px_vs_t->SetBinContent(72023,212);
   Px_vs_t->SetBinContent(96031,212);
   Px_vs_t->SetBinContent(132043,212);
   Px_vs_t->SetBinContent(174057,36);
   Px_vs_t->SetBinContent(180059,176);
   Px_vs_t->SetBinContent(228075,84);
   Px_vs_t->SetBinContent(234077,128);
   Px_vs_t->SetBinContent(288095,32);
   Px_vs_t->SetBinContent(294097,180);
   Px_vs_t->SetBinContent(360119,212);
   Px_vs_t->SetBinContent(432143,212);
   Px_vs_t->SetBinContent(504167,6);
   Px_vs_t->SetBinContent(510169,206);
   Px_vs_t->SetBinContent(588195,212);
   Px_vs_t->SetBinContent(666221,124);
   Px_vs_t->SetBinContent(672223,88);
   Px_vs_t->SetBinContent(750249,212);
   Px_vs_t->SetBinContent(828275,212);
   Px_vs_t->SetBinContent(906301,212);
   Px_vs_t->SetBinContent(978325,212);
   Px_vs_t->SetBinContent(1044347,194);
   Px_vs_t->SetBinContent(1050349,18);
   Px_vs_t->SetBinContent(1104367,134);
   Px_vs_t->SetBinContent(1110369,78);
   Px_vs_t->SetBinContent(1158385,186);
   Px_vs_t->SetBinContent(1164387,26);
   Px_vs_t->SetBinContent(1206401,212);
   Px_vs_t->SetBinContent(1242413,212);
   Px_vs_t->SetBinContent(1266421,212);
   Px_vs_t->SetBinContent(1284427,222);
   Px_vs_t->SetBinContent(1290429,96);
   Px_vs_t->SetEntries(5088);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Px_vs_t->SetLineColor(ci);
   Px_vs_t->GetXaxis()->SetTitle("t [ns]");
   Px_vs_t->GetXaxis()->CenterTitle(true);
   Px_vs_t->GetXaxis()->SetLabelFont(42);
   Px_vs_t->GetXaxis()->SetTitleSize(0.04);
   Px_vs_t->GetXaxis()->SetTitleOffset(1.1);
   Px_vs_t->GetXaxis()->SetTitleFont(42);
   Px_vs_t->GetYaxis()->SetTitle("Px [MeV]");
   Px_vs_t->GetYaxis()->CenterTitle(true);
   Px_vs_t->GetYaxis()->SetNdivisions(4000510);
   Px_vs_t->GetYaxis()->SetLabelFont(42);
   Px_vs_t->GetYaxis()->SetTitleSize(0.04);
   Px_vs_t->GetYaxis()->SetTitleOffset(1.1);
   Px_vs_t->GetYaxis()->SetTitleFont(42);
   Px_vs_t->GetZaxis()->SetLabelFont(42);
   Px_vs_t->GetZaxis()->SetTitleOffset(1);
   Px_vs_t->GetZaxis()->SetTitleFont(42);
   Px_vs_t->Draw("COLZ");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
