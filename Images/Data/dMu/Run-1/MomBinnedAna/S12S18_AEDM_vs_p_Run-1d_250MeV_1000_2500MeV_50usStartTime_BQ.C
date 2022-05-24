void S12S18_AEDM_vs_p_Run-1d_250MeV_1000_2500MeV_50usStartTime_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 13 17:52:30 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.102,0.0134544,2703.55,0.05235551);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1106[11] = {
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
   Double_t Graph0_fy1106[11] = {
   -0.07134476,
   0.07104117,
   0.02132458,
   0.02668991,
   0.04056879,
   0.02726533,
   0.03347416,
   0.03754764,
   0.03672187,
   0.03635201,
   0.04036997};
   Double_t Graph0_fex1106[11] = {
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
   Double_t Graph0_fey1106[11] = {
   0.09412494,
   0.02408439,
   0.01239118,
   0.009490965,
   0.008316329,
   0.008014155,
   0.008261307,
   0.008773174,
   0.009659489,
   0.01102539,
   0.03966024};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1106,Graph0_fy1106,Graph0_fex1106,Graph0_fey1106);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01106 = new TH1F("Graph_Graph01106","S12S18",100,223.5199,3013.99);
   Graph_Graph01106->SetMinimum(0.01734451);
   Graph_Graph01106->SetMaximum(0.0484654);
   Graph_Graph01106->SetDirectory(0);
   Graph_Graph01106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01106->SetLineColor(ci);
   Graph_Graph01106->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01106->GetXaxis()->SetRange(28,82);
   Graph_Graph01106->GetXaxis()->CenterTitle(true);
   Graph_Graph01106->GetXaxis()->SetLabelFont(42);
   Graph_Graph01106->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01106->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01106->GetXaxis()->SetTitleFont(42);
   Graph_Graph01106->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01106->GetYaxis()->CenterTitle(true);
   Graph_Graph01106->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01106->GetYaxis()->SetLabelFont(42);
   Graph_Graph01106->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01106->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01106->GetYaxis()->SetTitleFont(42);
   Graph_Graph01106->GetZaxis()->SetLabelFont(42);
   Graph_Graph01106->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01106->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01106);
   
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
