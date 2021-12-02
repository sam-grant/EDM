void S12S18_AEDMOverMaxDiff_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:22:25 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.2994,-0.0002600019,2723.26,0.006746811);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1049[22] = {
   366.6885,
   456.9353,
   570.4228,
   694.9017,
   815.8352,
   938.5325,
   1062.75,
   1188.288,
   1312.703,
   1435.863,
   1561.905,
   1685.207,
   1810.547,
   1935.125,
   2060.257,
   2184.91,
   2309.213,
   2433.147,
   2559.646,
   2678.447,
   2781.41,
   2886.078};
   Double_t Graph0_fy1049[22] = {
   0.1412986,
   0.002001074,
   0.0029993,
   0.002443296,
   0.003545687,
   0.003699278,
   0.00319625,
   0.001821795,
   0.003888679,
   0.0007888624,
   0.003120091,
   0.002552419,
   0.001810675,
   0.0004329622,
   0.005474877,
   0.0029471,
   0.00134618,
   0.005604615,
   0.0007815898,
   0.0009348853,
   0.0066802,
   -0.8256823};
   Double_t Graph0_fex1049[22] = {
   0.2309951,
   0.1092124,
   0.07251533,
   0.04962127,
   0.03997118,
   0.03612002,
   0.0342106,
   0.0331161,
   0.03358597,
   0.0338255,
   0.03626653,
   0.03827066,
   0.04313196,
   0.04714073,
   0.05401014,
   0.05961023,
   0.0687829,
   0.08272529,
   0.09827916,
   0.1129676,
   0.233546,
   1.023868};
   Double_t Graph0_fey1049[22] = {
   0.0486731,
   0.00507269,
   0.002900633,
   0.001993384,
   0.00158236,
   0.001415272,
   0.001349237,
   0.001306535,
   0.001314078,
   0.001335094,
   0.001424518,
   0.001511296,
   0.001693501,
   0.001857793,
   0.002116854,
   0.002346505,
   0.002708967,
   0.003258211,
   0.003856216,
   0.004696895,
   0.01276027,
   -0.1539982};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1049,Graph0_fy1049,Graph0_fex1049,Graph0_fey1049);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01049 = new TH1F("Graph_Graph01049","S12S18",100,114.3931,3139.166);
   Graph_Graph01049->SetMinimum(0.0004406794);
   Graph_Graph01049->SetMaximum(0.00604613);
   Graph_Graph01049->SetDirectory(0);
   Graph_Graph01049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01049->SetLineColor(ci);
   Graph_Graph01049->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01049->GetXaxis()->SetRange(22,79);
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
