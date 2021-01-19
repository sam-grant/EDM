void y_vs_theta_14()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 13 17:10:51 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-49.3125,72.96876,443.8125,75.71318);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1002[24] = {
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
   Double_t Graph0_fy1002[24] = {
   74.17131,
   74.0195,
   74.98843,
   74.13781,
   74.77277,
   74.54814,
   74.81656,
   74.5297,
   73.81528,
   74.19978,
   73.46069,
   74.09314,
   74.52132,
   74.08153,
   74.94343,
   74.34594,
   74.85349,
   75.22044,
   74.38178,
   74.34517,
   74.16164,
   74.20377,
   74.26838,
   74.3458};
   Double_t Graph0_fex1002[24] = {
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
   Double_t Graph0_fey1002[24] = {
   0.03538156,
   0.03526336,
   0.03558669,
   0.03556011,
   0.03506111,
   0.03581652,
   0.0366608,
   0.03599321,
   0.03588587,
   0.03623525,
   0.03452677,
   0.03519876,
   0.03404254,
   0.03506737,
   0.03490473,
   0.03579882,
   0.03630063,
   0.03534273,
   0.03495834,
   0.03577183,
   0.03569334,
   0.03546803,
   0.03565149,
   0.03579116};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle(";#theta [deg];y [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01002 = new TH1F("Graph_Graph01002","",100,0,394.5);
   Graph_Graph01002->SetMinimum(73.2432);
   Graph_Graph01002->SetMaximum(75.43874);
   Graph_Graph01002->SetDirectory(0);
   Graph_Graph01002->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01002->SetLineColor(ci);
   Graph_Graph01002->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01002->GetXaxis()->CenterTitle(true);
   Graph_Graph01002->GetXaxis()->SetLabelFont(42);
   Graph_Graph01002->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01002->GetXaxis()->SetTitleFont(42);
   Graph_Graph01002->GetYaxis()->SetTitle("y [mm]");
   Graph_Graph01002->GetYaxis()->CenterTitle(true);
   Graph_Graph01002->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01002->GetYaxis()->SetLabelFont(42);
   Graph_Graph01002->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01002->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01002->GetYaxis()->SetTitleFont(42);
   Graph_Graph01002->GetZaxis()->SetLabelFont(42);
   Graph_Graph01002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01002);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
