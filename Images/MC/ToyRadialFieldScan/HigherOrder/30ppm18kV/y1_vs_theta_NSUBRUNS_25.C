void y1_vs_theta_NSUBRUNS_25()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 27 09:19:52 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-49.3125,0.3478896,443.8125,1.009436);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[24] = {
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
   Double_t Graph0_fy1001[24] = {
   0.6653082,
   0.6450339,
   0.6302432,
   0.6223329,
   0.6214532,
   0.6266019,
   0.6359772,
   0.6474892,
   0.6592913,
   0.6701902,
   0.6798322,
   0.6886222,
   0.6974123,
   0.7070542,
   0.7179532,
   0.7297552,
   0.7412672,
   0.7506425,
   0.7557912,
   0.7549115,
   0.7470012,
   0.7322105,
   0.7119363,
   0.6886222};
   Double_t Graph0_fex1001[24] = {
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
   Double_t Graph0_fey1001[24] = {
   0.1319508,
   0.1771508,
   0.1497953,
   0.149579,
   0.1633058,
   0.1492487,
   0.1453239,
   0.1504285,
   0.1577051,
   0.1463538,
   0.136975,
   0.1329159,
   0.1216209,
   0.1390014,
   0.1434876,
   0.1492243,
   0.1439389,
   0.1316129,
   0.1234754,
   0.1426135,
   0.1521772,
   0.1561265,
   0.1409305,
   0.1449137};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("25 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","25 sub-runs",100,0,394.5);
   Graph_Graph01001->SetMinimum(0.4140443);
   Graph_Graph01001->SetMaximum(0.9432815);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01001->GetXaxis()->CenterTitle(true);
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("#LTy_{1}#GT [mm]");
   Graph_Graph01001->GetYaxis()->CenterTitle(true);
   Graph_Graph01001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.3869849,0.94,0.6130151,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("25 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
