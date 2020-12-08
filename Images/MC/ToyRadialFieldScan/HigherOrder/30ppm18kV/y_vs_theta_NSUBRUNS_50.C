void y_vs_theta_NSUBRUNS_50()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 27 09:19:53 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-49.3125,-0.1110742,443.8125,0.4189191);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1006[24] = {
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
   Double_t Graph0_fy1006[24] = {
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
   Double_t Graph0_fex1006[24] = {
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
   Double_t Graph0_fey1006[24] = {
   0.1319022,
   0.1766644,
   0.1499069,
   0.1498384,
   0.1634757,
   0.1494771,
   0.1457368,
   0.1504586,
   0.1581444,
   0.1464718,
   0.1369825,
   0.1333237,
   0.1215022,
   0.1386254,
   0.1441327,
   0.1492316,
   0.1432911,
   0.1313883,
   0.1233676,
   0.1426297,
   0.1517228,
   0.1564386,
   0.1403592,
   0.14511};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1006,Graph0_fy1006,Graph0_fex1006,Graph0_fey1006);
   gre->SetName("Graph0");
   gre->SetTitle("50 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01006 = new TH1F("Graph_Graph01006","50 sub-runs",100,0,394.5);
   Graph_Graph01006->SetMinimum(-0.05807485);
   Graph_Graph01006->SetMaximum(0.3659198);
   Graph_Graph01006->SetDirectory(0);
   Graph_Graph01006->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01006->SetLineColor(ci);
   Graph_Graph01006->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01006->GetXaxis()->CenterTitle(true);
   Graph_Graph01006->GetXaxis()->SetLabelFont(42);
   Graph_Graph01006->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01006->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01006->GetXaxis()->SetTitleFont(42);
   Graph_Graph01006->GetYaxis()->SetTitle("#LTy_{1}#GT - #LTy_{2}#GT [mm]");
   Graph_Graph01006->GetYaxis()->CenterTitle(true);
   Graph_Graph01006->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01006->GetYaxis()->SetLabelFont(42);
   Graph_Graph01006->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01006->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01006->GetYaxis()->SetTitleFont(42);
   Graph_Graph01006->GetZaxis()->SetLabelFont(42);
   Graph_Graph01006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01006);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.3869849,0.94,0.6130151,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("50 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
