void S18_EDM_c_vs_p_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 11:49:50 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-377.2,-3.385692,3394.8,0.730317);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1105[14] = {
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
   Double_t Graph0_fy1105[14] = {
   -2.589442,
   -1.421175,
   -0.4846265,
   -0.3096358,
   -0.2234184,
   -0.2018402,
   -0.1758376,
   -0.1431684,
   -0.1205136,
   -0.1058157,
   -0.1057133,
   -0.07063166,
   -0.0968056,
   0.01812878};
   Double_t Graph0_fex1105[14] = {
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
   Double_t Graph0_fey1105[14] = {
   0.1102492,
   0.03866279,
   0.0289287,
   0.02527166,
   0.0228786,
   0.02101884,
   0.01956502,
   0.01845947,
   0.01777527,
   0.01733338,
   0.01714585,
   0.01728435,
   0.01798051,
   0.02618666};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1105,Graph0_fy1105,Graph0_fex1105,Graph0_fey1105);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01105 = new TH1F("Graph_Graph01105","S18",100,0,3280);
   Graph_Graph01105->SetMinimum(-2.974091);
   Graph_Graph01105->SetMaximum(0.3187161);
   Graph_Graph01105->SetDirectory(0);
   Graph_Graph01105->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01105->SetLineColor(ci);
   Graph_Graph01105->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01105->GetXaxis()->SetRange(1,92);
   Graph_Graph01105->GetXaxis()->CenterTitle(true);
   Graph_Graph01105->GetXaxis()->SetLabelFont(42);
   Graph_Graph01105->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01105->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01105->GetXaxis()->SetTitleFont(42);
   Graph_Graph01105->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01105->GetYaxis()->CenterTitle(true);
   Graph_Graph01105->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01105->GetYaxis()->SetLabelFont(42);
   Graph_Graph01105->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01105->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01105->GetYaxis()->SetTitleFont(42);
   Graph_Graph01105->GetZaxis()->SetLabelFont(42);
   Graph_Graph01105->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01105);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
