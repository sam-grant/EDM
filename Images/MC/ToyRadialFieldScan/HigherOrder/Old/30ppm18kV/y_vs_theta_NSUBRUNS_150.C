void y_vs_theta_NSUBRUNS_150()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 27 09:19:54 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-49.3125,0.0006984293,443.8125,0.3071465);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1018[24] = {
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
   Double_t Graph0_fy1018[24] = {
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
   Double_t Graph0_fex1018[24] = {
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
   Double_t Graph0_fey1018[24] = {
   0.07639921,
   0.1021494,
   0.08662788,
   0.08658819,
   0.09452842,
   0.08635349,
   0.0843849,
   0.08690677,
   0.09132071,
   0.08428414,
   0.07911738,
   0.07671129,
   0.07021169,
   0.08004986,
   0.08330591,
   0.0864646,
   0.08265023,
   0.075947,
   0.07138422,
   0.08224191,
   0.08779848,
   0.09070618,
   0.08131372,
   0.08407481};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle("150 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01018 = new TH1F("Graph_Graph01018","150 sub-runs",100,0,394.5);
   Graph_Graph01018->SetMinimum(0.03134324);
   Graph_Graph01018->SetMaximum(0.2765017);
   Graph_Graph01018->SetDirectory(0);
   Graph_Graph01018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01018->SetLineColor(ci);
   Graph_Graph01018->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01018->GetXaxis()->CenterTitle(true);
   Graph_Graph01018->GetXaxis()->SetLabelFont(42);
   Graph_Graph01018->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01018->GetXaxis()->SetTitleFont(42);
   Graph_Graph01018->GetYaxis()->SetTitle("#LTy_{1}#GT - #LTy_{2}#GT [mm]");
   Graph_Graph01018->GetYaxis()->CenterTitle(true);
   Graph_Graph01018->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01018->GetYaxis()->SetLabelFont(42);
   Graph_Graph01018->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01018->GetYaxis()->SetTitleFont(42);
   Graph_Graph01018->GetZaxis()->SetLabelFont(42);
   Graph_Graph01018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01018);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("150 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
