void S0S12S18_Y_RMS_vs_p_trackReco_AAR_125MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 08:59:34 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,11.34464,2727,13.89737);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1055[22] = {
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
   Double_t Graph0_fy1055[22] = {
   12.58304,
   13.01938,
   13.01921,
   12.95366,
   12.9478,
   12.89912,
   12.87566,
   12.86534,
   12.80037,
   12.76169,
   12.77582,
   12.72304,
   12.76479,
   12.72604,
   12.65873,
   12.65788,
   12.61339,
   12.64212,
   12.61031,
   12.63524,
   12.68933,
   12.621};
   Double_t Graph0_fex1055[22] = {
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
   Double_t Graph0_fey1055[22] = {
   0.3275235,
   0.04034075,
   0.02848344,
   0.01954531,
   0.01637067,
   0.01529661,
   0.01508845,
   0.01540324,
   0.01578621,
   0.01646578,
   0.01731991,
   0.01822261,
   0.01979155,
   0.02169923,
   0.02409574,
   0.02694313,
   0.03047282,
   0.03550346,
   0.03892813,
   0.04408816,
   0.0846972,
   0.8509079};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1055,Graph0_fy1055,Graph0_fex1055,Graph0_fey1055);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01055 = new TH1F("Graph_Graph01055","S0S12S18_",100,49.5,3199.5);
   Graph_Graph01055->SetMinimum(11.59991);
   Graph_Graph01055->SetMaximum(13.64209);
   Graph_Graph01055->SetDirectory(0);
   Graph_Graph01055->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01055->SetLineColor(ci);
   Graph_Graph01055->GetXaxis()->SetTitle("p [MeV]: in range p #minus 62 < p < p #plus 62 MeV");
   Graph_Graph01055->GetXaxis()->SetRange(23,78);
   Graph_Graph01055->GetXaxis()->CenterTitle(true);
   Graph_Graph01055->GetXaxis()->SetLabelFont(42);
   Graph_Graph01055->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01055->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01055->GetXaxis()->SetTitleFont(42);
   Graph_Graph01055->GetYaxis()->SetTitle("#sigma_{y} [mm]");
   Graph_Graph01055->GetYaxis()->CenterTitle(true);
   Graph_Graph01055->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01055->GetYaxis()->SetLabelFont(42);
   Graph_Graph01055->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01055->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01055->GetYaxis()->SetTitleFont(42);
   Graph_Graph01055->GetZaxis()->SetLabelFont(42);
   Graph_Graph01055->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01055);
   
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
