void y_vs_theta_NSUBRUNS_100()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 27 09:19:54 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-49.3125,-0.0337531,443.8125,0.341598);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1012[24] = {
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
   Double_t Graph0_fy1012[24] = {
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
   Double_t Graph0_fex1012[24] = {
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
   Double_t Graph0_fey1012[24] = {
   0.0934622,
   0.125117,
   0.1061097,
   0.1059556,
   0.115945,
   0.1057745,
   0.1032454,
   0.1063501,
   0.1118228,
   0.1034941,
   0.09701614,
   0.0940842,
   0.08606745,
   0.0982651,
   0.1020053,
   0.106009,
   0.1013199,
   0.09306112,
   0.08749593,
   0.1009403,
   0.107621,
   0.1108948,
   0.09964817,
   0.1028533};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1012,Graph0_fy1012,Graph0_fex1012,Graph0_fey1012);
   gre->SetName("Graph0");
   gre->SetTitle("100 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01012 = new TH1F("Graph_Graph01012","100 sub-runs",100,0,394.5);
   Graph_Graph01012->SetMinimum(0.003782019);
   Graph_Graph01012->SetMaximum(0.3040629);
   Graph_Graph01012->SetDirectory(0);
   Graph_Graph01012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01012->SetLineColor(ci);
   Graph_Graph01012->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01012->GetXaxis()->CenterTitle(true);
   Graph_Graph01012->GetXaxis()->SetLabelFont(42);
   Graph_Graph01012->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01012->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01012->GetXaxis()->SetTitleFont(42);
   Graph_Graph01012->GetYaxis()->SetTitle("#LTy_{1}#GT - #LTy_{2}#GT [mm]");
   Graph_Graph01012->GetYaxis()->CenterTitle(true);
   Graph_Graph01012->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01012->GetYaxis()->SetLabelFont(42);
   Graph_Graph01012->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01012->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01012->GetYaxis()->SetTitleFont(42);
   Graph_Graph01012->GetZaxis()->SetLabelFont(42);
   Graph_Graph01012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01012);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("100 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
