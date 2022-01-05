void Br_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:35:46 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1672340,6.513463,1.505105e+07,9.476057);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1105[13] = {
   2522568,
   5027864,
   7576235,
   1.011936e+07,
   1.266924e+07,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fy1105[13] = {
   7.99476,
   8.00886,
   7.98968,
   7.98598,
   7.99028,
   7.99,
   7.99,
   7.99,
   7.99,
   7.99,
   7.99,
   7.99,
   7.99};
   Double_t Graph0_fex1105[13] = {
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
   Double_t Graph0_fey1105[13] = {
   0.9875315,
   0.6982605,
   0.569158,
   0.4919425,
   0.439626,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(13,Graph0_fx1105,Graph0_fy1105,Graph0_fex1105,Graph0_fey1105);
   gre->SetName("Graph0");
   gre->SetTitle(";CTAGs / setting;#LTB_{r}^{b}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01105 = new TH1F("Graph_Graph01105","",100,0,1.393616e+07);
   Graph_Graph01105->SetMinimum(6.809722);
   Graph_Graph01105->SetMaximum(9.179798);
   Graph_Graph01105->SetDirectory(0);
   Graph_Graph01105->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01105->SetLineColor(ci);
   Graph_Graph01105->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_Graph01105->GetXaxis()->SetRange(1,96);
   Graph_Graph01105->GetXaxis()->CenterTitle(true);
   Graph_Graph01105->GetXaxis()->SetLabelFont(42);
   Graph_Graph01105->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01105->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01105->GetXaxis()->SetTitleFont(42);
   Graph_Graph01105->GetYaxis()->SetTitle("#LTB_{r}^{b}#GT [ppm]");
   Graph_Graph01105->GetYaxis()->CenterTitle(true);
   Graph_Graph01105->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01105->GetYaxis()->SetLabelFont(42);
   Graph_Graph01105->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01105->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01105->GetYaxis()->SetTitleFont(42);
   Graph_Graph01105->GetZaxis()->SetLabelFont(42);
   Graph_Graph01105->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01105);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,9.179798,1.337872e+07,9.179798,0,344.5,510,"-");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.04);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1.1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Sub-runs / setting");

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
