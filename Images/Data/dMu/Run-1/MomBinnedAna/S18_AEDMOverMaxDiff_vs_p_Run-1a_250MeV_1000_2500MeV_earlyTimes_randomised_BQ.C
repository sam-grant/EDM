void S18_AEDMOverMaxDiff_vs_p_Run-1a_250MeV_1000_2500MeV_earlyTimes_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:31:18 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.2298,-0.002131044,2705.153,0.004589515);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1082[11] = {
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
   Double_t Graph0_fy1082[11] = {
   -0.002964467,
   -0.00164306,
   0.003352102,
   0.002051349,
   -0.00187476,
   0.0006819489,
   -4.512195e-05,
   0.001653161,
   -0.001330017,
   0.002419426,
   0.0207234};
   Double_t Graph0_fex1082[11] = {
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
   Double_t Graph0_fey1082[11] = {
   -0.01086299,
   -0.003557745,
   0.002317803,
   0.002068535,
   -0.002078911,
   0.002310113,
   -0.002809291,
   0.003540596,
   -0.004736677,
   0.006751918,
   0.02847754};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1082,Graph0_fy1082,Graph0_fex1082,Graph0_fey1082);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01082 = new TH1F("Graph_Graph01082","S18",100,223.216,3015.831);
   Graph_Graph01082->SetMinimum(-0.001458988);
   Graph_Graph01082->SetMaximum(0.003917459);
   Graph_Graph01082->SetDirectory(0);
   Graph_Graph01082->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01082->SetLineColor(ci);
   Graph_Graph01082->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01082->GetXaxis()->SetRange(28,82);
   Graph_Graph01082->GetXaxis()->CenterTitle(true);
   Graph_Graph01082->GetXaxis()->SetLabelFont(42);
   Graph_Graph01082->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01082->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01082->GetXaxis()->SetTitleFont(42);
   Graph_Graph01082->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01082->GetYaxis()->CenterTitle(true);
   Graph_Graph01082->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01082->GetYaxis()->SetLabelFont(42);
   Graph_Graph01082->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01082->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01082->GetYaxis()->SetTitleFont(42);
   Graph_Graph01082->GetZaxis()->SetLabelFont(42);
   Graph_Graph01082->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01082->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01082);
   
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
