void S18_theta_Y_RMS_vs_p_Run-1a_250MeV_1000_2500MeV_noRand_earlyTimes_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:32:30 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.2717,2.502716,2705.192,25.40708);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1076[11] = {
   456.2206,
   653.952,
   883.595,
   1127.532,
   1373.186,
   1619.572,
   1866.813,
   2116.091,
   2359.833,
   2607.109,
   2782.58};
   Double_t Graph0_fy1076[11] = {
   31.2088,
   24.4477,
   19.45525,
   16.60952,
   14.49645,
   12.54694,
   10.64501,
   8.980585,
   7.388355,
   5.887606,
   4.951189};
   Double_t Graph0_fex1076[11] = {
   0.2442643,
   0.171278,
   0.1162033,
   0.1055093,
   0.1045023,
   0.1159622,
   0.1423718,
   0.1789914,
   0.2369297,
   0.3237419,
   0.571712};
   Double_t Graph0_fey1076[11] = {
   0.1701112,
   0.04345821,
   0.02252958,
   0.01715209,
   0.01502895,
   0.01445465,
   0.01492932,
   0.01589014,
   0.01745666,
   0.01985772,
   0.07324052};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1076,Graph0_fy1076,Graph0_fex1076,Graph0_fey1076);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01076 = new TH1F("Graph_Graph01076","S18",100,223.2588,3015.87);
   Graph_Graph01076->SetMinimum(4.793153);
   Graph_Graph01076->SetMaximum(23.11665);
   Graph_Graph01076->SetDirectory(0);
   Graph_Graph01076->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01076->SetLineColor(ci);
   Graph_Graph01076->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01076->GetXaxis()->SetRange(28,82);
   Graph_Graph01076->GetXaxis()->CenterTitle(true);
   Graph_Graph01076->GetXaxis()->SetLabelFont(42);
   Graph_Graph01076->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01076->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01076->GetXaxis()->SetTitleFont(42);
   Graph_Graph01076->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01076->GetYaxis()->CenterTitle(true);
   Graph_Graph01076->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01076->GetYaxis()->SetLabelFont(42);
   Graph_Graph01076->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01076->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01076->GetYaxis()->SetTitleFont(42);
   Graph_Graph01076->GetZaxis()->SetLabelFont(42);
   Graph_Graph01076->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01076->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01076);
   
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
