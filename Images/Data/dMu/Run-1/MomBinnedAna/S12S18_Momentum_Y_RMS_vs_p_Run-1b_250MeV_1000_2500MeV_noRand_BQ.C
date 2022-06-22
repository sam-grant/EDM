void S12S18_Momentum_Y_RMS_vs_p_Run-1b_250MeV_1000_2500MeV_noRand_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 10 16:19:28 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(786.0401,11.0267,2711.592,25.94607);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1111[11] = {
   455.8567,
   655.0535,
   884.0623,
   1127.583,
   1373.388,
   1620.027,
   1866.939,
   2116.33,
   2359.577,
   2607.956,
   2789.593};
   Double_t Graph0_fy1111[11] = {
   14.29258,
   15.9207,
   17.18647,
   18.77767,
   19.95132,
   20.37849,
   19.9329,
   19.05104,
   17.49679,
   15.50425,
   14.94203};
   Double_t Graph0_fex1111[11] = {
   0.07797519,
   0.05480456,
   0.03656901,
   0.03312465,
   0.03248778,
   0.03579317,
   0.04343275,
   0.05456016,
   0.07125235,
   0.09844146,
   0.1884154};
   Double_t Graph0_fey1111[11] = {
   0.02506005,
   0.009075033,
   0.006273702,
   0.006088695,
   0.006430434,
   0.007245648,
   0.008545042,
   0.01024645,
   0.01245841,
   0.01580507,
   0.05901378};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1111,Graph0_fy1111,Graph0_fex1111,Graph0_fey1111);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01111 = new TH1F("Graph_Graph01111","S12S18",100,222.3785,3023.181);
   Graph_Graph01111->SetMinimum(12.51863);
   Graph_Graph01111->SetMaximum(24.45413);
   Graph_Graph01111->SetDirectory(0);
   Graph_Graph01111->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01111->SetLineColor(ci);
   Graph_Graph01111->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01111->GetXaxis()->SetRange(28,82);
   Graph_Graph01111->GetXaxis()->CenterTitle(true);
   Graph_Graph01111->GetXaxis()->SetLabelFont(42);
   Graph_Graph01111->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01111->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01111->GetXaxis()->SetTitleFont(42);
   Graph_Graph01111->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01111->GetYaxis()->CenterTitle(true);
   Graph_Graph01111->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01111->GetYaxis()->SetLabelFont(42);
   Graph_Graph01111->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01111->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01111->GetYaxis()->SetTitleFont(42);
   Graph_Graph01111->GetZaxis()->SetLabelFont(42);
   Graph_Graph01111->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01111);
   
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
