void BrErr_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:52:33 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.2188863,1.491396e+07,2.804448);
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
   2.373521,
   1.65152,
   1.356101,
   1.174249,
   1.052269,
   0.9586292,
   0.8876336,
   0.8283954,
   0.7816191,
   0.7411353,
   0.7073862,
   0.6771135,
   0.6498133};
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
   Graph_Fits1158->SetMinimum(0.4774425);
   Graph_Fits1158->SetMaximum(2.545892);
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
   TGaxis *gaxis = new TGaxis(0,2.545892,1.325685e+07,2.545892,0,344.5,510,"-");
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
