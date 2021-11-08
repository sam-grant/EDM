void S0S12S18_theta_Y_RMS_vs_p_trackReco_AAR_125MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 08:59:34 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-2.935416,2727,38.21326);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1054[22] = {
   312,
   437,
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687,
   2812,
   2937};
   Double_t Graph0_fy1054[22] = {
   28.75086,
   31.25829,
   28.01131,
   24.61235,
   22.2623,
   20.32719,
   18.69492,
   17.30588,
   16.05213,
   14.91236,
   13.84634,
   12.82468,
   11.88302,
   10.95412,
   10.05998,
   9.180122,
   8.363196,
   7.472231,
   6.621068,
   5.725486,
   4.926855,
   4.206284};
   Double_t Graph0_fex1054[22] = {
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
   Double_t Graph0_fey1054[22] = {
   0.7483551,
   0.0968543,
   0.06128318,
   0.03713669,
   0.02814754,
   0.02410527,
   0.02190778,
   0.0207197,
   0.01979649,
   0.01924064,
   0.01877118,
   0.01836819,
   0.01842437,
   0.01867792,
   0.01914892,
   0.0195404,
   0.02020473,
   0.02098461,
   0.02043929,
   0.01997795,
   0.03288518,
   0.2835876};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1054,Graph0_fy1054,Graph0_fex1054,Graph0_fey1054);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01054 = new TH1F("Graph_Graph01054","S0S12S18_",100,49.5,3199.5);
   Graph_Graph01054->SetMinimum(1.179452);
   Graph_Graph01054->SetMaximum(34.09839);
   Graph_Graph01054->SetDirectory(0);
   Graph_Graph01054->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01054->SetLineColor(ci);
   Graph_Graph01054->GetXaxis()->SetTitle("p [MeV]: in range p #minus 62 < p < p #plus 62 MeV");
   Graph_Graph01054->GetXaxis()->SetRange(23,78);
   Graph_Graph01054->GetXaxis()->CenterTitle(true);
   Graph_Graph01054->GetXaxis()->SetLabelFont(42);
   Graph_Graph01054->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01054->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01054->GetXaxis()->SetTitleFont(42);
   Graph_Graph01054->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad]");
   Graph_Graph01054->GetYaxis()->CenterTitle(true);
   Graph_Graph01054->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01054->GetYaxis()->SetLabelFont(42);
   Graph_Graph01054->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01054->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01054->GetYaxis()->SetTitleFont(42);
   Graph_Graph01054->GetZaxis()->SetLabelFont(42);
   Graph_Graph01054->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01054->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01054);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
