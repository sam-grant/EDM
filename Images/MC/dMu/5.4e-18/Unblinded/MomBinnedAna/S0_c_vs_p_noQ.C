void S0_c_vs_p_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 23 12:42:25 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-2.646932,3378.375,5.354025);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[30] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450,
   2550,
   2650,
   2750,
   2850,
   2950};
   Double_t Graph0_fy1001[30] = {
   3.082912,
   0.2814888,
   2.210961,
   -0.9154876,
   -1.259858,
   -0.6857262,
   -0.1562355,
   -0.09458965,
   -0.04636788,
   -0.01201239,
   0.03804803,
   -0.01751339,
   0.0272911,
   -0.002084333,
   0.04317548,
   0.06969815,
   0.03989108,
   0.05231605,
   -0.006196081,
   0.02437875,
   0.005261318,
   0.03385155,
   -0.008850922,
   0.002116718,
   -0.0256937,
   0.01359812,
   -0.03265587,
   0.00489004,
   -0.04234366,
   0.2098048};
   Double_t Graph0_fex1001[30] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1001[30] = {
   0.93762,
   0.6275113,
   0.2751198,
   0.09770919,
   0.05358088,
   0.04101868,
   0.03586703,
   0.03277401,
   0.03025391,
   0.02835053,
   0.02670444,
   0.0252874,
   0.02400791,
   0.02293125,
   0.02196578,
   0.02116595,
   0.0204914,
   0.01988239,
   0.01942922,
   0.01914559,
   0.01886438,
   0.01864449,
   0.01854474,
   0.01857663,
   0.01871429,
   0.01886798,
   0.01923957,
   0.02008385,
   0.0225041,
   0.05078761};
   TGraphErrors *gre = new TGraphErrors(30,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("S0");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","S0",100,0,3300);
   Graph_Graph01001->SetMinimum(-1.846836);
   Graph_Graph01001->SetMaximum(4.553929);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01001->GetXaxis()->SetRange(1,91);
   Graph_Graph01001->GetXaxis()->CenterTitle(true);
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01001->GetYaxis()->CenterTitle(true);
   Graph_Graph01001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
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
