void S0S12S18_AEDMOverMaxDiff_vs_p_trackReco_AAR_125MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 08:59:34 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-0.3332049,2727,0.0733868);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1060[22] = {
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
   Double_t Graph0_fy1060[22] = {
   -0.02253077,
   -0.001707904,
   0.00202258,
   -0.0007805678,
   -0.000223723,
   0.0001448301,
   -8.122892e-05,
   0.0008917862,
   0.0003005433,
   -0.0005017558,
   0.0004753994,
   -7.158609e-05,
   -0.0002111135,
   0.001404647,
   0.0004569754,
   -0.002092291,
   -0.0006779872,
   0.001078642,
   -0.002034033,
   -0.0005010254,
   0.001597889,
   -0.2654396};
   Double_t Graph0_fex1060[22] = {
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
   Double_t Graph0_fey1060[22] = {
   -0.008926085,
   -0.001549839,
   0.001153871,
   -0.0007304304,
   -0.0006382972,
   0.0005457197,
   -0.0005724382,
   0.0005854198,
   0.0006256893,
   -0.0006221935,
   0.0006528394,
   -0.0006931763,
   -0.000808987,
   0.0008490007,
   0.0008400923,
   -0.0009550994,
   -0.001245291,
   0.001426119,
   -0.001627534,
   -0.001596176,
   0.004023619,
   -0.05664874};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1060,Graph0_fy1060,Graph0_fex1060,Graph0_fey1060);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01060 = new TH1F("Graph_Graph01060","S0S12S18_",100,49.5,3199.5);
   Graph_Graph01060->SetMinimum(-0.2925458);
   Graph_Graph01060->SetMaximum(0.03272762);
   Graph_Graph01060->SetDirectory(0);
   Graph_Graph01060->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01060->SetLineColor(ci);
   Graph_Graph01060->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 62 < p < p #plus 62 MeV");
   Graph_Graph01060->GetXaxis()->SetRange(23,78);
   Graph_Graph01060->GetXaxis()->CenterTitle(true);
   Graph_Graph01060->GetXaxis()->SetLabelFont(42);
   Graph_Graph01060->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01060->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01060->GetXaxis()->SetTitleFont(42);
   Graph_Graph01060->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX}");
   Graph_Graph01060->GetYaxis()->CenterTitle(true);
   Graph_Graph01060->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01060->GetYaxis()->SetLabelFont(42);
   Graph_Graph01060->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01060->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01060->GetYaxis()->SetTitleFont(42);
   Graph_Graph01060->GetZaxis()->SetLabelFont(42);
   Graph_Graph01060->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01060->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01060);
   
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
