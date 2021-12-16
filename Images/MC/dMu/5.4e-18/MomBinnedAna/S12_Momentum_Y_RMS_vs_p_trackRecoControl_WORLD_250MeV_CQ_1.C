void S12_Momentum_Y_RMS_vs_p_trackRecoControl_WORLD_250MeV_CQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:27:36 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.9078,6.450991,3509.17,29.03184);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1106[12] = {
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
   Double_t Graph0_fy1106[12] = {
   18.99419,
   17.02437,
   18.31749,
   19.67907,
   20.86643,
   21.7671,
   22.20462,
   22.3118,
   21.89028,
   20.94332,
   19.05423,
   16.21108};
   Double_t Graph0_fex1106[12] = {
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
   Double_t Graph0_fey1106[12] = {
   0.3149988,
   0.04805542,
   0.02126617,
   0.01493684,
   0.01439872,
   0.01501934,
   0.01599775,
   0.0174116,
   0.01935511,
   0.02180451,
   0.02511421,
   0.0366285};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1106,Graph0_fy1106,Graph0_fex1106,Graph0_fey1106);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01106 = new TH1F("Graph_Graph01106","S12_",100,0,3088.378);
   Graph_Graph01106->SetMinimum(8.709075);
   Graph_Graph01106->SetMaximum(26.77375);
   Graph_Graph01106->SetDirectory(0);
   Graph_Graph01106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01106->SetLineColor(ci);
   Graph_Graph01106->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01106->GetXaxis()->SetRange(1,101);
   Graph_Graph01106->GetXaxis()->CenterTitle(true);
   Graph_Graph01106->GetXaxis()->SetLabelFont(42);
   Graph_Graph01106->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01106->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01106->GetXaxis()->SetTitleFont(42);
   Graph_Graph01106->GetYaxis()->CenterTitle(true);
   Graph_Graph01106->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01106->GetYaxis()->SetLabelFont(42);
   Graph_Graph01106->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01106->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01106->GetYaxis()->SetTitleFont(42);
   Graph_Graph01106->GetZaxis()->SetLabelFont(42);
   Graph_Graph01106->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01106->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01106);
   
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
