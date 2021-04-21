void S12_c_vs_p_noBr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 29 10:23:29 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(249.5,-0.7599336,2850.5,0.1362468);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1081[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t Graph0_fy1081[17] = {
   -0.5424581,
   -0.4425343,
   -0.3468407,
   -0.290668,
   -0.2738864,
   -0.2141361,
   -0.1469942,
   -0.1535545,
   -0.2193939,
   -0.1708852,
   -0.1801625,
   -0.1515394,
   -0.1804709,
   -0.1131139,
   -0.07180491,
   -0.05488016,
   -0.1006242};
   Double_t Graph0_fex1081[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1081[17] = {
   0.06811209,
   0.06383464,
   0.06002685,
   0.05721878,
   0.05450009,
   0.05233298,
   0.0502949,
   0.04850455,
   0.04682092,
   0.04538962,
   0.04439489,
   0.04364594,
   0.04275189,
   0.04240654,
   0.0421295,
   0.04176354,
   0.04165258};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1081,Graph0_fy1081,Graph0_fex1081,Graph0_fey1081);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01081 = new TH1F("Graph_Graph01081","S12",100,530,2570);
   Graph_Graph01081->SetMinimum(-0.6703155);
   Graph_Graph01081->SetMaximum(0.04662874);
   Graph_Graph01081->SetDirectory(0);
   Graph_Graph01081->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01081->SetLineColor(ci);
   Graph_Graph01081->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01081->GetXaxis()->SetRange(0,101);
   Graph_Graph01081->GetXaxis()->CenterTitle(true);
   Graph_Graph01081->GetXaxis()->SetLabelFont(42);
   Graph_Graph01081->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01081->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01081->GetXaxis()->SetTitleFont(42);
   Graph_Graph01081->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01081->GetYaxis()->CenterTitle(true);
   Graph_Graph01081->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01081->GetYaxis()->SetLabelFont(42);
   Graph_Graph01081->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01081->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01081->GetYaxis()->SetTitleFont(42);
   Graph_Graph01081->GetZaxis()->SetLabelFont(42);
   Graph_Graph01081->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01081);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
