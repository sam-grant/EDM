void S18_ABz_vs_p_pmin_bQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 16:58:16 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(200,0.09137069,2600,0.2654137);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1248[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t Graph0_fy1248[9] = {
   0.1378211,
   0.1383285,
   0.1430734,
   0.1386604,
   0.1418645,
   0.1557964,
   0.1615957,
   0.1721734,
   0.1898209};
   Double_t Graph0_fex1248[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1248[9] = {
   0.01216303,
   0.01717722,
   0.01748018,
   0.01828251,
   0.01962766,
   0.02182072,
   0.02541478,
   0.03170042,
   0.04658568};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1248,Graph0_fy1248,Graph0_fex1248,Graph0_fey1248);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01248 = new TH1F("Graph_Graph01248","S18",100,440,2360);
   Graph_Graph01248->SetMinimum(0.108775);
   Graph_Graph01248->SetMaximum(0.2480094);
   Graph_Graph01248->SetDirectory(0);
   Graph_Graph01248->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01248->SetLineColor(ci);
   Graph_Graph01248->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01248->GetXaxis()->CenterTitle(true);
   Graph_Graph01248->GetXaxis()->SetLabelFont(42);
   Graph_Graph01248->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01248->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01248->GetXaxis()->SetTitleFont(42);
   Graph_Graph01248->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01248->GetYaxis()->CenterTitle(true);
   Graph_Graph01248->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01248->GetYaxis()->SetLabelFont(42);
   Graph_Graph01248->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01248->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01248->GetYaxis()->SetTitleFont(42);
   Graph_Graph01248->GetZaxis()->SetLabelFont(42);
   Graph_Graph01248->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01248->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01248);
   
   gre->Draw("ap");
   
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
