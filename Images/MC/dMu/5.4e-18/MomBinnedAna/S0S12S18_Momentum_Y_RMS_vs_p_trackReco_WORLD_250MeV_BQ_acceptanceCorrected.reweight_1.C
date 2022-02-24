void S0S12S18_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_acceptanceCorrected.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:45:04 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3907,2.955129,3407.423,28.24445);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1213[11] = {
   451.8445,
   653.3043,
   880.3432,
   1123.073,
   1371.072,
   1620.188,
   1866.987,
   2115.41,
   2363.046,
   2613.742,
   2788.122};
   Double_t Graph0_fy1213[11] = {
   14.06378,
   16.69544,
   18.58829,
   20.09173,
   21.06686,
   21.42987,
   21.1964,
   20.30231,
   18.70566,
   16.27728,
   13.82118};
   Double_t Graph0_fex1213[11] = {
   0.06806252,
   0.05746264,
   0.04161417,
   0.04064954,
   0.04340163,
   0.04801048,
   0.0560007,
   0.06963699,
   0.09008171,
   0.1102808,
   0.1342331};
   Double_t Graph0_fey1213[11] = {
   0.02049566,
   0.009849121,
   0.007647654,
   0.008023878,
   0.008986899,
   0.01012828,
   0.01170076,
   0.01392902,
   0.01663158,
   0.01821972,
   0.04440414};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1213,Graph0_fy1213,Graph0_fex1213,Graph0_fey1213);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01213 = new TH1F("Graph_Graph01213","S0S12S18_",100,218.1284,3021.904);
   Graph_Graph01213->SetMinimum(5.484061);
   Graph_Graph01213->SetMaximum(25.71551);
   Graph_Graph01213->SetDirectory(0);
   Graph_Graph01213->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01213->SetLineColor(ci);
   Graph_Graph01213->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01213->GetXaxis()->SetRange(0,101);
   Graph_Graph01213->GetXaxis()->CenterTitle(true);
   Graph_Graph01213->GetXaxis()->SetLabelFont(42);
   Graph_Graph01213->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01213->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01213->GetXaxis()->SetTitleFont(42);
   Graph_Graph01213->GetYaxis()->CenterTitle(true);
   Graph_Graph01213->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01213->GetYaxis()->SetLabelFont(42);
   Graph_Graph01213->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01213->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01213->GetYaxis()->SetTitleFont(42);
   Graph_Graph01213->GetZaxis()->SetLabelFont(42);
   Graph_Graph01213->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01213->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01213);
   
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
