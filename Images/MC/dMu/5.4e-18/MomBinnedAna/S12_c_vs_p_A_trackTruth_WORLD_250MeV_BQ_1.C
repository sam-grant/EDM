void S12_c_vs_p_A_trackTruth_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:29:55 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(466.8109,-9.03763e-05,3029.776,1.082788e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1053[11] = {
   451.738,
   653.3893,
   880.2527,
   1123.051,
   1371.173,
   1620.272,
   1866.762,
   2114.836,
   2362.621,
   2614.182,
   2791.874};
   Double_t Graph0_fy1053[11] = {
   7.803104e-05,
   -7.343053e-07,
   -1.027983e-06,
   -7.525348e-07,
   -8.920872e-07,
   -1.081498e-06,
   -8.371715e-07,
   -1.932063e-06,
   -4.100744e-06,
   -6.890353e-06,
   -8.040842e-05};
   Double_t Graph0_fex1053[11] = {
   0.1410646,
   0.1188845,
   0.08610507,
   0.08408914,
   0.08950778,
   0.0988963,
   0.1153279,
   0.1440033,
   0.1882858,
   0.2317094,
   0.3300425};
   Double_t Graph0_fey1053[11] = {
   2.226251e-06,
   1.522413e-07,
   5.097009e-08,
   4.627238e-08,
   5.589881e-08,
   7.716282e-08,
   1.278298e-07,
   2.675874e-07,
   6.67491e-07,
   1.527e-06,
   3.665211e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1053,Graph0_fy1053,Graph0_fex1053,Graph0_fey1053);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01053 = new TH1F("Graph_Graph01053","S12_",100,217.5362,3026.265);
   Graph_Graph01053->SetMinimum(-8.025588e-05);
   Graph_Graph01053->SetMaximum(7.074575e-07);
   Graph_Graph01053->SetDirectory(0);
   Graph_Graph01053->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01053->SetLineColor(ci);
   Graph_Graph01053->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01053->GetXaxis()->SetRange(19,91);
   Graph_Graph01053->GetXaxis()->CenterTitle(true);
   Graph_Graph01053->GetXaxis()->SetLabelFont(42);
   Graph_Graph01053->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01053->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01053->GetXaxis()->SetTitleFont(42);
   Graph_Graph01053->GetYaxis()->SetTitle("c / 250 MeV");
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
