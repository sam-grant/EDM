void S18_c_vs_p_Run-1d_250MeV_1000_2500MeV_earlyTimes_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:32:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.5962,-0.00115971,2704.716,0.0339531);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1072[11] = {
   456.5628,
   653.6411,
   883.7251,
   1127.393,
   1373.027,
   1619.423,
   1866.66,
   2115.925,
   2359.333,
   2606.731,
   2782.349};
   Double_t Graph0_fy1072[11] = {
   0.0401619,
   0.03679531,
   0.0110188,
   0.01002459,
   0.008334154,
   0.003306497,
   0.003830911,
   0.00291776,
   0.01039027,
   0.02645457,
   0.2267279};
   Double_t Graph0_fex1072[11] = {
   0.1245924,
   0.08810142,
   0.05947394,
   0.0540199,
   0.05363776,
   0.05962779,
   0.07357191,
   0.09289278,
   0.1232276,
   0.1690699,
   0.2942079};
   Double_t Graph0_fey1072[11] = {
   0.1232409,
   0.03153805,
   0.01634133,
   0.01243901,
   0.01092925,
   0.01057368,
   0.01101621,
   0.01186091,
   0.01334491,
   0.01578944,
   0.0626611};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1072,Graph0_fy1072,Graph0_fex1072,Graph0_fey1072);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01072 = new TH1F("Graph_Graph01072","S18",100,223.8177,3015.264);
   Graph_Graph01072->SetMinimum(0.002351571);
   Graph_Graph01072->SetMaximum(0.03044182);
   Graph_Graph01072->SetDirectory(0);
   Graph_Graph01072->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01072->SetLineColor(ci);
   Graph_Graph01072->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01072->GetXaxis()->SetRange(28,82);
   Graph_Graph01072->GetXaxis()->CenterTitle(true);
   Graph_Graph01072->GetXaxis()->SetLabelFont(42);
   Graph_Graph01072->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01072->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01072->GetXaxis()->SetTitleFont(42);
   Graph_Graph01072->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01072->GetYaxis()->CenterTitle(true);
   Graph_Graph01072->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01072->GetYaxis()->SetLabelFont(42);
   Graph_Graph01072->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01072->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01072->GetYaxis()->SetTitleFont(42);
   Graph_Graph01072->GetZaxis()->SetLabelFont(42);
   Graph_Graph01072->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01072->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01072);
   
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
