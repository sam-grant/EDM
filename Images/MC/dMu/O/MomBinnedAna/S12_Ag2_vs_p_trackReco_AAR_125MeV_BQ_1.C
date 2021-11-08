void S12_Ag2_vs_p_trackReco_AAR_125MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 08:59:32 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-25.03619,2727,7.917645);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1023[22] = {
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
   Double_t Graph0_fy1023[22] = {
   -18.37789,
   -0.151978,
   -0.1611087,
   0.084052,
   0.1412943,
   0.02933391,
   -0.1917907,
   -0.09627834,
   0.09381062,
   -0.01797055,
   0.021998,
   0.1652873,
   0.04141307,
   -0.2210645,
   -0.0138054,
   -0.01548273,
   0.1406943,
   -0.118112,
   0.06705044,
   -0.1960828,
   -0.1111395,
   0.5911951};
   Double_t Graph0_fex1023[22] = {
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
   Double_t Graph0_fey1023[22] = {
   1.165993,
   0.4214895,
   0.2746239,
   0.1655256,
   0.1263709,
   0.1081721,
   0.09811131,
   0.09255984,
   0.08827523,
   0.08596415,
   0.08435677,
   0.08176889,
   0.0822335,
   0.08384491,
   0.08622698,
   0.08888348,
   0.09244802,
   0.09622828,
   0.09455635,
   0.09183096,
   0.1487222,
   1.834144};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1023,Graph0_fy1023,Graph0_fex1023,Graph0_fey1023);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01023 = new TH1F("Graph_Graph01023","S12_",100,49.5,3199.5);
   Graph_Graph01023->SetMinimum(-21.7408);
   Graph_Graph01023->SetMaximum(4.622261);
   Graph_Graph01023->SetDirectory(0);
   Graph_Graph01023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01023->SetLineColor(ci);
   Graph_Graph01023->GetXaxis()->SetTitle("p [MeV]: in range p #minus 62 < p < p #plus 62 MeV");
   Graph_Graph01023->GetXaxis()->SetRange(23,78);
   Graph_Graph01023->GetXaxis()->CenterTitle(true);
   Graph_Graph01023->GetXaxis()->SetLabelFont(42);
   Graph_Graph01023->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01023->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01023->GetXaxis()->SetTitleFont(42);
   Graph_Graph01023->GetYaxis()->SetTitle("A_{g#minus2} [mrad]");
   Graph_Graph01023->GetYaxis()->CenterTitle(true);
   Graph_Graph01023->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01023->GetYaxis()->SetLabelFont(42);
   Graph_Graph01023->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01023->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01023->GetYaxis()->SetTitleFont(42);
   Graph_Graph01023->GetZaxis()->SetLabelFont(42);
   Graph_Graph01023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01023);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
