void S12_c_vs_p_A_trackRecoControl_WORLD_250MeV_CQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:27:35 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.9078,-0.0008707303,3509.17,0.007643606);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1101[12] = {
   189.0097,
   434.3781,
   652.5116,
   883.7782,
   1126.204,
   1373.8,
   1622.32,
   1870.781,
   2119.266,
   2366.747,
   2613.39,
   2824.544};
   Double_t Graph0_fy1101[12] = {
   0.0026512,
   9.661589e-05,
   -1.315343e-06,
   -8.888065e-07,
   -5.126029e-07,
   -3.48741e-07,
   -4.342945e-07,
   -3.508769e-07,
   -3.892964e-07,
   -1.340943e-06,
   -3.012375e-06,
   -1.035998e-05};
   Double_t Graph0_fex1101[12] = {
   0.9885242,
   0.2033246,
   0.1122319,
   0.07575547,
   0.07016162,
   0.07012019,
   0.07304142,
   0.07900586,
   0.08942676,
   0.105125,
   0.1324895,
   0.1653295};
   Double_t Graph0_fey1101[12] = {
   0.0005752526,
   1.859044e-06,
   1.296107e-07,
   3.581676e-08,
   2.674279e-08,
   2.677994e-08,
   3.102295e-08,
   4.103173e-08,
   6.432989e-08,
   1.166154e-07,
   2.671378e-07,
   1.481166e-06};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1101,Graph0_fy1101,Graph0_fex1101,Graph0_fey1101);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01101 = new TH1F("Graph_Graph01101","S12_",100,0,3088.378);
   Graph_Graph01101->SetMinimum(-1.929665e-05);
   Graph_Graph01101->SetMaximum(0.006792172);
   Graph_Graph01101->SetDirectory(0);
   Graph_Graph01101->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01101->SetLineColor(ci);
   Graph_Graph01101->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01101->GetXaxis()->SetRange(1,101);
   Graph_Graph01101->GetXaxis()->CenterTitle(true);
   Graph_Graph01101->GetXaxis()->SetLabelFont(42);
   Graph_Graph01101->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01101->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01101->GetXaxis()->SetTitleFont(42);
   Graph_Graph01101->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01101->GetYaxis()->CenterTitle(true);
   Graph_Graph01101->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01101->GetYaxis()->SetLabelFont(42);
   Graph_Graph01101->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01101->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01101->GetYaxis()->SetTitleFont(42);
   Graph_Graph01101->GetZaxis()->SetLabelFont(42);
   Graph_Graph01101->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01101);
   
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
