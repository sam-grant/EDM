void dBr_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 18:18:49 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1195850,0.1349558,1.486271e+07,1.628524);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1131[13] = {
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
   Double_t Fits_fy1131[13] = {
   1.376941,
   0.9750441,
   0.7981576,
   0.6944918,
   0.6206075,
   0.5661943,
   0.523104,
   0.4897867,
   0.4619061,
   0.4372046,
   0.4174547,
   0.399414,
   0.384084};
   Double_t Fits_fex1131[13] = {
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
   Double_t Fits_fey1131[13] = {
   0.00265539,
   0.001320126,
   0.0008922795,
   0.0006810042,
   0.0005291539,
   0.0004449801,
   0.0003721077,
   0.0003337521,
   0.0002952302,
   0.0002730822,
   0.0002407121,
   0.0002275279,
   0.0002002024};
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1131,Fits_fy1131,Fits_fex1131,Fits_fey1131);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs;#deltaB_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1131 = new TH1F("Graph_Fits1131","",100,0,1.366686e+07);
   Graph_Fits1131->SetMinimum(0.2843126);
   Graph_Fits1131->SetMaximum(1.479167);
   Graph_Fits1131->SetDirectory(0);
   Graph_Fits1131->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1131->SetLineColor(ci);
   Graph_Fits1131->GetXaxis()->SetTitle("CTAGs");
   Graph_Fits1131->GetXaxis()->SetRange(4,97);
   Graph_Fits1131->GetXaxis()->CenterTitle(true);
   Graph_Fits1131->GetXaxis()->SetLabelFont(42);
   Graph_Fits1131->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1131->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1131->GetXaxis()->SetTitleFont(42);
   Graph_Fits1131->GetYaxis()->SetTitle("#deltaB_{r} [ppm]");
   Graph_Fits1131->GetYaxis()->CenterTitle(true);
   Graph_Fits1131->GetYaxis()->SetNdivisions(4000510);
   Graph_Fits1131->GetYaxis()->SetLabelFont(42);
   Graph_Fits1131->GetYaxis()->SetTitleSize(0.04);
   Graph_Fits1131->GetYaxis()->SetTitleOffset(1.1);
   Graph_Fits1131->GetYaxis()->SetTitleFont(42);
   Graph_Fits1131->GetZaxis()->SetLabelFont(42);
   Graph_Fits1131->GetZaxis()->SetTitleOffset(1);
   Graph_Fits1131->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Fits1131);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(410005.7,1.479167,1.325685e+07,1.479167,14,345,510,"-");
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
