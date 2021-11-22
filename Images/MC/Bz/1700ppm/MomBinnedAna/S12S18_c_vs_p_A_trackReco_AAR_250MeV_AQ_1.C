void S12S18_c_vs_p_A_trackReco_AAR_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:14:25 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-336.1341,-0.001709446,3334.296,0.000341774);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1080[12] = {
   174.3059,
   432.3497,
   628.5159,
   872.9756,
   1121.754,
   1371.387,
   1620.423,
   1868.331,
   2116.098,
   2363.123,
   2614.683,
   2825.386};
   Double_t Graph0_fy1080[12] = {
   -0.0007280519,
   -1.903481e-05,
   -2.531725e-06,
   -1.354894e-06,
   -1.262233e-06,
   -1.326406e-06,
   -1.129979e-06,
   -1.248752e-06,
   -2.4717e-06,
   -1.699812e-06,
   -9.726649e-06,
   -4.94442e-05};
   Double_t Graph0_fex1080[12] = {
   0.899896,
   0.08549393,
   0.07685733,
   0.07728029,
   0.08298593,
   0.08989513,
   0.09897207,
   0.1136525,
   0.1365983,
   0.1749214,
   0.2275663,
   0.276649};
   Double_t Graph0_fey1080[12] = {
   0.0006395238,
   5.026654e-07,
   1.115404e-07,
   1.09239e-07,
   1.332182e-07,
   1.689365e-07,
   2.297209e-07,
   3.62483e-07,
   6.787012e-07,
   1.603848e-06,
   4.060886e-06,
   2.121644e-05};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1080,Graph0_fy1080,Graph0_fex1080,Graph0_fey1080);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01080 = new TH1F("Graph_Graph01080","S12S18_",100,0,3090.888);
   Graph_Graph01080->SetMinimum(-0.001504324);
   Graph_Graph01080->SetMaximum(0.000136652);
   Graph_Graph01080->SetDirectory(0);
   Graph_Graph01080->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01080->SetLineColor(ci);
   Graph_Graph01080->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01080->GetXaxis()->SetRange(2,96);
   Graph_Graph01080->GetXaxis()->CenterTitle(true);
   Graph_Graph01080->GetXaxis()->SetLabelFont(42);
   Graph_Graph01080->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01080->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01080->GetXaxis()->SetTitleFont(42);
   Graph_Graph01080->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01080->GetYaxis()->CenterTitle(true);
   Graph_Graph01080->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01080->GetYaxis()->SetLabelFont(42);
   Graph_Graph01080->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01080->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01080->GetYaxis()->SetTitleFont(42);
   Graph_Graph01080->GetZaxis()->SetLabelFont(42);
   Graph_Graph01080->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01080->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01080);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
