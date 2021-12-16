void S12_Ag2_vs_p_A_trackRecoControl_WORLD_250MeV_CQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:27:35 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.9078,-0.001029857,3509.17,0.009083468);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1103[12] = {
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
   Double_t Graph0_fy1103[12] = {
   0.003088848,
   2.556393e-07,
   2.018068e-07,
   -4.129059e-08,
   -4.219519e-08,
   -2.828748e-08,
   -1.067092e-07,
   -9.846594e-08,
   -2.155445e-07,
   -5.75394e-07,
   -1.697538e-06,
   -9.166855e-06};
   Double_t Graph0_fex1103[12] = {
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
   Double_t Graph0_fey1103[12] = {
   0.0008176744,
   2.612648e-06,
   1.838549e-07,
   5.073384e-08,
   3.792518e-08,
   3.792848e-08,
   4.368513e-08,
   5.72139e-08,
   8.82266e-08,
   1.560063e-07,
   3.485752e-07,
   1.88626e-06};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1103,Graph0_fy1103,Graph0_fex1103,Graph0_fey1103);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01103 = new TH1F("Graph_Graph01103","S12_",100,0,3088.378);
   Graph_Graph01103->SetMinimum(-1.852452e-05);
   Graph_Graph01103->SetMaximum(0.008072135);
   Graph_Graph01103->SetDirectory(0);
   Graph_Graph01103->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01103->SetLineColor(ci);
   Graph_Graph01103->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01103->GetXaxis()->SetRange(1,101);
   Graph_Graph01103->GetXaxis()->CenterTitle(true);
   Graph_Graph01103->GetXaxis()->SetLabelFont(42);
   Graph_Graph01103->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01103->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01103->GetXaxis()->SetTitleFont(42);
   Graph_Graph01103->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01103->GetYaxis()->CenterTitle(true);
   Graph_Graph01103->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01103->GetYaxis()->SetLabelFont(42);
   Graph_Graph01103->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01103->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01103->GetYaxis()->SetTitleFont(42);
   Graph_Graph01103->GetZaxis()->SetLabelFont(42);
   Graph_Graph01103->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01103);
   
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
