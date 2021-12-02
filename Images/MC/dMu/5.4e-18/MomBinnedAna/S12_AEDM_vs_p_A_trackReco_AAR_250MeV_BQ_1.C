void S12_AEDM_vs_p_A_trackReco_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 13:32:12 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(7.498198,-8.963215e-05,3232.04,0.0001907128);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1053[11] = {
   451.599,
   653.3528,
   880.2345,
   1123.038,
   1371.156,
   1620.293,
   1866.756,
   2114.919,
   2362.625,
   2614.289,
   2787.796};
   Double_t Graph0_fy1053[11] = {
   9.320644e-06,
   8.345287e-07,
   7.415343e-07,
   6.450723e-07,
   9.311942e-07,
   1.095751e-06,
   2.842921e-06,
   3.173183e-06,
   2.255379e-07,
   1.412696e-05,
   5.054035e-05};
   Double_t Graph0_fex1053[11] = {
   0.1421347,
   0.1197399,
   0.08681325,
   0.08478944,
   0.09027767,
   0.09968693,
   0.1161703,
   0.1453389,
   0.1895365,
   0.2327994,
   0.2850058};
   Double_t Graph0_fey1053[11] = {
   9.44316e-06,
   6.455756e-07,
   2.201813e-07,
   2.009233e-07,
   2.437471e-07,
   3.273616e-07,
   5.178882e-07,
   9.833189e-07,
   2.142704e-06,
   4.053926e-06,
   9.344833e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1053,Graph0_fy1053,Graph0_fex1053,Graph0_fey1053);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01053 = new TH1F("Graph_Graph01053","S12_",100,217.7944,3021.744);
   Graph_Graph01053->SetMinimum(-6.159765e-05);
   Graph_Graph01053->SetMaximum(0.0001626783);
   Graph_Graph01053->SetDirectory(0);
   Graph_Graph01053->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01053->SetLineColor(ci);
   Graph_Graph01053->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01053->GetXaxis()->SetRange(5,96);
   Graph_Graph01053->GetXaxis()->CenterTitle(true);
   Graph_Graph01053->GetXaxis()->SetLabelFont(42);
   Graph_Graph01053->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01053->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01053->GetXaxis()->SetTitleFont(42);
   Graph_Graph01053->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01053->GetYaxis()->CenterTitle(true);
   Graph_Graph01053->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01053->GetYaxis()->SetLabelFont(42);
   Graph_Graph01053->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01053->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01053->GetYaxis()->SetTitleFont(42);
   Graph_Graph01053->GetZaxis()->SetLabelFont(42);
   Graph_Graph01053->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01053);
   
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
