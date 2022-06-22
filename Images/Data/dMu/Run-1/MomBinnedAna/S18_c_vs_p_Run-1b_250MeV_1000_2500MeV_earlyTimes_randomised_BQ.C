void S18_c_vs_p_Run-1b_250MeV_1000_2500MeV_earlyTimes_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:31:37 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.189,-0.03591046,2704.825,0.01936718);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1072[11] = {
   456.1471,
   654.0654,
   883.8362,
   1127.325,
   1372.862,
   1619.526,
   1866.629,
   2116.202,
   2359.187,
   2607.066,
   2782.305};
   Double_t Graph0_fy1072[11] = {
   0.1114671,
   -0.01955298,
   -0.006174363,
   0.01153629,
   0.01121973,
   0.00737611,
   -0.02534845,
   -0.007200792,
   0.005419576,
   -0.04118717,
   -0.01084975};
   Double_t Graph0_fex1072[11] = {
   0.2047857,
   0.1452136,
   0.0989078,
   0.08984976,
   0.08902259,
   0.09880499,
   0.121151,
   0.1529636,
   0.2016089,
   0.2748319,
   0.4686495};
   Double_t Graph0_fey1072[11] = {
   0.2026054,
   0.05241313,
   0.0272004,
   0.02078683,
   0.01818171,
   0.01749677,
   0.01816478,
   0.01955751,
   0.02186458,
   0.0255963,
   0.09683712};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1072,Graph0_fy1072,Graph0_fex1072,Graph0_fey1072);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01072 = new TH1F("Graph_Graph01072","S18",100,223.2592,3015.457);
   Graph_Graph01072->SetMinimum(-0.03038269);
   Graph_Graph01072->SetMaximum(0.01383941);
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
