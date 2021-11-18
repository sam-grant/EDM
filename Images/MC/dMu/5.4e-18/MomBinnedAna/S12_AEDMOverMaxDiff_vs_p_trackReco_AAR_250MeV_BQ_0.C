void S12_AEDMOverMaxDiff_vs_p_trackReco_AAR_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:36:06 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.2011,-0.001956554,2741.317,0.005320419);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1044[11] = {
   451.6103,
   653.3617,
   880.2228,
   1123.036,
   1371.149,
   1620.258,
   1866.731,
   2114.882,
   2362.569,
   2614.228,
   2787.765};
   Double_t Graph0_fy1044[11] = {
   0.0009799724,
   0.00117394,
   0.001371852,
   0.001713777,
   0.001461856,
   0.001974802,
   0.00274159,
   0.002362403,
   0.002129591,
   0.002825471,
   0.001681932};
   Double_t Graph0_fex1044[11] = {
   0.1408015,
   0.1187295,
   0.0860464,
   0.08406461,
   0.08952956,
   0.09891579,
   0.1153262,
   0.1443485,
   0.1883778,
   0.2315654,
   0.2839935};
   Double_t Graph0_fey1044[11] = {
   0.001061223,
   0.0004076003,
   0.0002690539,
   0.0002869504,
   0.0003055844,
   0.0003166217,
   0.0003970911,
   0.0004558989,
   0.0006689146,
   0.0007925649,
   0.002425658};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1044,Graph0_fy1044,Graph0_fex1044,Graph0_fey1044);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01044 = new TH1F("Graph_Graph01044","S12_",100,217.8116,3021.707);
   Graph_Graph01044->SetMinimum(-0.001228857);
   Graph_Graph01044->SetMaximum(0.004592722);
   Graph_Graph01044->SetDirectory(0);
   Graph_Graph01044->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01044->SetLineColor(ci);
   Graph_Graph01044->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01044->GetXaxis()->SetRange(19,82);
   Graph_Graph01044->GetXaxis()->CenterTitle(true);
   Graph_Graph01044->GetXaxis()->SetLabelFont(42);
   Graph_Graph01044->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01044->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01044->GetXaxis()->SetTitleFont(42);
   Graph_Graph01044->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01044->GetYaxis()->CenterTitle(true);
   Graph_Graph01044->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01044->GetYaxis()->SetLabelFont(42);
   Graph_Graph01044->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01044->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01044->GetYaxis()->SetTitleFont(42);
   Graph_Graph01044->GetZaxis()->SetLabelFont(42);
   Graph_Graph01044->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01044);
   
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
