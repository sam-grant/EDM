void BrErr_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:40:02 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.08495895,1.491396e+07,1.007483);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1340[13] = {
   980385,
   1945311,
   2907125,
   3831858,
   4797147,
   5761945,
   6724437,
   7689564,
   8654560,
   9619580,
   1.058317e+07,
   1.154995e+07,
   1.251354e+07};
   Double_t Fits_fy1340[13] = {
   0.853729,
   0.6057683,
   0.495303,
   0.4314639,
   0.3855962,
   0.3519518,
   0.3256768,
   0.3045543,
   0.2869843,
   0.2722514,
   0.2596829,
   0.2484375,
   0.238713};
   Double_t Fits_fex1340[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Fits_fey1340[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1340,Fits_fy1340,Fits_fex1340,Fits_fey1340);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs;#deltaB_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1340 = new TH1F("Graph_Fits1340","",100,0,1.366686e+07);
   Graph_Fits1340->SetMinimum(0.1772114);
   Graph_Fits1340->SetMaximum(0.9152306);
   Graph_Fits1340->SetDirectory(0);
   Graph_Fits1340->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1340->SetLineColor(ci);
   Graph_Fits1340->GetXaxis()->SetTitle("CTAGs");
   Graph_Fits1340->GetXaxis()->SetRange(1,97);
   Graph_Fits1340->GetXaxis()->CenterTitle(true);
   Graph_Fits1340->GetXaxis()->SetLabelFont(42);
   Graph_Fits1340->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1340->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1340->GetXaxis()->SetTitleFont(42);
   Graph_Fits1340->GetYaxis()->SetTitle("#deltaB_{r} [ppm]");
   Graph_Fits1340->GetYaxis()->CenterTitle(true);
   Graph_Fits1340->GetYaxis()->SetNdivisions(4000510);
   Graph_Fits1340->GetYaxis()->SetLabelFont(42);
   Graph_Fits1340->GetYaxis()->SetTitleSize(0.04);
   Graph_Fits1340->GetYaxis()->SetTitleOffset(1.1);
   Graph_Fits1340->GetYaxis()->SetTitleFont(42);
   Graph_Fits1340->GetZaxis()->SetLabelFont(42);
   Graph_Fits1340->GetZaxis()->SetTitleOffset(1);
   Graph_Fits1340->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Fits1340);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,0.9152306,1.325685e+07,0.9152306,0,344.5,510,"-");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.04);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1.1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Sub-runs");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
