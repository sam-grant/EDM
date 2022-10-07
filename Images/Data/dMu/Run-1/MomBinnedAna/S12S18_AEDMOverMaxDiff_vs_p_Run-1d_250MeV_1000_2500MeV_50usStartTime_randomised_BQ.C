#ifdef __CLING__
#pragma cling optimize(0)
#endif
void S12S18_AEDMOverMaxDiff_vs_p_Run-1d_250MeV_1000_2500MeV_50usStartTime_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  7 11:40:50 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.102,-0.0005227462,2703.55,0.001758272);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1115[11] = {
   456.1259,
   654.3484,
   883.8465,
   1127.258,
   1373.207,
   1619.861,
   1866.687,
   2115.945,
   2359.391,
   2607.511,
   2781.302};
   Double_t Graph0_fy1115[11] = {
   -0.003215197,
   0.001728211,
   -0.0003855881,
   -0.000125162,
   0.0008096855,
   -0.0001189633,
   0.0004451232,
   0.0009731832,
   0.001075416,
   0.001290308,
   0.002366877};
   Double_t Graph0_fex1115[11] = {
   0.06685408,
   0.04739569,
   0.03179544,
   0.02897557,
   0.0286816,
   0.03183412,
   0.03891513,
   0.04912633,
   0.06471906,
   0.08999573,
   0.1485384};
   Double_t Graph0_fey1115[11] = {
   -0.00301876,
   0.0009851793,
   -0.0006364569,
   -0.0005684482,
   0.0005699466,
   -0.0006334907,
   0.0007692953,
   0.0009706384,
   0.001295797,
   0.001869093,
   0.008042717};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1115,Graph0_fy1115,Graph0_fex1115,Graph0_fey1115);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01115 = new TH1F("Graph_Graph01115","S12S18",100,223.5199,3013.99);
   Graph_Graph01115->SetMinimum(-0.0002946443);
   Graph_Graph01115->SetMaximum(0.001530171);
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
