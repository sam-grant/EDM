void S0_AEDM_vs_p_pValQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Mar 25 09:24:56 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-8.618694,3378.375,38.40679);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1072[30] = {
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
   Double_t Graph0_fy1072[30] = {
   29.92956,
   0.3352361,
   -0.3059067,
   0.1294358,
   -0.1271239,
   0.169369,
   0.1206133,
   0.1289312,
   0.2207894,
   0.23074,
   0.1728789,
   0.1824792,
   0.1731613,
   0.2270468,
   0.1321397,
   0.2054003,
   0.1054635,
   0.1702237,
   0.1686158,
   0.2011843,
   0.1569504,
   0.1392314,
   0.1880951,
   0.1264212,
   0.1010741,
   0.1098891,
   0.05775375,
   0.06545342,
   0.09551372,
   -0.03630318};
   Double_t Graph0_fex1072[30] = {
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
   Double_t Graph0_fey1072[30] = {
   0.6396475,
   1.072317,
   0.4752066,
   0.1627263,
   0.08794333,
   0.06759092,
   0.05946794,
   0.05491355,
   0.05131076,
   0.04840465,
   0.04589033,
   0.04378087,
   0.04190824,
   0.04024409,
   0.03882872,
   0.03767378,
   0.03659191,
   0.03551492,
   0.03474406,
   0.03434544,
   0.03395082,
   0.03355196,
   0.0333063,
   0.03302103,
   0.03322716,
   0.03325592,
   0.03351272,
   0.03427436,
   0.0379633,
   0.07447647};
   TGraphErrors *gre = new TGraphErrors(30,Graph0_fx1072,Graph0_fy1072,Graph0_fex1072,Graph0_fey1072);
   gre->SetName("Graph0");
   gre->SetTitle("S0");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01072 = new TH1F("Graph_Graph01072","S0",100,0,3300);
   Graph_Graph01072->SetMinimum(-3.916146);
   Graph_Graph01072->SetMaximum(33.70424);
   Graph_Graph01072->SetDirectory(0);
   Graph_Graph01072->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01072->SetLineColor(ci);
   Graph_Graph01072->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01072->GetXaxis()->SetRange(1,91);
   Graph_Graph01072->GetXaxis()->CenterTitle(true);
   Graph_Graph01072->GetXaxis()->SetLabelFont(42);
   Graph_Graph01072->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01072->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01072->GetXaxis()->SetTitleFont(42);
   Graph_Graph01072->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01072->GetYaxis()->CenterTitle(true);
   Graph_Graph01072->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01072->GetYaxis()->SetLabelFont(42);
   Graph_Graph01072->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01072->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01072->GetYaxis()->SetTitleFont(42);
   Graph_Graph01072->GetZaxis()->SetLabelFont(42);
   Graph_Graph01072->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01072->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01072);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4680151,0.94,0.5319849,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
