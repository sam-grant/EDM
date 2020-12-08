void y1_vs_theta_NSUBRUNS_250()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 27 09:19:56 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-49.3125,0.5121862,443.8125,0.8574328);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1028[24] = {
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
   Double_t Graph0_fy1028[24] = {
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
   Double_t Graph0_fex1028[24] = {
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
   Double_t Graph0_fey1028[24] = {
   0.04182525,
   0.05597218,
   0.04735702,
   0.04739784,
   0.05172589,
   0.0472722,
   0.04607597,
   0.04753407,
   0.05010437,
   0.04617692,
   0.04331479,
   0.0419779,
   0.03847717,
   0.04380251,
   0.04561899,
   0.0473387,
   0.04519202,
   0.04163309,
   0.03909563,
   0.04498014,
   0.04804343,
   0.04963795,
   0.04456516,
   0.04606199};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1028,Graph0_fy1028,Graph0_fex1028,Graph0_fey1028);
   gre->SetName("Graph0");
   gre->SetTitle("250 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01028 = new TH1F("Graph_Graph01028","250 sub-runs",100,0,394.5);
   Graph_Graph01028->SetMinimum(0.5467109);
   Graph_Graph01028->SetMaximum(0.8229081);
   Graph_Graph01028->SetDirectory(0);
   Graph_Graph01028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01028->SetLineColor(ci);
   Graph_Graph01028->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01028->GetXaxis()->CenterTitle(true);
   Graph_Graph01028->GetXaxis()->SetLabelFont(42);
   Graph_Graph01028->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01028->GetXaxis()->SetTitleFont(42);
   Graph_Graph01028->GetYaxis()->SetTitle("#LTy_{1}#GT [mm]");
   Graph_Graph01028->GetYaxis()->CenterTitle(true);
   Graph_Graph01028->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01028->GetYaxis()->SetLabelFont(42);
   Graph_Graph01028->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01028->GetYaxis()->SetTitleFont(42);
   Graph_Graph01028->GetZaxis()->SetLabelFont(42);
   Graph_Graph01028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01028);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("250 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
