void S12_c_vs_p_pValQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 23 15:28:52 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-6.793213,3378.375,19.82514);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1013[30] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
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
   2350,
   2450,
   2550,
   2650,
   2750,
   2850,
   2950};
   Double_t Graph0_fy1013[30] = {
   14.93059,
   -1.13178,
   -0.5547674,
   -2.245448,
   -1.981604,
   -1.087168,
   -0.6120442,
   -0.5111818,
   -0.4475,
   -0.3646449,
   -0.2767117,
   -0.2242194,
   -0.208606,
   -0.2319704,
   -0.2174611,
   -0.1734826,
   -0.2374581,
   -0.1329736,
   -0.1566501,
   -0.1377279,
   -0.1187591,
   -0.1150587,
   -0.1046583,
   -0.1170833,
   -0.1149152,
   -0.09356501,
   -0.1129844,
   -0.1221453,
   -0.1215675,
   0.07057964};
   Double_t Graph0_fex1013[30] = {
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
   Double_t Graph0_fey1013[30] = {
   0.458164,
   0.7292825,
   0.3294411,
   0.1113726,
   0.0625974,
   0.04797213,
   0.04198078,
   0.03874,
   0.03629217,
   0.03425886,
   0.03253819,
   0.03116739,
   0.029839,
   0.02861519,
   0.02758529,
   0.02668233,
   0.02596522,
   0.02534153,
   0.02475174,
   0.02442113,
   0.02415758,
   0.02389501,
   0.0237409,
   0.023755,
   0.02381276,
   0.02408886,
   0.02435103,
   0.02497646,
   0.02778935,
   0.05635603};
   TGraphErrors *gre = new TGraphErrors(30,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","S12",100,0,3300);
   Graph_Graph01013->SetMinimum(-4.131377);
   Graph_Graph01013->SetMaximum(17.16331);
   Graph_Graph01013->SetDirectory(0);
   Graph_Graph01013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01013->SetLineColor(ci);
   Graph_Graph01013->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01013->GetXaxis()->SetRange(1,91);
   Graph_Graph01013->GetXaxis()->CenterTitle(true);
   Graph_Graph01013->GetXaxis()->SetLabelFont(42);
   Graph_Graph01013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01013->GetXaxis()->SetTitleFont(42);
   Graph_Graph01013->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01013->GetYaxis()->CenterTitle(true);
   Graph_Graph01013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01013->GetYaxis()->SetLabelFont(42);
   Graph_Graph01013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01013->GetYaxis()->SetTitleFont(42);
   Graph_Graph01013->GetZaxis()->SetLabelFont(42);
   Graph_Graph01013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01013);
   
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
