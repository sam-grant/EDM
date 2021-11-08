void S12_AEDMOverMaxDiff_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 10:22:36 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-2.625082,2727,0.5307886);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1022[22] = {
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
   Double_t Graph0_fy1022[22] = {
   -0.01083131,
   -0.001406676,
   0.0003228575,
   -0.0002018099,
   0.0002668629,
   1.314206e-05,
   0.0003995803,
   6.746494e-05,
   -0.0002024208,
   -7.493456e-06,
   -0.0001749138,
   0.0003095104,
   -0.0004030663,
   0.0001683857,
   -0.0003734059,
   -0.000267169,
   0.0001994261,
   -0.0001714934,
   0.0004864873,
   -0.0004953865,
   0.002594259,
   -2.099104};
   Double_t Graph0_fex1022[22] = {
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
   Double_t Graph0_fey1022[22] = {
   -0.01195066,
   -0.0007634064,
   0.0004171238,
   -0.0002983287,
   0.0002236771,
   0.0001939186,
   0.0001930147,
   0.0001812182,
   -0.00016749,
   -0.0001913834,
   -0.0001627236,
   0.0002351608,
   -0.0002152431,
   0.000272542,
   -0.0003311184,
   -0.0003618253,
   0.0003868539,
   -0.0005415784,
   0.0005963986,
   -0.0008941535,
   0.002215821,
   -0.9130129};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1022,Graph0_fy1022,Graph0_fex1022,Graph0_fey1022);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01022 = new TH1F("Graph_Graph01022","S12",100,49.5,3199.5);
   Graph_Graph01022->SetMinimum(-2.309495);
   Graph_Graph01022->SetMaximum(0.2152015);
   Graph_Graph01022->SetDirectory(0);
   Graph_Graph01022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01022->SetLineColor(ci);
   Graph_Graph01022->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01022->GetXaxis()->SetRange(23,78);
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
