void S12S18_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:30:36 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-0.6972094,3605.25,3.37211);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1359[15] = {
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
   Double_t Graph0_fy1359[15] = {
   1.761206,
   2.535338,
   1.357422,
   0.6554352,
   0.392554,
   0.246019,
   0.2379261,
   0.1879281,
   0.1562041,
   0.1265689,
   0.149583,
   0.1907047,
   0.2005944,
   0.2404344,
   0.0394061};
   Double_t Graph0_fex1359[15] = {
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
   Double_t Graph0_fey1359[15] = {
   0.8407975,
   0.158552,
   0.05560504,
   0.0430635,
   0.03859764,
   0.03679123,
   0.03639439,
   0.03747266,
   0.04037243,
   0.04448691,
   0.05110665,
   0.05842812,
   0.06170261,
   0.05226685,
   0.05839552};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1359,Graph0_fy1359,Graph0_fex1359,Graph0_fey1359);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01359 = new TH1F("Graph_Graph01359","S12S18",100,0,3300);
   Graph_Graph01359->SetMinimum(-0.2902774);
   Graph_Graph01359->SetMaximum(2.965178);
   Graph_Graph01359->SetDirectory(0);
   Graph_Graph01359->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01359->SetLineColor(ci);
   Graph_Graph01359->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01359->GetXaxis()->SetRange(0,97);
   Graph_Graph01359->GetXaxis()->CenterTitle(true);
   Graph_Graph01359->GetXaxis()->SetLabelFont(42);
   Graph_Graph01359->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01359->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01359->GetXaxis()->SetTitleFont(42);
   Graph_Graph01359->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01359->GetYaxis()->CenterTitle(true);
   Graph_Graph01359->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01359->GetYaxis()->SetLabelFont(42);
   Graph_Graph01359->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01359->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01359->GetYaxis()->SetTitleFont(42);
   Graph_Graph01359->GetZaxis()->SetLabelFont(42);
   Graph_Graph01359->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01359->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01359);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
