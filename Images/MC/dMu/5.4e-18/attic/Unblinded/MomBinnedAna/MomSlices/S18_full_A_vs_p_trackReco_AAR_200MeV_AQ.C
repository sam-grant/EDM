void S18_full_A_vs_p_trackReco_AAR_200MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 20:09:41 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-0.6744641,3456.75,6.211997);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1106[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1106[15] = {
   3.81902,
   0.2412214,
   0.06412849,
   0.1462362,
   0.09149752,
   0.1763944,
   0.1579383,
   0.1440089,
   0.1558307,
   0.1364812,
   0.1207585,
   0.1046109,
   0.1584664,
   0.09714349,
   0.05869304};
   Double_t Graph0_fex1106[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1106[15] = {
   1.203641,
   0.1536034,
   0.04837057,
   0.03618858,
   0.0316348,
   0.02920856,
   0.02734568,
   0.02591569,
   0.02515121,
   0.02517262,
   0.02571831,
   0.02718833,
   0.02863812,
   0.02765748,
   0.0367134};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1106,Graph0_fy1106,Graph0_fex1106,Graph0_fey1106);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01106 = new TH1F("Graph_Graph01106","S18",100,0,3300);
   Graph_Graph01106->SetMinimum(0.01418212);
   Graph_Graph01106->SetMaximum(5.523351);
   Graph_Graph01106->SetDirectory(0);
   Graph_Graph01106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01106->SetLineColor(ci);
   Graph_Graph01106->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01106->GetXaxis()->SetRange(0,93);
   Graph_Graph01106->GetXaxis()->CenterTitle(true);
   Graph_Graph01106->GetXaxis()->SetLabelFont(42);
   Graph_Graph01106->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01106->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01106->GetXaxis()->SetTitleFont(42);
   Graph_Graph01106->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01106->GetYaxis()->CenterTitle(true);
   Graph_Graph01106->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01106->GetYaxis()->SetLabelFont(42);
   Graph_Graph01106->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01106->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01106->GetYaxis()->SetTitleFont(42);
   Graph_Graph01106->GetZaxis()->SetLabelFont(42);
   Graph_Graph01106->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01106->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01106);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
