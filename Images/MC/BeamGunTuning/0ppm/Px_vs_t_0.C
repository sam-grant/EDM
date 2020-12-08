void Px_vs_t_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 19 09:53:19 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.13);
   c->SetFrameBorderMode(0);
   
   TH2F *Px_vs_t_0 = new TH2F("Px_vs_t_0","0ppm",6000,0,893.616,110,0,3300);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Px_vs_t_0->SetLineColor(ci);
   Px_vs_t_0->GetXaxis()->SetTitle("t [ns]");
   Px_vs_t_0->GetXaxis()->CenterTitle(true);
   Px_vs_t_0->GetXaxis()->SetLabelFont(42);
   Px_vs_t_0->GetXaxis()->SetTitleSize(0.04);
   Px_vs_t_0->GetXaxis()->SetTitleOffset(1.1);
   Px_vs_t_0->GetXaxis()->SetTitleFont(42);
   Px_vs_t_0->GetYaxis()->SetTitle("Px [MeV]");
   Px_vs_t_0->GetYaxis()->CenterTitle(true);
   Px_vs_t_0->GetYaxis()->SetNdivisions(4000510);
   Px_vs_t_0->GetYaxis()->SetLabelFont(42);
   Px_vs_t_0->GetYaxis()->SetTitleSize(0.04);
   Px_vs_t_0->GetYaxis()->SetTitleOffset(1.1);
   Px_vs_t_0->GetYaxis()->SetTitleFont(42);
   Px_vs_t_0->GetZaxis()->SetLabelFont(42);
   Px_vs_t_0->GetZaxis()->SetTitleOffset(1);
   Px_vs_t_0->GetZaxis()->SetTitleFont(42);
   Px_vs_t_0->Draw("COLZ");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
