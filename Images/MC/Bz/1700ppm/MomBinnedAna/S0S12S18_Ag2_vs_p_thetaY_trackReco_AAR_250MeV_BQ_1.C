void S0S12S18_Ag2_vs_p_thetaY_trackReco_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:14:42 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(7.88461,-0.2212147,3232.434,0.3802063);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1093[11] = {
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
   Double_t Graph0_fy1093[11] = {
   0.06503711,
   0.09968314,
   0.2441204,
   0.1177764,
   0.167651,
   0.1468767,
   0.1677135,
   0.1427288,
   0.1806646,
   0.1178893,
   0.1242578};
   Double_t Graph0_fex1093[11] = {
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
   Double_t Graph0_fey1093[11] = {
   0.1860149,
   0.06243381,
   0.03584901,
   0.02943118,
   0.02702537,
   0.02578585,
   0.02593717,
   0.02758988,
   0.02996828,
   0.03124849,
   0.07351883};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1093,Graph0_fy1093,Graph0_fex1093,Graph0_fey1093);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01093 = new TH1F("Graph_Graph01093","S0S12S18_",100,218.1813,3022.138);
   Graph_Graph01093->SetMinimum(-0.1610726);
   Graph_Graph01093->SetMaximum(0.3200642);
   Graph_Graph01093->SetDirectory(0);
   Graph_Graph01093->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01093->SetLineColor(ci);
   Graph_Graph01093->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01093->GetXaxis()->SetRange(5,96);
   Graph_Graph01093->GetXaxis()->CenterTitle(true);
   Graph_Graph01093->GetXaxis()->SetLabelFont(42);
   Graph_Graph01093->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01093->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01093->GetXaxis()->SetTitleFont(42);
   Graph_Graph01093->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01093->GetYaxis()->CenterTitle(true);
   Graph_Graph01093->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01093->GetYaxis()->SetLabelFont(42);
   Graph_Graph01093->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01093->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01093->GetYaxis()->SetTitleFont(42);
   Graph_Graph01093->GetZaxis()->SetLabelFont(42);
   Graph_Graph01093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01093);
   
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
