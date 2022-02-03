void S18_thetaYMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:34:04 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.195,-37.26105,3407.047,307.9898);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1143[11] = {
   452.0334,
   653.3342,
   880.5877,
   1123.032,
   1370.863,
   1619.695,
   1866.296,
   2115.184,
   2363.104,
   2612.119,
   2787.642};
   Double_t Graph0_fy1143[11] = {
   176.3859,
   157.6058,
   129.9879,
   110.4713,
   96.11006,
   79.9076,
   68.86047,
   65.91456,
   55.60391,
   38.66497,
   26.51312};
   Double_t Graph0_fex1143[11] = {
   0.1603305,
   0.1350596,
   0.09736021,
   0.09490607,
   0.1018511,
   0.1129718,
   0.1330762,
   0.1674427,
   0.2190467,
   0.2626988,
   0.3366573};
   Double_t Graph0_fey1143[11] = {
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1143,Graph0_fy1143,Graph0_fex1143,Graph0_fey1143);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01143 = new TH1F("Graph_Graph01143","S18_",100,218.2625,3021.59);
   Graph_Graph01143->SetMinimum(-2.735963);
   Graph_Graph01143->SetMaximum(273.4647);
   Graph_Graph01143->SetDirectory(0);
   Graph_Graph01143->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01143->SetLineColor(ci);
   Graph_Graph01143->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01143->GetXaxis()->SetRange(0,101);
   Graph_Graph01143->GetXaxis()->CenterTitle(true);
   Graph_Graph01143->GetXaxis()->SetLabelFont(42);
   Graph_Graph01143->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01143->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01143->GetXaxis()->SetTitleFont(42);
   Graph_Graph01143->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01143->GetYaxis()->CenterTitle(true);
   Graph_Graph01143->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01143->GetYaxis()->SetLabelFont(42);
   Graph_Graph01143->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01143->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01143->GetYaxis()->SetTitleFont(42);
   Graph_Graph01143->GetZaxis()->SetLabelFont(42);
   Graph_Graph01143->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01143->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01143);
   
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
