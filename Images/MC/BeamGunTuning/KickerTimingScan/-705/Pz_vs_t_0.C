void Pz_vs_t_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 19 15:36:41 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.13);
   c->SetFrameBorderMode(0);
   
   TH2F *Pz_vs_t_0 = new TH2F("Pz_vs_t_0","-705",6000,0,893.616,110,0,3300);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Pz_vs_t_0->SetLineColor(ci);
   Pz_vs_t_0->GetXaxis()->SetTitle("t [ns]");
   Pz_vs_t_0->GetXaxis()->CenterTitle(true);
   Pz_vs_t_0->GetXaxis()->SetLabelFont(42);
   Pz_vs_t_0->GetXaxis()->SetTitleSize(0.04);
   Pz_vs_t_0->GetXaxis()->SetTitleOffset(1.1);
   Pz_vs_t_0->GetXaxis()->SetTitleFont(42);
   Pz_vs_t_0->GetYaxis()->SetTitle("Pz [MeV]");
   Pz_vs_t_0->GetYaxis()->CenterTitle(true);
   Pz_vs_t_0->GetYaxis()->SetNdivisions(4000510);
   Pz_vs_t_0->GetYaxis()->SetLabelFont(42);
   Pz_vs_t_0->GetYaxis()->SetTitleSize(0.04);
   Pz_vs_t_0->GetYaxis()->SetTitleOffset(1.1);
   Pz_vs_t_0->GetYaxis()->SetTitleFont(42);
   Pz_vs_t_0->GetZaxis()->SetLabelFont(42);
   Pz_vs_t_0->GetZaxis()->SetTitleOffset(1);
   Pz_vs_t_0->GetZaxis()->SetTitleFont(42);
   Pz_vs_t_0->Draw("COLZ");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
