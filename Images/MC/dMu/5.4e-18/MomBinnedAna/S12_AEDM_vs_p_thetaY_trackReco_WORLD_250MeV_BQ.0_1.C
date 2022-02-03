void S12_AEDM_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.0_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:32:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4182,-1.282033,3406.946,0.1055567);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1095[11] = {
   451.9295,
   653.2541,
   880.1027,
   1123.321,
   1371.175,
   1620.3,
   1867.055,
   2114.96,
   2362.495,
   2614.658,
   2787.332};
   Double_t Graph0_fy1095[11] = {
   -0.4004441,
   -0.0252293,
   -0.1072541,
   -0.05530349,
   -0.1083867,
   -0.08190651,
   -0.08007052,
   -0.1060145,
   -0.1038402,
   -0.05253752,
   -0.1506969};
   Double_t Graph0_fex1095[11] = {
   0.2585753,
   0.2175793,
   0.1578323,
   0.1544094,
   0.1642786,
   0.1821068,
   0.2117136,
   0.2648624,
   0.3434608,
   0.4240096,
   0.523915};
   Double_t Graph0_fey1095[11] = {
   0.3378501,
   0.1153381,
   0.06641071,
   0.05451614,
   0.04981684,
   0.04736812,
   0.04745829,
   0.05035605,
   0.05371249,
   0.05330174,
   0.1216947};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1095,Graph0_fy1095,Graph0_fex1095,Graph0_fey1095);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01095 = new TH1F("Graph_Graph01095","S12_",100,218.0524,3021.475);
   Graph_Graph01095->SetMinimum(-1.143274);
   Graph_Graph01095->SetMaximum(-0.0332022);
   Graph_Graph01095->SetDirectory(0);
   Graph_Graph01095->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01095->SetLineColor(ci);
   Graph_Graph01095->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01095->GetXaxis()->SetRange(0,101);
   Graph_Graph01095->GetXaxis()->CenterTitle(true);
   Graph_Graph01095->GetXaxis()->SetLabelFont(42);
   Graph_Graph01095->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01095->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01095->GetXaxis()->SetTitleFont(42);
   Graph_Graph01095->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01095->GetYaxis()->CenterTitle(true);
   Graph_Graph01095->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01095->GetYaxis()->SetLabelFont(42);
   Graph_Graph01095->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01095->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01095->GetYaxis()->SetTitleFont(42);
   Graph_Graph01095->GetZaxis()->SetLabelFont(42);
   Graph_Graph01095->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01095);
   
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
