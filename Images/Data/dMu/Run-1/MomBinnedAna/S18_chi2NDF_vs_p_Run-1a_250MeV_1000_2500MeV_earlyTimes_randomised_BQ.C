void S18_chi2NDF_vs_p_Run-1a_250MeV_1000_2500MeV_earlyTimes_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:31:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.2298,0.3314586,2705.153,1.745939);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1075[11] = {
   456.1783,
   653.9292,
   883.5796,
   1127.534,
   1373.193,
   1619.583,
   1866.827,
   2116.091,
   2359.857,
   2607.098,
   2782.542};
   Double_t Graph0_fy1075[11] = {
   1.040741,
   1.2292,
   0.98104,
   0.8124289,
   0.5882194,
   1.338102,
   0.730159,
   1.156591,
   0.717928,
   1.294566,
   1.065195};
   Double_t Graph0_fex1075[11] = {
   0.2443731,
   0.171293,
   0.116194,
   0.1054894,
   0.1044977,
   0.115948,
   0.1423569,
   0.178961,
   0.2369262,
   0.3237163,
   0.5714976};
   Double_t Graph0_fey1075[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1075,Graph0_fy1075,Graph0_fex1075,Graph0_fey1075);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01075 = new TH1F("Graph_Graph01075","S18",100,223.216,3015.831);
   Graph_Graph01075->SetMinimum(0.4729066);
   Graph_Graph01075->SetMaximum(1.604491);
   Graph_Graph01075->SetDirectory(0);
   Graph_Graph01075->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01075->SetLineColor(ci);
   Graph_Graph01075->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01075->GetXaxis()->SetRange(28,82);
   Graph_Graph01075->GetXaxis()->CenterTitle(true);
   Graph_Graph01075->GetXaxis()->SetLabelFont(42);
   Graph_Graph01075->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01075->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01075->GetXaxis()->SetTitleFont(42);
   Graph_Graph01075->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 250 MeV");
   Graph_Graph01075->GetYaxis()->CenterTitle(true);
   Graph_Graph01075->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01075->GetYaxis()->SetLabelFont(42);
   Graph_Graph01075->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01075->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01075->GetYaxis()->SetTitleFont(42);
   Graph_Graph01075->GetZaxis()->SetLabelFont(42);
   Graph_Graph01075->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01075);
   
   gre->Draw("alp");
   
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
