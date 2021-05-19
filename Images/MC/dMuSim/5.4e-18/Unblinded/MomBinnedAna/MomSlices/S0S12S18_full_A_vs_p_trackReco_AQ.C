void S0S12S18_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 17 13:47:48 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-3.552271,3456.75,1.034467);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1362[15] = {
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
   Double_t Graph0_fy1362[15] = {
   -1.999338,
   0.03692148,
   0.02794267,
   0.2047883,
   0.238776,
   0.1277553,
   0.1663687,
   0.1846554,
   0.1438126,
   0.1506655,
   0.1375625,
   0.1202226,
   0.11755,
   0.08389143,
   0.03075927};
   Double_t Graph0_fex1362[15] = {
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
   Double_t Graph0_fey1362[15] = {
   0.7884766,
   0.1326692,
   0.04527091,
   0.0352395,
   0.03123443,
   0.02883773,
   0.02700003,
   0.02551729,
   0.02460045,
   0.02433859,
   0.02463582,
   0.02547448,
   0.02675295,
   0.02611421,
   0.0334587};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1362,Graph0_fy1362,Graph0_fex1362,Graph0_fey1362);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01362 = new TH1F("Graph_Graph01362","S0S12S18",100,0,3300);
   Graph_Graph01362->SetMinimum(-3.093597);
   Graph_Graph01362->SetMaximum(0.5757929);
   Graph_Graph01362->SetDirectory(0);
   Graph_Graph01362->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01362->SetLineColor(ci);
   Graph_Graph01362->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01362->GetXaxis()->SetRange(0,93);
   Graph_Graph01362->GetXaxis()->CenterTitle(true);
   Graph_Graph01362->GetXaxis()->SetLabelFont(42);
   Graph_Graph01362->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01362->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01362->GetXaxis()->SetTitleFont(42);
   Graph_Graph01362->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01362->GetYaxis()->CenterTitle(true);
   Graph_Graph01362->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01362->GetYaxis()->SetLabelFont(42);
   Graph_Graph01362->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01362->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01362->GetYaxis()->SetTitleFont(42);
   Graph_Graph01362->GetZaxis()->SetLabelFont(42);
   Graph_Graph01362->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01362->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01362);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
