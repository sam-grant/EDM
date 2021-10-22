void full_A_vs_p_truthAllDecays_AAR_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 17 13:21:52 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(187.5,0.1746225,3562.5,0.3261139);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1106[10] = {
   3000,
   2750,
   2500,
   2250,
   2000,
   1750,
   1500,
   1250,
   1000,
   750};
   Double_t Graph0_fy1106[10] = {
   0.2499842,
   0.2534895,
   0.2600096,
   0.2668396,
   0.2766763,
   0.2829288,
   0.2884546,
   0.2901397,
   0.2828229,
   0.2253402};
   Double_t Graph0_fex1106[10] = {
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
   Double_t Graph0_fey1106[10] = {
   0.00554793,
   0.00564095,
   0.005851133,
   0.006202087,
   0.00673663,
   0.007532778,
   0.008746234,
   0.01072567,
   0.01449262,
   0.02546912};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1106,Graph0_fy1106,Graph0_fex1106,Graph0_fey1106);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{max} [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01106 = new TH1F("Graph_Graph01106","",100,525,3225);
   Graph_Graph01106->SetMinimum(0.1897717);
   Graph_Graph01106->SetMaximum(0.3109648);
   Graph_Graph01106->SetDirectory(0);
   Graph_Graph01106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01106->SetLineColor(ci);
   Graph_Graph01106->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_Graph01106->GetXaxis()->SetRange(1,100);
   Graph_Graph01106->GetXaxis()->CenterTitle(true);
   Graph_Graph01106->GetXaxis()->SetLabelFont(42);
   Graph_Graph01106->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01106->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01106->GetXaxis()->SetTitleFont(42);
   Graph_Graph01106->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01106->GetYaxis()->CenterTitle(true);
   Graph_Graph01106->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01106->GetYaxis()->SetLabelFont(42);
   Graph_Graph01106->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01106->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01106->GetYaxis()->SetTitleFont(42);
   Graph_Graph01106->GetZaxis()->SetLabelFont(42);
   Graph_Graph01106->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01106->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01106);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
