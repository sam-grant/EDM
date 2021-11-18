void S0S12S18_Y_RMS_vs_p_trackReco_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:30:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.445,12.46409,2741.892,13.15965);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1069[11] = {
   451.7878,
   653.297,
   880.2628,
   1123.041,
   1371.131,
   1620.23,
   1867.05,
   2115.573,
   2363,
   2614.02,
   2788.473};
   Double_t Graph0_fy1069[11] = {
   13.02109,
   12.98811,
   12.94131,
   12.86906,
   12.80824,
   12.78221,
   12.73857,
   12.68218,
   12.64747,
   12.62677,
   12.62751};
   Double_t Graph0_fex1069[11] = {
   0.08119398,
   0.06850249,
   0.04968388,
   0.04852857,
   0.05179955,
   0.05728211,
   0.06665397,
   0.08260849,
   0.1062446,
   0.1304436,
   0.1582851};
   Double_t Graph0_fey1069[11] = {
   0.022635,
   0.009136975,
   0.006354651,
   0.006134982,
   0.006520447,
   0.007206588,
   0.008370671,
   0.01032093,
   0.01327834,
   0.01670444,
   0.04749198};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1069,Graph0_fy1069,Graph0_fex1069,Graph0_fey1069);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01069 = new TH1F("Graph_Graph01069","S0S12S18_",100,218.0141,3022.323);
   Graph_Graph01069->SetMinimum(12.53365);
   Graph_Graph01069->SetMaximum(13.09009);
   Graph_Graph01069->SetDirectory(0);
   Graph_Graph01069->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01069->SetLineColor(ci);
   Graph_Graph01069->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01069->GetXaxis()->SetRange(19,82);
   Graph_Graph01069->GetXaxis()->CenterTitle(true);
   Graph_Graph01069->GetXaxis()->SetLabelFont(42);
   Graph_Graph01069->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01069->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01069->GetXaxis()->SetTitleFont(42);
   Graph_Graph01069->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01069->GetYaxis()->CenterTitle(true);
   Graph_Graph01069->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01069->GetYaxis()->SetLabelFont(42);
   Graph_Graph01069->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01069->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01069->GetYaxis()->SetTitleFont(42);
   Graph_Graph01069->GetZaxis()->SetLabelFont(42);
   Graph_Graph01069->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01069);
   
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
