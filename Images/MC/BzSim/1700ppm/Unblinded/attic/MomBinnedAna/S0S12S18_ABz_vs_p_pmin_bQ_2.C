void S0S12S18_ABz_vs_p_pmin_bQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 16:58:31 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(200,0.1211993,2600,0.2168116);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1404[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t Graph0_fy1404[9] = {
   0.1572121,
   0.1553128,
   0.1471078,
   0.1531071,
   0.1544154,
   0.1568697,
   0.1616151,
   0.1583325,
   0.1752809};
   Double_t Graph0_fex1404[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1404[9] = {
   0.006962497,
   0.009825919,
   0.009973176,
   0.01039012,
   0.01111617,
   0.0122797,
   0.01422874,
   0.01768773,
   0.0255953};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1404,Graph0_fy1404,Graph0_fex1404,Graph0_fey1404);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01404 = new TH1F("Graph_Graph01404","S0S12S18",100,440,2360);
   Graph_Graph01404->SetMinimum(0.1307605);
   Graph_Graph01404->SetMaximum(0.2072503);
   Graph_Graph01404->SetDirectory(0);
   Graph_Graph01404->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01404->SetLineColor(ci);
   Graph_Graph01404->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01404->GetXaxis()->CenterTitle(true);
   Graph_Graph01404->GetXaxis()->SetLabelFont(42);
   Graph_Graph01404->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01404->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01404->GetXaxis()->SetTitleFont(42);
   Graph_Graph01404->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01404->GetYaxis()->CenterTitle(true);
   Graph_Graph01404->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01404->GetYaxis()->SetLabelFont(42);
   Graph_Graph01404->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01404->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01404->GetYaxis()->SetTitleFont(42);
   Graph_Graph01404->GetZaxis()->SetLabelFont(42);
   Graph_Graph01404->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01404->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01404);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
