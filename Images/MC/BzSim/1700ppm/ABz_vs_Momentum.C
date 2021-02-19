void ABz_vs_Momentum()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb 18 22:57:19 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(350,0.01998458,2750,0.3315433);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1002[17] = {
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
   Double_t Graph0_fy1002[17] = {
   0.2135025,
   0.1967428,
   0.2390244,
   0.134553,
   0.1512046,
   0.1423535,
   0.1929636,
   0.1774464,
   0.1502459,
   0.1422367,
   0.1761308,
   0.2166506,
   0.1044283,
   0.1247513,
   0.1715468,
   0.1710804,
   0.1750393};
   Double_t Graph0_fex1002[17] = {
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
   Double_t Graph0_fey1002[17] = {
   0.05347117,
   0.04561884,
   0.0405925,
   0.03769524,
   0.03593912,
   0.03454051,
   0.03355521,
   0.03287319,
   0.03222569,
   0.03159261,
   0.03160667,
   0.03182095,
   0.03251725,
   0.03328609,
   0.03416753,
   0.03533651,
   0.03646166};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 50 < p < p #plus 50 MeV;A_{Bz} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01002 = new TH1F("Graph_Graph01002","",100,590,2510);
   Graph_Graph01002->SetMinimum(0.05114046);
   Graph_Graph01002->SetMaximum(0.3003875);
   Graph_Graph01002->SetDirectory(0);
   Graph_Graph01002->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01002->SetLineColor(ci);
   Graph_Graph01002->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01002->GetXaxis()->CenterTitle(true);
   Graph_Graph01002->GetXaxis()->SetLabelFont(42);
   Graph_Graph01002->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01002->GetXaxis()->SetTitleFont(42);
   Graph_Graph01002->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01002->GetYaxis()->CenterTitle(true);
   Graph_Graph01002->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01002->GetYaxis()->SetLabelFont(42);
   Graph_Graph01002->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01002->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph01002->GetYaxis()->SetTitleFont(42);
   Graph_Graph01002->GetZaxis()->SetLabelFont(42);
   Graph_Graph01002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01002);
   
   
   TF1 *pol01003 = new TF1("pol0","pol0",590,2510, TF1::EAddToList::kNo);
   pol01003->SetNpx(10000);
   pol01003->SetFillColor(19);
   pol01003->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   pol01003->SetLineColor(ci);
   pol01003->SetLineWidth(3);
   pol01003->SetChisquare(15.25111);
   pol01003->SetNDF(16);
   pol01003->GetXaxis()->SetLabelFont(42);
   pol01003->GetXaxis()->SetTitleOffset(1);
   pol01003->GetXaxis()->SetTitleFont(42);
   pol01003->GetYaxis()->SetLabelFont(42);
   pol01003->GetYaxis()->SetTitleFont(42);
   pol01003->SetParameter(0,0.1658679);
   pol01003->SetParError(0,0.008519291);
   pol01003->SetParLimits(0,0,0);
   pol01003->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01003);
   
   TPaveStats *ptstats = new TPaveStats(0.13,0.77,0.49,0.89,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(0);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 15.25 / 16");
   ptstats_LaTex = ptstats->AddText("#LTA_{B_{z}}#GT [ppm] = 0.1659 #pm 0.008519 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   gre->Draw("ap");
   
   TF1 *pol01004 = new TF1("pol0","pol0",590,2510, TF1::EAddToList::kNo);
   pol01004->SetNpx(10000);
   pol01004->SetFillColor(19);
   pol01004->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   pol01004->SetLineColor(ci);
   pol01004->SetLineWidth(3);
   pol01004->SetChisquare(15.25111);
   pol01004->SetNDF(16);
   pol01004->GetXaxis()->SetLabelFont(42);
   pol01004->GetXaxis()->SetTitleOffset(1);
   pol01004->GetXaxis()->SetTitleFont(42);
   pol01004->GetYaxis()->SetLabelFont(42);
   pol01004->GetYaxis()->SetTitleFont(42);
   pol01004->SetParameter(0,0.1658679);
   pol01004->SetParError(0,0.008519291);
   pol01004->SetParLimits(0,0,0);
   pol01004->Draw("SAME");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
