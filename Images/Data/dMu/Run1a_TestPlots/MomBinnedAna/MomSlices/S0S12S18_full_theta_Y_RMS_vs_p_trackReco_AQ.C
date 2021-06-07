void S0S12S18_full_theta_Y_RMS_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:58:34 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-1.513826,3605.25,37.93967);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1467[15] = {
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
   Double_t Graph0_fy1467[15] = {
   29.75251,
   31.31124,
   29.26073,
   24.7402,
   21.0464,
   18.76826,
   16.81958,
   15.07523,
   13.33262,
   11.82547,
   10.43864,
   9.181344,
   7.969135,
   6.290056,
   5.073605};
   Double_t Graph0_fex1467[15] = {
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
   Double_t Graph0_fey1467[15] = {
   0.577746,
   0.05284796,
   0.01887806,
   0.01202292,
   0.00935037,
   0.008068825,
   0.007207498,
   0.006721993,
   0.006438316,
   0.006421172,
   0.006510133,
   0.006697034,
   0.007493112,
   0.007509574,
   0.01184691};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1467,Graph0_fy1467,Graph0_fex1467,Graph0_fey1467);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;#sigma#theta_{y} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01467 = new TH1F("Graph_Graph01467","",100,0,3300);
   Graph_Graph01467->SetMinimum(2.431525);
   Graph_Graph01467->SetMaximum(33.99432);
   Graph_Graph01467->SetDirectory(0);
   Graph_Graph01467->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01467->SetLineColor(ci);
   Graph_Graph01467->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01467->GetXaxis()->SetRange(0,97);
   Graph_Graph01467->GetXaxis()->CenterTitle(true);
   Graph_Graph01467->GetXaxis()->SetLabelFont(42);
   Graph_Graph01467->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01467->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01467->GetXaxis()->SetTitleFont(42);
   Graph_Graph01467->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad]");
   Graph_Graph01467->GetYaxis()->CenterTitle(true);
   Graph_Graph01467->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01467->GetYaxis()->SetLabelFont(42);
   Graph_Graph01467->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01467->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01467->GetYaxis()->SetTitleFont(42);
   Graph_Graph01467->GetZaxis()->SetLabelFont(42);
   Graph_Graph01467->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01467->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01467);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
