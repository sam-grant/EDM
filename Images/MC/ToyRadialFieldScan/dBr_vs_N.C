void dBr_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 12 12:24:51 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1195850,0.1359723,1.486271e+07,1.623345);
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
   1.372701,
   0.9747047,
   0.7978034,
   0.6950332,
   0.6201398,
   0.5663276,
   0.5241016,
   0.4896623,
   0.4612824,
   0.4376821,
   0.4169585,
   0.3997375,
   0.3840703};
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
   0.00274824,
   0.001299362,
   0.0008797831,
   0.0006900095,
   0.0005371172,
   0.0004352582,
   0.000361642,
   0.0003432845,
   0.0003065752,
   0.0002709771,
   0.0002513904,
   0.0002242822,
   0.000202499};
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1131,Fits_fy1131,Fits_fex1131,Fits_fey1131);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs;#deltaB_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1131 = new TH1F("Graph_Fits1131","",100,0,1.366686e+07);
   Graph_Fits1131->SetMinimum(0.2847096);
   Graph_Fits1131->SetMaximum(1.474608);
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
   TGaxis *gaxis = new TGaxis(410005.7,1.474608,1.325685e+07,1.474608,14,345,510,"-");
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
