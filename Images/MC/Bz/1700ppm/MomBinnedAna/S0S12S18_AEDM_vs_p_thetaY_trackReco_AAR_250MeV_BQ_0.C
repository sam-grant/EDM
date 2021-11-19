void S0S12S18_AEDM_vs_p_thetaY_trackReco_AAR_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 17:39:48 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(7.88461,-0.2913757,3232.434,0.2683282);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1092[11] = {
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
   Double_t Graph0_fy1092[11] = {
   -0.01152378,
   0.05301481,
   -0.009917886,
   0.05594945,
   0.07642468,
   -0.02930911,
   0.01736757,
   0.001480549,
   0.08115524,
   -0.02546975,
   0.07818878};
   Double_t Graph0_fex1092[11] = {
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
   Double_t Graph0_fey1092[11] = {
   0.186568,
   0.06224659,
   0.03581058,
   0.02949713,
   0.02699953,
   0.0257765,
   0.02570521,
   0.02687471,
   0.02850916,
   0.02824988,
   0.06387641};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1092,Graph0_fy1092,Graph0_fex1092,Graph0_fey1092);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01092 = new TH1F("Graph_Graph01092","S0S12S18_",100,218.1813,3022.138);
   Graph_Graph01092->SetMinimum(-0.2354053);
   Graph_Graph01092->SetMaximum(0.2123578);
   Graph_Graph01092->SetDirectory(0);
   Graph_Graph01092->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01092->SetLineColor(ci);
   Graph_Graph01092->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01092->GetXaxis()->SetRange(5,96);
   Graph_Graph01092->GetXaxis()->CenterTitle(true);
   Graph_Graph01092->GetXaxis()->SetLabelFont(42);
   Graph_Graph01092->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01092->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01092->GetXaxis()->SetTitleFont(42);
   Graph_Graph01092->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01092->GetYaxis()->CenterTitle(true);
   Graph_Graph01092->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01092->GetYaxis()->SetLabelFont(42);
   Graph_Graph01092->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01092->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01092->GetYaxis()->SetTitleFont(42);
   Graph_Graph01092->GetZaxis()->SetLabelFont(42);
   Graph_Graph01092->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01092->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01092);
   
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
