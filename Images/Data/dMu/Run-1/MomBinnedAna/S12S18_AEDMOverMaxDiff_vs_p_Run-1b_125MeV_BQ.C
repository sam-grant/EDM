void S12S18_AEDMOverMaxDiff_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 16:15:32 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8897,1.339059e-05,2728.021,0.008298626);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1049[22] = {
   367.2385,
   456.7075,
   570.1081,
   694.7359,
   815.8178,
   938.6514,
   1062.74,
   1188.098,
   1312.71,
   1435.778,
   1562.012,
   1685.106,
   1810.598,
   1935.076,
   2060.312,
   2184.99,
   2309.085,
   2433.14,
   2559.752,
   2678.662,
   2780.904,
   2886.857};
   Double_t Graph0_fy1049[22] = {
   0.01948845,
   0.0098104,
   0.006703581,
   0.002989056,
   0.003886216,
   0.00217367,
   0.003379952,
   0.0009979578,
   0.002410633,
   0.001479896,
   0.001688774,
   0.001235544,
   0.0009340232,
   0.002836654,
   0.00605642,
   0.001514595,
   0.006796865,
   0.00600202,
   0.002231067,
   -0.001620545,
   0.03412789,
   0.1709696};
   Double_t Graph0_fex1049[22] = {
   0.1830309,
   0.09171714,
   0.06159356,
   0.04208012,
   0.03402449,
   0.03067219,
   0.02917568,
   0.02818454,
   0.02862272,
   0.02882038,
   0.03089893,
   0.03263451,
   0.03667816,
   0.04023789,
   0.04606633,
   0.05078197,
   0.05867116,
   0.07077055,
   0.0840277,
   0.09624685,
   0.1948998,
   1.250899};
   Double_t Graph0_fey1049[22] = {
   0.04234045,
   0.004276681,
   0.002458126,
   0.001690074,
   0.001344925,
   0.001204752,
   0.001149419,
   0.001113148,
   0.001120904,
   0.001137565,
   0.001213801,
   0.00128663,
   0.001440713,
   0.001589569,
   0.001807013,
   0.001996929,
   0.00230913,
   0.002786972,
   0.003303868,
   -0.0040232,
   0.0109398,
   0.05343197};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1049,Graph0_fy1049,Graph0_fex1049,Graph0_fey1049);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01049 = new TH1F("Graph_Graph01049","S12S18",100,114.9502,3140.213);
   Graph_Graph01049->SetMinimum(0.0008419142);
   Graph_Graph01049->SetMaximum(0.007470103);
   Graph_Graph01049->SetDirectory(0);
   Graph_Graph01049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01049->SetLineColor(ci);
   Graph_Graph01049->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01049->GetXaxis()->SetRange(21,79);
   Graph_Graph01049->GetXaxis()->CenterTitle(true);
   Graph_Graph01049->GetXaxis()->SetLabelFont(42);
   Graph_Graph01049->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01049->GetXaxis()->SetTitleFont(42);
   Graph_Graph01049->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01049->GetYaxis()->CenterTitle(true);
   Graph_Graph01049->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01049->GetYaxis()->SetLabelFont(42);
   Graph_Graph01049->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01049->GetYaxis()->SetTitleFont(42);
   Graph_Graph01049->GetZaxis()->SetLabelFont(42);
   Graph_Graph01049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01049);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
