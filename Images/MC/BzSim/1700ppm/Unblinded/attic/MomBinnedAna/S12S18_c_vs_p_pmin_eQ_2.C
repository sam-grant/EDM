void S12S18_c_vs_p_pmin_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 22:57:20 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(200,-0.2760095,2600,-0.01963628);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1325[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t Graph0_fy1325[9] = {
   -0.2293005,
   -0.2087151,
   -0.1776777,
   -0.1539363,
   -0.1328747,
   -0.1153438,
   -0.1001595,
   -0.08563885,
   -0.07494671};
   Double_t Graph0_fex1325[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1325[9] = {
   0.003980081,
   0.005610132,
   0.005648548,
   0.005797905,
   0.006088256,
   0.006582745,
   0.007423822,
   0.008950456,
   0.01258155};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1325,Graph0_fy1325,Graph0_fex1325,Graph0_fey1325);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01325 = new TH1F("Graph_Graph01325","S12S18",100,440,2360);
   Graph_Graph01325->SetMinimum(-0.2503722);
   Graph_Graph01325->SetMaximum(-0.04527361);
   Graph_Graph01325->SetDirectory(0);
   Graph_Graph01325->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01325->SetLineColor(ci);
   Graph_Graph01325->GetXaxis()->SetTitle("p_{min} MeV");
   Graph_Graph01325->GetXaxis()->CenterTitle(true);
   Graph_Graph01325->GetXaxis()->SetLabelFont(42);
   Graph_Graph01325->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01325->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01325->GetXaxis()->SetTitleFont(42);
   Graph_Graph01325->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01325->GetYaxis()->CenterTitle(true);
   Graph_Graph01325->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01325->GetYaxis()->SetLabelFont(42);
   Graph_Graph01325->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01325->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01325->GetYaxis()->SetTitleFont(42);
   Graph_Graph01325->GetZaxis()->SetLabelFont(42);
   Graph_Graph01325->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01325->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01325);
   
   gre->Draw("ap");
   
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
