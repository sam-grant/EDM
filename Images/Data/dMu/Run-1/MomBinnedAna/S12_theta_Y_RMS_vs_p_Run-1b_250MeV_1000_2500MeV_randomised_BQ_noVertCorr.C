void S12_theta_Y_RMS_vs_p_Run-1b_250MeV_1000_2500MeV_randomised_BQ_noVertCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 15:14:57 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(784.7988,2.521917,2703.417,25.5679);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1043[11] = {
   455.8613,
   655.7479,
   884.3259,
   1127.626,
   1373.621,
   1620.285,
   1867.089,
   2116.434,
   2359.734,
   2607.778,
   2781.059};
   Double_t Graph0_fy1043[11] = {
   31.51546,
   24.57837,
   19.56742,
   16.75262,
   14.61172,
   12.68165,
   10.74932,
   9.037015,
   7.463351,
   5.922722,
   4.952368};
   Double_t Graph0_fex1043[11] = {
   0.1345946,
   0.09489918,
   0.06258617,
   0.0567749,
   0.05548528,
   0.06097837,
   0.07342504,
   0.09176803,
   0.1190434,
   0.1664659,
   0.265778};
   Double_t Graph0_fey1043[11] = {
   0.09586566,
   0.02430526,
   0.01223036,
   0.009303808,
   0.008032084,
   0.007668654,
   0.007782469,
   0.008166515,
   0.008886579,
   0.01018796,
   0.03582657};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1043,Graph0_fy1043,Graph0_fex1043,Graph0_fey1043);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01043 = new TH1F("Graph_Graph01043","S12",100,223.1668,3013.885);
   Graph_Graph01043->SetMinimum(4.826515);
   Graph_Graph01043->SetMaximum(23.2633);
   Graph_Graph01043->SetDirectory(0);
   Graph_Graph01043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01043->SetLineColor(ci);
   Graph_Graph01043->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01043->GetXaxis()->SetRange(28,82);
   Graph_Graph01043->GetXaxis()->CenterTitle(true);
   Graph_Graph01043->GetXaxis()->SetLabelFont(42);
   Graph_Graph01043->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01043->GetXaxis()->SetTitleFont(42);
   Graph_Graph01043->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01043->GetYaxis()->CenterTitle(true);
   Graph_Graph01043->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01043->GetYaxis()->SetLabelFont(42);
   Graph_Graph01043->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01043->GetYaxis()->SetTitleFont(42);
   Graph_Graph01043->GetZaxis()->SetLabelFont(42);
   Graph_Graph01043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01043);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
