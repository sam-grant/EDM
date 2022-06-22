void S12S18_AEDMOverMaxDiff_vs_p_Run-1b_250MeV_1000_2500MeV_noRand_earlyTimes_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:32:53 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.074,-0.000321179,2704.178,0.005636926);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1115[11] = {
   456.0655,
   655.1139,
   884.2586,
   1127.589,
   1373.332,
   1620.025,
   1866.92,
   2116.441,
   2359.526,
   2607.688,
   2781.8};
   Double_t Graph0_fy1115[11] = {
   0.004563563,
   0.003891296,
   0.001958792,
   0.0003225059,
   0.002440794,
   0.001209161,
   0.002198326,
   0.001691274,
   0.003490997,
   0.004255415,
   0.03102981};
   Double_t Graph0_fex1115[11] = {
   0.1468545,
   0.1034093,
   0.06917995,
   0.06270531,
   0.06147707,
   0.06775025,
   0.08207162,
   0.1030123,
   0.1339743,
   0.1851687,
   0.3050852};
   Double_t Graph0_fey1115[11] = {
   0.00662003,
   0.00215607,
   0.001384444,
   0.001230147,
   0.001222362,
   0.001347416,
   0.001624342,
   0.002031407,
   0.002686758,
   0.003852401,
   0.01641033};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1115,Graph0_fy1115,Graph0_fex1115,Graph0_fey1115);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01115 = new TH1F("Graph_Graph01115","S12S18",100,223.3,3014.724);
   Graph_Graph01115->SetMinimum(0.0002746315);
   Graph_Graph01115->SetMaximum(0.005041116);
   Graph_Graph01115->SetDirectory(0);
   Graph_Graph01115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01115->SetLineColor(ci);
   Graph_Graph01115->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01115->GetXaxis()->SetRange(28,82);
   Graph_Graph01115->GetXaxis()->CenterTitle(true);
   Graph_Graph01115->GetXaxis()->SetLabelFont(42);
   Graph_Graph01115->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01115->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01115->GetXaxis()->SetTitleFont(42);
   Graph_Graph01115->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01115->GetYaxis()->CenterTitle(true);
   Graph_Graph01115->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01115->GetYaxis()->SetLabelFont(42);
   Graph_Graph01115->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01115->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01115->GetYaxis()->SetTitleFont(42);
   Graph_Graph01115->GetZaxis()->SetLabelFont(42);
   Graph_Graph01115->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01115);
   
   gre->Draw("alp");
   
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
