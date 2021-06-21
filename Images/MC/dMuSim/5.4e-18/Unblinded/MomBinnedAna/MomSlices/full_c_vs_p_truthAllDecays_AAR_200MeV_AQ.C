void full_c_vs_p_truthAllDecays_AAR_200MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 18 15:33:43 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-7.590514e-05,3605.25,5.096843e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1049[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1049[15] = {
   -2.116473e-05,
   -3.324812e-05,
   1.485576e-05,
   -1.570816e-05,
   8.146843e-07,
   -1.897686e-05,
   -3.744414e-06,
   6.445123e-06,
   4.82192e-06,
   -7.317556e-06,
   1.097855e-06,
   2.698648e-06,
   7.29829e-07,
   7.003486e-06,
   7.939214e-06};
   Double_t Graph0_fex1049[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1049[15] = {
   3.359482e-05,
   2.016237e-05,
   1.496707e-05,
   1.227424e-05,
   1.057054e-05,
   9.379399e-06,
   8.509658e-06,
   7.853026e-06,
   7.364983e-06,
   6.9911e-06,
   6.741473e-06,
   6.606738e-06,
   6.624342e-06,
   6.843542e-06,
   7.595156e-06};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1049,Graph0_fy1049,Graph0_fex1049,Graph0_fey1049);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+} p_{WORLD} [MeV] in range: p #minus 100 < p < p #plus 100 MeV;c [rad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01049 = new TH1F("Graph_Graph01049","",100,0,3300);
   Graph_Graph01049->SetMinimum(-6.321778e-05);
   Graph_Graph01049->SetMaximum(3.828107e-05);
   Graph_Graph01049->SetDirectory(0);
   Graph_Graph01049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01049->SetLineColor(ci);
   Graph_Graph01049->GetXaxis()->SetTitle("e^{+} p_{WORLD} [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01049->GetXaxis()->SetRange(0,97);
   Graph_Graph01049->GetXaxis()->CenterTitle(true);
   Graph_Graph01049->GetXaxis()->SetLabelFont(42);
   Graph_Graph01049->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01049->GetXaxis()->SetTitleFont(42);
   Graph_Graph01049->GetYaxis()->SetTitle("c [rad]");
   Graph_Graph01049->GetYaxis()->CenterTitle(true);
   Graph_Graph01049->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01049->GetYaxis()->SetLabelFont(42);
   Graph_Graph01049->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01049->GetYaxis()->SetTitleFont(42);
   Graph_Graph01049->GetZaxis()->SetLabelFont(42);
   Graph_Graph01049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01049);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
