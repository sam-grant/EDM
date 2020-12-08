void y_vs_theta_NSUBRUNS_125()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 27 09:19:54 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-49.3125,-0.01409615,443.8125,0.3219411);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1015[24] = {
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
   Double_t Graph0_fy1015[24] = {
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
   Double_t Graph0_fex1015[24] = {
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
   Double_t Graph0_fey1015[24] = {
   0.08367264,
   0.1120124,
   0.0948918,
   0.09482961,
   0.1036287,
   0.09460361,
   0.09240046,
   0.09518453,
   0.09994164,
   0.09236395,
   0.08662965,
   0.08403942,
   0.07691058,
   0.08781392,
   0.09134577,
   0.09472849,
   0.09054637,
   0.08320336,
   0.0782213,
   0.09011305,
   0.0962136,
   0.09921547,
   0.08910712,
   0.09198913};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle("125 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01015 = new TH1F("Graph_Graph01015","125 sub-runs",100,0,394.5);
   Graph_Graph01015->SetMinimum(0.01950757);
   Graph_Graph01015->SetMaximum(0.2883374);
   Graph_Graph01015->SetDirectory(0);
   Graph_Graph01015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01015->SetLineColor(ci);
   Graph_Graph01015->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01015->GetXaxis()->CenterTitle(true);
   Graph_Graph01015->GetXaxis()->SetLabelFont(42);
   Graph_Graph01015->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01015->GetXaxis()->SetTitleFont(42);
   Graph_Graph01015->GetYaxis()->SetTitle("#LTy_{1}#GT - #LTy_{2}#GT [mm]");
   Graph_Graph01015->GetYaxis()->CenterTitle(true);
   Graph_Graph01015->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01015->GetYaxis()->SetLabelFont(42);
   Graph_Graph01015->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01015->GetYaxis()->SetTitleFont(42);
   Graph_Graph01015->GetZaxis()->SetLabelFont(42);
   Graph_Graph01015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01015);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("125 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
