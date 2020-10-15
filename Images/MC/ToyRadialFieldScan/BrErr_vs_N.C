void BrErr_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct 14 23:20:01 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.1417526,1.491396e+07,1.738903);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1158[13] = {
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
   Double_t Fits_fy1158[13] = {
   1.472711,
   1.034487,
   0.8486152,
   0.7367007,
   0.6596216,
   0.6013691,
   0.5568074,
   0.5200703,
   0.4905457,
   0.465205,
   0.4438487,
   0.4248802,
   0.4079442};
   Double_t Fits_fex1158[13] = {
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
   Double_t Fits_fey1158[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1158,Fits_fy1158,Fits_fex1158,Fits_fey1158);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs;#deltaB_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1158 = new TH1F("Graph_Fits1158","",100,0,1.366686e+07);
   Graph_Fits1158->SetMinimum(0.3014676);
   Graph_Fits1158->SetMaximum(1.579188);
   Graph_Fits1158->SetDirectory(0);
   Graph_Fits1158->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1158->SetLineColor(ci);
   Graph_Fits1158->GetXaxis()->SetTitle("CTAGs");
   Graph_Fits1158->GetXaxis()->SetRange(1,97);
   Graph_Fits1158->GetXaxis()->CenterTitle(true);
   Graph_Fits1158->GetXaxis()->SetLabelFont(42);
   Graph_Fits1158->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1158->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1158->GetXaxis()->SetTitleFont(42);
   Graph_Fits1158->GetYaxis()->SetTitle("#deltaB_{r} [ppm]");
   Graph_Fits1158->GetYaxis()->CenterTitle(true);
   Graph_Fits1158->GetYaxis()->SetNdivisions(4000510);
   Graph_Fits1158->GetYaxis()->SetLabelFont(42);
   Graph_Fits1158->GetYaxis()->SetTitleSize(0.04);
   Graph_Fits1158->GetYaxis()->SetTitleOffset(1.1);
   Graph_Fits1158->GetYaxis()->SetTitleFont(42);
   Graph_Fits1158->GetZaxis()->SetLabelFont(42);
   Graph_Fits1158->GetZaxis()->SetTitleOffset(1);
   Graph_Fits1158->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Fits1158);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,1.579188,1.325685e+07,1.579188,0,344.5,510,"-");
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
