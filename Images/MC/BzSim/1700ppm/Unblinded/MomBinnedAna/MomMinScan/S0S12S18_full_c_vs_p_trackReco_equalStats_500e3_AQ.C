void S0S12S18_full_c_vs_p_trackReco_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:12:31 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-329.725,-0.4765402,2725.525,0.0408431);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1383[12] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t Graph0_fy1383[12] = {
   -0.3615813,
   -0.3599111,
   -0.3175308,
   -0.2089555,
   -0.1358343,
   -0.1374671,
   -0.09016262,
   -0.0794659,
   -0.09458494,
   -0.09538126,
   -0.06475884,
   -0.05740943};
   Double_t Graph0_fex1383[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1383[12] = {
   0.02872835,
   0.02872385,
   0.0284336,
   0.02636643,
   0.0238476,
   0.02158121,
   0.01962031,
   0.0178616,
   0.01627643,
   0.01478963,
   0.01339687,
   0.01202198};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1383,Graph0_fy1383,Graph0_fex1383,Graph0_fey1383);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01383 = new TH1F("Graph_Graph01383","S0S12S18",100,0,2420);
   Graph_Graph01383->SetMinimum(-0.4248019);
   Graph_Graph01383->SetMaximum(-0.01089523);
   Graph_Graph01383->SetDirectory(0);
   Graph_Graph01383->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01383->SetLineColor(ci);
   Graph_Graph01383->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01383->GetXaxis()->SetRange(0,100);
   Graph_Graph01383->GetXaxis()->CenterTitle(true);
   Graph_Graph01383->GetXaxis()->SetLabelFont(42);
   Graph_Graph01383->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01383->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01383->GetXaxis()->SetTitleFont(42);
   Graph_Graph01383->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01383->GetYaxis()->CenterTitle(true);
   Graph_Graph01383->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01383->GetYaxis()->SetLabelFont(42);
   Graph_Graph01383->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01383->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01383->GetYaxis()->SetTitleFont(42);
   Graph_Graph01383->GetZaxis()->SetLabelFont(42);
   Graph_Graph01383->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01383->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01383);
   
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
