void S12_Y_RMS_vs_p_trackReco_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 17:35:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-336.2053,9.913022,3335.002,27.7821);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1056[12] = {
   176.9499,
   432.0898,
   628.443,
   872.9939,
   1121.66,
   1371.549,
   1620.298,
   1868.258,
   2116.438,
   2363.083,
   2614.356,
   2826.288};
   Double_t Graph0_fy1056[12] = {
   24.40694,
   13.5031,
   13.10286,
   12.96142,
   12.89986,
   12.91564,
   13.00346,
   13.06187,
   13.10648,
   13.22581,
   13.35012,
   13.05668};
   Double_t Graph0_fex1056[12] = {
   0.7206046,
   0.0703677,
   0.06339667,
   0.06384642,
   0.06844611,
   0.07394814,
   0.08138022,
   0.09307723,
   0.1109457,
   0.1412249,
   0.1860587,
   0.225681};
   Double_t Graph0_fey1056[12] = {
   0.3969789,
   0.01397048,
   0.008241299,
   0.008129836,
   0.008661153,
   0.009375907,
   0.01040156,
   0.01195901,
   0.01435174,
   0.01850022,
   0.02457981,
   0.03980177};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1056,Graph0_fy1056,Graph0_fex1056,Graph0_fey1056);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01056 = new TH1F("Graph_Graph01056","S12_",100,0,3091.543);
   Graph_Graph01056->SetMinimum(11.69993);
   Graph_Graph01056->SetMaximum(25.99519);
   Graph_Graph01056->SetDirectory(0);
   Graph_Graph01056->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01056->SetLineColor(ci);
   Graph_Graph01056->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01056->GetXaxis()->SetRange(2,96);
   Graph_Graph01056->GetXaxis()->CenterTitle(true);
   Graph_Graph01056->GetXaxis()->SetLabelFont(42);
   Graph_Graph01056->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01056->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01056->GetXaxis()->SetTitleFont(42);
   Graph_Graph01056->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01056->GetYaxis()->CenterTitle(true);
   Graph_Graph01056->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01056->GetYaxis()->SetLabelFont(42);
   Graph_Graph01056->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01056->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01056->GetYaxis()->SetTitleFont(42);
   Graph_Graph01056->GetZaxis()->SetLabelFont(42);
   Graph_Graph01056->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01056->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01056);
   
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
