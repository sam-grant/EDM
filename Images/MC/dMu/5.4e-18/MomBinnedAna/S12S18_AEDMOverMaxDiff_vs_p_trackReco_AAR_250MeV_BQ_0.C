void S12S18_AEDMOverMaxDiff_vs_p_trackReco_AAR_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:36:07 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.4809,-0.001432457,2741.168,0.005382781);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1064[11] = {
   451.8582,
   653.311,
   880.4297,
   1123.036,
   1370.992,
   1619.97,
   1866.545,
   2115.009,
   2362.89,
   2613.263,
   2787.685};
   Double_t Graph0_fy1064[11] = {
   -0.0002965839,
   0.001222615,
   0.001053315,
   0.001489942,
   0.001174446,
   0.001640455,
   0.00243953,
   0.00176734,
   0.001686163,
   0.003664897,
   0.001799788};
   Double_t Graph0_fex1064[11] = {
   0.09988027,
   0.08417426,
   0.06085687,
   0.05941115,
   0.06350254,
   0.07028111,
   0.08235789,
   0.1033713,
   0.1351224,
   0.1638918,
   0.2051006};
   Double_t Graph0_fey1064[11] = {
   -0.0007446596,
   0.000281235,
   0.0001900717,
   0.0001920426,
   0.0001720629,
   0.0001843561,
   0.0002818492,
   0.0002960544,
   0.0003900731,
   0.0005820104,
   0.001770214};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1064,Graph0_fy1064,Graph0_fex1064,Graph0_fey1064);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01064 = new TH1F("Graph_Graph01064","S12S18_",100,218.1451,3021.503);
   Graph_Graph01064->SetMinimum(-0.000750933);
   Graph_Graph01064->SetMaximum(0.004701257);
   Graph_Graph01064->SetDirectory(0);
   Graph_Graph01064->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01064->SetLineColor(ci);
   Graph_Graph01064->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01064->GetXaxis()->SetRange(19,82);
   Graph_Graph01064->GetXaxis()->CenterTitle(true);
   Graph_Graph01064->GetXaxis()->SetLabelFont(42);
   Graph_Graph01064->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01064->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01064->GetXaxis()->SetTitleFont(42);
   Graph_Graph01064->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01064->GetYaxis()->CenterTitle(true);
   Graph_Graph01064->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01064->GetYaxis()->SetLabelFont(42);
   Graph_Graph01064->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01064->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01064->GetYaxis()->SetTitleFont(42);
   Graph_Graph01064->GetZaxis()->SetLabelFont(42);
   Graph_Graph01064->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01064->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01064);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
