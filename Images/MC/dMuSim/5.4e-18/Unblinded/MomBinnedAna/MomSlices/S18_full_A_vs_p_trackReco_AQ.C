void S18_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:25:29 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-6.712806,3605.25,1.913734);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1254[15] = {
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
   Double_t Graph0_fy1254[15] = {
   -4.127643,
   0.2462487,
   0.01318306,
   0.1301274,
   0.1361719,
   0.1074367,
   0.1881003,
   0.1874956,
   0.1485899,
   0.1772524,
   0.1379035,
   0.1014133,
   0.1332606,
   0.1250999,
   -0.02198775};
   Double_t Graph0_fex1254[15] = {
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
   Double_t Graph0_fey1254[15] = {
   1.147407,
   0.2297284,
   0.07846203,
   0.06103286,
   0.0539421,
   0.04996933,
   0.04676367,
   0.0442888,
   0.04272397,
   0.04286525,
   0.04376099,
   0.04619357,
   0.0487257,
   0.04694502,
   0.06170691};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1254,Graph0_fy1254,Graph0_fex1254,Graph0_fey1254);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01254 = new TH1F("Graph_Graph01254","S18",100,0,3300);
   Graph_Graph01254->SetMinimum(-5.850152);
   Graph_Graph01254->SetMaximum(1.05108);
   Graph_Graph01254->SetDirectory(0);
   Graph_Graph01254->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01254->SetLineColor(ci);
   Graph_Graph01254->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01254->GetXaxis()->SetRange(0,97);
   Graph_Graph01254->GetXaxis()->CenterTitle(true);
   Graph_Graph01254->GetXaxis()->SetLabelFont(42);
   Graph_Graph01254->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01254->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01254->GetXaxis()->SetTitleFont(42);
   Graph_Graph01254->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01254->GetYaxis()->CenterTitle(true);
   Graph_Graph01254->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01254->GetYaxis()->SetLabelFont(42);
   Graph_Graph01254->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01254->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01254->GetYaxis()->SetTitleFont(42);
   Graph_Graph01254->GetZaxis()->SetLabelFont(42);
   Graph_Graph01254->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01254->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01254);
   
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
