void S0_c_vs_p_sym_vertCorr_eQ_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:12:59 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.2500001,-0.004325703,7.25,0.4475709);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1111[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t Graph0_fy1111[6] = {
   0.1035479,
   0.1319335,
   0.1836696,
   0.2157767,
   0.2553243,
   0.2936461};
   Double_t Graph0_fex1111[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1111[6] = {
   0.03255748,
   0.0326873,
   0.034191,
   0.03791482,
   0.04671662,
   0.07860877};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1111,Graph0_fy1111,Graph0_fex1111,Graph0_fey1111);
   gre->SetName("Graph0");
   gre->SetTitle("S0");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01111 = new TH1F("Graph_Graph01111","S0",100,0.5,6.5);
   Graph_Graph01111->SetMinimum(0.04086396);
   Graph_Graph01111->SetMaximum(0.4023813);
   Graph_Graph01111->SetDirectory(0);
   Graph_Graph01111->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01111->SetLineColor(ci);
   Graph_Graph01111->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_Graph01111->GetXaxis()->CenterTitle(true);
   Graph_Graph01111->GetXaxis()->SetLabelFont(42);
   Graph_Graph01111->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01111->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01111->GetXaxis()->SetTitleFont(42);
   Graph_Graph01111->GetYaxis()->SetTitle("c [mrad]");
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
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4680151,0.94,0.5319849,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
