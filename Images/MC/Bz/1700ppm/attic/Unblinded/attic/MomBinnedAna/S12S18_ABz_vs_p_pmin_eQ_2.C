void S12S18_ABz_vs_p_pmin_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 22:57:20 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(200,0.08140129,2600,0.1721247);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1326[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t Graph0_fy1326[9] = {
   0.145955,
   0.149073,
   0.1433311,
   0.146385,
   0.1340357,
   0.1262838,
   0.1213824,
   0.1092006,
   0.1299939};
   Double_t Graph0_fex1326[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1326[9] = {
   0.005625555,
   0.007931081,
   0.007987232,
   0.008199299,
   0.008614092,
   0.009314012,
   0.01050995,
   0.01267874,
   0.01783263};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1326,Graph0_fy1326,Graph0_fex1326,Graph0_fey1326);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01326 = new TH1F("Graph_Graph01326","S12S18",100,440,2360);
   Graph_Graph01326->SetMinimum(0.09047363);
   Graph_Graph01326->SetMaximum(0.1630523);
   Graph_Graph01326->SetDirectory(0);
   Graph_Graph01326->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01326->SetLineColor(ci);
   Graph_Graph01326->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01326->GetXaxis()->CenterTitle(true);
   Graph_Graph01326->GetXaxis()->SetLabelFont(42);
   Graph_Graph01326->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01326->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01326->GetXaxis()->SetTitleFont(42);
   Graph_Graph01326->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01326->GetYaxis()->CenterTitle(true);
   Graph_Graph01326->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01326->GetYaxis()->SetLabelFont(42);
   Graph_Graph01326->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01326->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01326->GetYaxis()->SetTitleFont(42);
   Graph_Graph01326->GetZaxis()->SetLabelFont(42);
   Graph_Graph01326->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01326->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01326);
   
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
