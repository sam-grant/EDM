void S0_AEDM_vs_p_trackReco_AAR_125MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 08:59:32 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-41.73203,2727,9.032815);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1012[22] = {
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
   Double_t Graph0_fy1012[22] = {
   -31.77145,
   0.08666378,
   -0.1932678,
   0.02116822,
   -0.1609961,
   -0.04348065,
   0.03966701,
   0.1784524,
   0.02270035,
   -0.03559614,
   0.1026852,
   -0.0287116,
   0.04907108,
   0.01252023,
   -0.02291702,
   -0.1328944,
   -0.05084681,
   -0.01887845,
   -0.01289716,
   0.09858696,
   -0.03037732,
   -3.465142};
   Double_t Graph0_fex1012[22] = {
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
   Double_t Graph0_fey1012[22] = {
   1.499767,
   0.4853433,
   0.3071436,
   0.1860825,
   0.142062,
   0.122198,
   0.1107365,
   0.1050352,
   0.1001707,
   0.09700229,
   0.09457627,
   0.09247038,
   0.09226486,
   0.09198181,
   0.09343326,
   0.09313507,
   0.09628905,
   0.09900692,
   0.09586595,
   0.09435519,
   0.1456471,
   0.5606621};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1012,Graph0_fy1012,Graph0_fex1012,Graph0_fey1012);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01012 = new TH1F("Graph_Graph01012","S0_",100,49.5,3199.5);
   Graph_Graph01012->SetMinimum(-36.65555);
   Graph_Graph01012->SetMaximum(3.95633);
   Graph_Graph01012->SetDirectory(0);
   Graph_Graph01012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01012->SetLineColor(ci);
   Graph_Graph01012->GetXaxis()->SetTitle("p [MeV]: in range p #minus 62 < p < p #plus 62 MeV");
   Graph_Graph01012->GetXaxis()->SetRange(23,78);
   Graph_Graph01012->GetXaxis()->CenterTitle(true);
   Graph_Graph01012->GetXaxis()->SetLabelFont(42);
   Graph_Graph01012->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01012->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01012->GetXaxis()->SetTitleFont(42);
   Graph_Graph01012->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01012->GetYaxis()->CenterTitle(true);
   Graph_Graph01012->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01012->GetYaxis()->SetLabelFont(42);
   Graph_Graph01012->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01012->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01012->GetYaxis()->SetTitleFont(42);
   Graph_Graph01012->GetZaxis()->SetLabelFont(42);
   Graph_Graph01012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01012);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
