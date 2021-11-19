void S12_AEDMOverMaxDiff_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:58:37 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.6005,-0.1214852,2723.732,0.307977);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1022[22] = {
   367.0269,
   456.6667,
   570.2027,
   694.9963,
   815.9344,
   938.7277,
   1062.744,
   1188.292,
   1312.721,
   1435.939,
   1561.982,
   1685.236,
   1810.656,
   1935.236,
   2060.309,
   2185.156,
   2309.179,
   2433.028,
   2559.419,
   2679.279,
   2780.747,
   2885.683};
   Double_t Graph0_fy1022[22] = {
   0.01808198,
   0.0003207685,
   -0.0005041531,
   0.0004511014,
   0.0003834095,
   -0.0003314927,
   9.454652e-05,
   0.0004724623,
   3.64959e-05,
   -0.0002932761,
   -0.0003241805,
   7.306711e-05,
   0.000493171,
   0.0001861627,
   -0.0002079048,
   0.00017866,
   -0.0001897445,
   5.033381e-05,
   0.001086428,
   0.0002394633,
   -0.003309706,
   0.09324592};
   Double_t Graph0_fex1022[22] = {
   0.2809989,
   0.1434501,
   0.09718036,
   0.06560101,
   0.05251597,
   0.04720066,
   0.04485482,
   0.04328223,
   0.04380127,
   0.04396092,
   0.04712161,
   0.04946722,
   0.05541415,
   0.06060924,
   0.06907715,
   0.07608883,
   0.08791489,
   0.1052625,
   0.125985,
   0.1449659,
   0.290637,
   1.90302};
   Double_t Graph0_fey1022[22] = {
   0.01802593,
   0.001038262,
   -0.0005182143,
   0.0003447479,
   0.000274761,
   -0.0002387374,
   0.0001982671,
   0.0002081909,
   0.0002435443,
   -0.0002050713,
   -0.0002766587,
   0.0003135443,
   0.0003002399,
   0.0003943136,
   -0.000400762,
   0.000426738,
   -0.0006737252,
   0.0006978951,
   0.0008395992,
   0.0009740168,
   -0.002303828,
   0.1431541};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1022,Graph0_fy1022,Graph0_fex1022,Graph0_fey1022);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01022 = new TH1F("Graph_Graph01022","S12",100,114.6618,3139.67);
   Graph_Graph01022->SetMinimum(-0.07853896);
   Graph_Graph01022->SetMaximum(0.2650308);
   Graph_Graph01022->SetDirectory(0);
   Graph_Graph01022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01022->SetLineColor(ci);
   Graph_Graph01022->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01022->GetXaxis()->SetRange(22,79);
   Graph_Graph01022->GetXaxis()->CenterTitle(true);
   Graph_Graph01022->GetXaxis()->SetLabelFont(42);
   Graph_Graph01022->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01022->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01022->GetXaxis()->SetTitleFont(42);
   Graph_Graph01022->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01022->GetYaxis()->CenterTitle(true);
   Graph_Graph01022->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01022->GetYaxis()->SetLabelFont(42);
   Graph_Graph01022->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01022->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01022->GetYaxis()->SetTitleFont(42);
   Graph_Graph01022->GetZaxis()->SetLabelFont(42);
   Graph_Graph01022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01022);
   
   gre->Draw("alp");
   
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
