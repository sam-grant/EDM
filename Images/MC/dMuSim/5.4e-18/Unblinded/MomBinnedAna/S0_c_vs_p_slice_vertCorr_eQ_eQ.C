void S0_c_vs_p_slice_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 20:18:21 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-1.217031,3378.375,1.021631);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1035[15] = {
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
   Double_t Graph0_fy1035[15] = {
   -0.0977003,
   -0.5522127,
   -0.2896275,
   -0.01030706,
   -0.0001579543,
   0.0004538926,
   0.0005509806,
   0.0005309844,
   0.000156431,
   -1.619718e-06,
   0.0001887316,
   -0.0008459781,
   0.001050233,
   3.388604e-05,
   0.001026681};
   Double_t Graph0_fex1035[15] = {
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
   Double_t Graph0_fey1035[15] = {
   0.7462208,
   0.1099215,
   0.03807217,
   0.02868815,
   0.02505574,
   0.02255336,
   0.02065688,
   0.01925068,
   0.01815377,
   0.01740742,
   0.01698114,
   0.01671942,
   0.01677942,
   0.0172607,
   0.02430279};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1035,Graph0_fy1035,Graph0_fex1035,Graph0_fey1035);
   gre->SetName("Graph0");
   gre->SetTitle("S0");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01035 = new TH1F("Graph_Graph01035","S0",100,0,3300);
   Graph_Graph01035->SetMinimum(-0.9931652);
   Graph_Graph01035->SetMaximum(0.7977646);
   Graph_Graph01035->SetDirectory(0);
   Graph_Graph01035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01035->SetLineColor(ci);
   Graph_Graph01035->GetXaxis()->SetTitle("p [MeV]: in range p #minus 200 < p < p #plus 200 MeV");
   Graph_Graph01035->GetXaxis()->SetRange(1,91);
   Graph_Graph01035->GetXaxis()->CenterTitle(true);
   Graph_Graph01035->GetXaxis()->SetLabelFont(42);
   Graph_Graph01035->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01035->GetXaxis()->SetTitleFont(42);
   Graph_Graph01035->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01035->GetYaxis()->CenterTitle(true);
   Graph_Graph01035->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01035->GetYaxis()->SetLabelFont(42);
   Graph_Graph01035->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01035->GetYaxis()->SetTitleFont(42);
   Graph_Graph01035->GetZaxis()->SetLabelFont(42);
   Graph_Graph01035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01035);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4680151,0.94,0.5319849,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
