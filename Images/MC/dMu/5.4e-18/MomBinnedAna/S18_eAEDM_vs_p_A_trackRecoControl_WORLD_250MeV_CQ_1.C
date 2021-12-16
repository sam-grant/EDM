void S18_eAEDM_vs_p_A_trackRecoControl_WORLD_250MeV_CQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:27:40 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.784,-0.0002751878,3508.056,0.002476997);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1148[12] = {
   188.9285,
   434.8157,
   652.8408,
   884.0785,
   1126.173,
   1373.702,
   1622.569,
   1870.669,
   2119.017,
   2366.486,
   2613.314,
   2823.639};
   Double_t Graph0_fy1148[12] = {
   0.0008450227,
   2.677778e-06,
   1.842312e-07,
   5.124766e-08,
   3.837477e-08,
   3.847033e-08,
   4.358541e-08,
   5.495824e-08,
   7.832795e-08,
   1.248709e-07,
   2.46218e-07,
   1.205159e-06};
   Double_t Graph0_fex1148[12] = {
   1.031071,
   0.2060205,
   0.1131189,
   0.07628962,
   0.07052248,
   0.07063667,
   0.07371139,
   0.0797559,
   0.09034869,
   0.1064703,
   0.1344564,
   0.1680666};
   Double_t Graph0_fey1148[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1148,Graph0_fy1148,Graph0_fex1148,Graph0_fey1148);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01148 = new TH1F("Graph_Graph01148","S18_",100,0,3087.398);
   Graph_Graph01148->SetMinimum(3.0701e-08);
   Graph_Graph01148->SetMaximum(0.002201779);
   Graph_Graph01148->SetDirectory(0);
   Graph_Graph01148->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01148->SetLineColor(ci);
   Graph_Graph01148->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01148->GetXaxis()->SetRange(1,101);
   Graph_Graph01148->GetXaxis()->CenterTitle(true);
   Graph_Graph01148->GetXaxis()->SetLabelFont(42);
   Graph_Graph01148->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01148->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01148->GetXaxis()->SetTitleFont(42);
   Graph_Graph01148->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01148->GetYaxis()->CenterTitle(true);
   Graph_Graph01148->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01148->GetYaxis()->SetLabelFont(42);
   Graph_Graph01148->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01148->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01148->GetYaxis()->SetTitleFont(42);
   Graph_Graph01148->GetZaxis()->SetLabelFont(42);
   Graph_Graph01148->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01148->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01148);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
