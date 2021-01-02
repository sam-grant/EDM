void y_vs_theta_NSUBRUNS_175()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 27 09:19:55 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-49.3125,0.01205617,443.8125,0.2957888);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1021[24] = {
   15,
   30,
   45,
   60,
   75,
   90,
   105,
   120,
   135,
   150,
   165,
   180,
   195,
   210,
   225,
   240,
   255,
   270,
   285,
   300,
   315,
   330,
   345,
   360};
   Double_t Graph0_fy1021[24] = {
   0.1534952,
   0.1539225,
   0.1542735,
   0.1545221,
   0.1546535,
   0.1546653,
   0.1545654,
   0.1543695,
   0.1540974,
   0.15377,
   0.1534071,
   0.1530272,
   0.1526472,
   0.1522844,
   0.1519569,
   0.1516848,
   0.1514889,
   0.1513891,
   0.1514009,
   0.1515323,
   0.1517808,
   0.1521319,
   0.1525592,
   0.1530272};
   Double_t Graph0_fex1021[24] = {
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
   0,
   0};
   Double_t Graph0_fey1021[24] = {
   0.07067524,
   0.09457753,
   0.08019424,
   0.0801426,
   0.08744993,
   0.07996599,
   0.07802355,
   0.08040953,
   0.08457779,
   0.07810615,
   0.0732181,
   0.07097718,
   0.06506449,
   0.07411648,
   0.07713463,
   0.08006465,
   0.07644889,
   0.07033648,
   0.06605858,
   0.07612683,
   0.08122609,
   0.08400879,
   0.0752672,
   0.07786109};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1021,Graph0_fy1021,Graph0_fex1021,Graph0_fey1021);
   gre->SetName("Graph0");
   gre->SetTitle("175 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01021 = new TH1F("Graph_Graph01021","175 sub-runs",100,0,394.5);
   Graph_Graph01021->SetMinimum(0.04042943);
   Graph_Graph01021->SetMaximum(0.2674155);
   Graph_Graph01021->SetDirectory(0);
   Graph_Graph01021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01021->SetLineColor(ci);
   Graph_Graph01021->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01021->GetXaxis()->CenterTitle(true);
   Graph_Graph01021->GetXaxis()->SetLabelFont(42);
   Graph_Graph01021->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01021->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01021->GetXaxis()->SetTitleFont(42);
   Graph_Graph01021->GetYaxis()->SetTitle("#LTy_{1}#GT - #LTy_{2}#GT [mm]");
   Graph_Graph01021->GetYaxis()->CenterTitle(true);
   Graph_Graph01021->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01021->GetYaxis()->SetLabelFont(42);
   Graph_Graph01021->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01021->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01021->GetYaxis()->SetTitleFont(42);
   Graph_Graph01021->GetZaxis()->SetLabelFont(42);
   Graph_Graph01021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01021);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("175 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
