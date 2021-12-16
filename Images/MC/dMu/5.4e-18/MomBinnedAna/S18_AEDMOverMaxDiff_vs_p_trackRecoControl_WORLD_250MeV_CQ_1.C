void S18_AEDMOverMaxDiff_vs_p_trackRecoControl_WORLD_250MeV_CQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:27:40 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.784,-0.001647608,3508.056,0.001472833);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1150[12] = {
   188.9285,
   434.8157,
   652.8408,
   884.0785,
   1126.173,
   1373.702,
   1622.569,
   1870.669,
   2119.017,
   2366.486,
   2613.314,
   2823.639};
   Double_t Graph0_fy1150[12] = {
   -0.0004701107,
   -0.001693413,
   0.0003456704,
   0.0006697942,
   0.0006927245,
   0.0009178812,
   0.0008667603,
   0.0008278991,
   0.0007168551,
   0.0005026585,
   0.0005292974,
   0.0001341154};
   Double_t Graph0_fex1150[12] = {
   1.031071,
   0.2060205,
   0.1131189,
   0.07628962,
   0.07052248,
   0.07063667,
   0.07371139,
   0.0797559,
   0.09034869,
   0.1064703,
   0.1344564,
   0.1680666};
   Double_t Graph0_fey1150[12] = {
   -0.008502604,
   -0.001102245,
   0.0003600912,
   0.0001887559,
   0.0001437354,
   0.0001239115,
   0.000112968,
   0.0001079847,
   0.0001073212,
   0.0001094777,
   0.0001174184,
   0.0001728779};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1150,Graph0_fy1150,Graph0_fex1150,Graph0_fey1150);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01150 = new TH1F("Graph_Graph01150","S18_",100,0,3087.398);
   Graph_Graph01150->SetMinimum(-0.001335563);
   Graph_Graph01150->SetMaximum(0.001160789);
   Graph_Graph01150->SetDirectory(0);
   Graph_Graph01150->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01150->SetLineColor(ci);
   Graph_Graph01150->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01150->GetXaxis()->SetRange(1,101);
   Graph_Graph01150->GetXaxis()->CenterTitle(true);
   Graph_Graph01150->GetXaxis()->SetLabelFont(42);
   Graph_Graph01150->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01150->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01150->GetXaxis()->SetTitleFont(42);
   Graph_Graph01150->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01150->GetYaxis()->CenterTitle(true);
   Graph_Graph01150->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01150->GetYaxis()->SetLabelFont(42);
   Graph_Graph01150->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01150->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01150->GetYaxis()->SetTitleFont(42);
   Graph_Graph01150->GetZaxis()->SetLabelFont(42);
   Graph_Graph01150->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01150->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01150);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
