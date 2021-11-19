void S0S12S18_c_vs_p_thetaY_trackReco_AAR_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 17:39:48 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(7.88461,-1.865969,3232.434,6.562339);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1091[11] = {
   451.9836,
   653.0943,
   880.2595,
   1123.139,
   1371.097,
   1620.518,
   1867.111,
   2115.595,
   2362.886,
   2614.277,
   2788.204};
   Double_t Graph0_fy1091[11] = {
   5.025735,
   -0.02911048,
   -0.4359024,
   -0.369182,
   -0.2859183,
   -0.2190057,
   -0.1841289,
   -0.08605716,
   -0.09462623,
   -0.04883925,
   -0.05663776};
   Double_t Graph0_fex1091[11] = {
   0.1392502,
   0.1178281,
   0.08532408,
   0.08348705,
   0.08916792,
   0.0982236,
   0.1146631,
   0.1418068,
   0.1822846,
   0.2250869,
   0.2704836};
   Double_t Graph0_fey1091[11] = {
   0.1318861,
   0.04413065,
   0.0253488,
   0.02083711,
   0.01910515,
   0.01825479,
   0.01834138,
   0.01946328,
   0.02116056,
   0.02204857,
   0.0519252};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1091,Graph0_fy1091,Graph0_fex1091,Graph0_fey1091);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01091 = new TH1F("Graph_Graph01091","S0S12S18_",100,218.1813,3022.138);
   Graph_Graph01091->SetMinimum(-1.023138);
   Graph_Graph01091->SetMaximum(5.719508);
   Graph_Graph01091->SetDirectory(0);
   Graph_Graph01091->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01091->SetLineColor(ci);
   Graph_Graph01091->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01091->GetXaxis()->SetRange(5,96);
   Graph_Graph01091->GetXaxis()->CenterTitle(true);
   Graph_Graph01091->GetXaxis()->SetLabelFont(42);
   Graph_Graph01091->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01091->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01091->GetXaxis()->SetTitleFont(42);
   Graph_Graph01091->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01091->GetYaxis()->CenterTitle(true);
   Graph_Graph01091->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01091->GetYaxis()->SetLabelFont(42);
   Graph_Graph01091->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01091->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01091->GetYaxis()->SetTitleFont(42);
   Graph_Graph01091->GetZaxis()->SetLabelFont(42);
   Graph_Graph01091->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01091);
   
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
