void S18_AEDMOverMaxDiff_vs_p_trackReco_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:16:10 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-336.1968,-0.0008684141,3334.918,0.004216222);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1076[12] = {
   173.6776,
   432.6457,
   628.4854,
   873.0358,
   1121.705,
   1371.345,
   1619.918,
   1867.917,
   2115.728,
   2363.438,
   2614.549,
   2825.909};
   Double_t Graph0_fy1076[12] = {
   0.002350053,
   5.427368e-05,
   0.0001763254,
   0.0002046445,
   0.0003904818,
   0.0007045194,
   0.0008623503,
   0.0008126633,
   0.0008633207,
   0.001140619,
   0.002371984,
   0.0002549146};
   Double_t Graph0_fex1076[12] = {
   0.7638813,
   0.07058573,
   0.06355899,
   0.06392798,
   0.06858235,
   0.07434236,
   0.08205039,
   0.09446564,
   0.1142814,
   0.1479512,
   0.1887625,
   0.2324336};
   Double_t Graph0_fey1076[12] = {
   0.00101873,
   7.524844e-05,
   3.501837e-05,
   4.48969e-05,
   5.176458e-05,
   9.209504e-05,
   0.0001122889,
   0.0001045714,
   0.0001412065,
   0.0002070065,
   0.0003301308,
   8.567562e-05};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1076,Graph0_fy1076,Graph0_fex1076,Graph0_fey1076);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01076 = new TH1F("Graph_Graph01076","S18_",100,0,3091.465);
   Graph_Graph01076->SetMinimum(-0.0003599505);
   Graph_Graph01076->SetMaximum(0.003707758);
   Graph_Graph01076->SetDirectory(0);
   Graph_Graph01076->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01076->SetLineColor(ci);
   Graph_Graph01076->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01076->GetXaxis()->SetRange(2,96);
   Graph_Graph01076->GetXaxis()->CenterTitle(true);
   Graph_Graph01076->GetXaxis()->SetLabelFont(42);
   Graph_Graph01076->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01076->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01076->GetXaxis()->SetTitleFont(42);
   Graph_Graph01076->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01076->GetYaxis()->CenterTitle(true);
   Graph_Graph01076->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01076->GetYaxis()->SetLabelFont(42);
   Graph_Graph01076->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01076->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01076->GetYaxis()->SetTitleFont(42);
   Graph_Graph01076->GetZaxis()->SetLabelFont(42);
   Graph_Graph01076->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01076->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01076);
   
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
