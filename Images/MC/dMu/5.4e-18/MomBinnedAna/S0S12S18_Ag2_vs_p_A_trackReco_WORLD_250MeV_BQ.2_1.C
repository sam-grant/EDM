void S0S12S18_Ag2_vs_p_A_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:34:11 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.6095,-3.070694e-05,3407.957,5.477441e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1210[11] = {
   451.7799,
   653.2749,
   880.2439,
   1123.04,
   1371.162,
   1620.21,
   1867.078,
   2115.584,
   2363.023,
   2614.059,
   2788.48};
   Double_t Graph0_fy1210[11] = {
   3.853935e-07,
   -3.958556e-08,
   -2.612012e-08,
   -2.030838e-08,
   2.811005e-08,
   8.561463e-09,
   -9.231147e-09,
   -7.737789e-08,
   -3.082765e-08,
   -5.820963e-07,
   -1.016134e-05};
   Double_t Graph0_fex1210[11] = {
   0.09191709,
   0.07752512,
   0.05616783,
   0.05486794,
   0.05858757,
   0.06479554,
   0.07538216,
   0.09335624,
   0.1199966,
   0.1475783,
   0.1798422};
   Double_t Graph0_fey1210[11] = {
   8.971001e-07,
   5.939571e-08,
   1.997075e-08,
   1.823281e-08,
   2.217335e-08,
   3.053869e-08,
   4.975051e-08,
   9.972533e-08,
   2.32563e-07,
   5.160415e-07,
   1.321039e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1210,Graph0_fy1210,Graph0_fex1210,Graph0_fey1210);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01210 = new TH1F("Graph_Graph01210","S0S12S18_",100,217.9908,3022.357);
   Graph_Graph01210->SetMinimum(-2.708851e-05);
   Graph_Graph01210->SetMaximum(1.859003e-06);
   Graph_Graph01210->SetDirectory(0);
   Graph_Graph01210->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01210->SetLineColor(ci);
   Graph_Graph01210->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01210->GetXaxis()->SetRange(0,101);
   Graph_Graph01210->GetXaxis()->CenterTitle(true);
   Graph_Graph01210->GetXaxis()->SetLabelFont(42);
   Graph_Graph01210->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01210->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01210->GetXaxis()->SetTitleFont(42);
   Graph_Graph01210->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01210->GetYaxis()->CenterTitle(true);
   Graph_Graph01210->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01210->GetYaxis()->SetLabelFont(42);
   Graph_Graph01210->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01210->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01210->GetYaxis()->SetTitleFont(42);
   Graph_Graph01210->GetZaxis()->SetLabelFont(42);
   Graph_Graph01210->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01210->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01210);
   
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
