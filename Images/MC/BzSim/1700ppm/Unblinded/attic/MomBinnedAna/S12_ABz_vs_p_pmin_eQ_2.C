void S12_ABz_vs_p_pmin_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 22:57:01 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(200,0.05425467,2600,0.192372);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1170[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t Graph0_fy1170[9] = {
   0.1476851,
   0.1552636,
   0.1470141,
   0.1578035,
   0.137287,
   0.1233214,
   0.1164048,
   0.09512354,
   0.1238875};
   Double_t Graph0_fex1170[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1170[9] = {
   0.007931676,
   0.01118118,
   0.01125504,
   0.01154891,
   0.01213245,
   0.01310636,
   0.01479131,
   0.01784932,
   0.02508984};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1170,Graph0_fy1170,Graph0_fex1170,Graph0_fey1170);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01170 = new TH1F("Graph_Graph01170","S12",100,440,2360);
   Graph_Graph01170->SetMinimum(0.06806641);
   Graph_Graph01170->SetMaximum(0.1785603);
   Graph_Graph01170->SetDirectory(0);
   Graph_Graph01170->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01170->SetLineColor(ci);
   Graph_Graph01170->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01170->GetXaxis()->CenterTitle(true);
   Graph_Graph01170->GetXaxis()->SetLabelFont(42);
   Graph_Graph01170->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01170->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01170->GetXaxis()->SetTitleFont(42);
   Graph_Graph01170->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01170->GetYaxis()->CenterTitle(true);
   Graph_Graph01170->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01170->GetYaxis()->SetLabelFont(42);
   Graph_Graph01170->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01170->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01170->GetYaxis()->SetTitleFont(42);
   Graph_Graph01170->GetZaxis()->SetLabelFont(42);
   Graph_Graph01170->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01170->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01170);
   
   gre->Draw("ap");
   
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
