void Y_vs_t()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 19 15:36:40 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.13);
   c->SetFrameBorderMode(0);
   
   TH2F *Y_vs_t = new TH2F("Y_vs_t","-705",6000,0,893.616,100,-100,100);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Y_vs_t->SetLineColor(ci);
   Y_vs_t->GetXaxis()->SetTitle("t [ns]");
   Y_vs_t->GetXaxis()->CenterTitle(true);
   Y_vs_t->GetXaxis()->SetLabelFont(42);
   Y_vs_t->GetXaxis()->SetTitleSize(0.04);
   Y_vs_t->GetXaxis()->SetTitleOffset(1.1);
   Y_vs_t->GetXaxis()->SetTitleFont(42);
   Y_vs_t->GetYaxis()->SetTitle("Y [mm]");
   Y_vs_t->GetYaxis()->CenterTitle(true);
   Y_vs_t->GetYaxis()->SetNdivisions(4000510);
   Y_vs_t->GetYaxis()->SetLabelFont(42);
   Y_vs_t->GetYaxis()->SetTitleSize(0.04);
   Y_vs_t->GetYaxis()->SetTitleOffset(1.1);
   Y_vs_t->GetYaxis()->SetTitleFont(42);
   Y_vs_t->GetZaxis()->SetLabelFont(42);
   Y_vs_t->GetZaxis()->SetTitleOffset(1);
   Y_vs_t->GetZaxis()->SetTitleFont(42);
   Y_vs_t->Draw("COLZ");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
