void S0S12S18_AEDMOverMaxDiff_vs_p_trackReco_AAR_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:33:39 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(521.7918,-0.001390836,2724.913,0.0004537944);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1074[12] = {
   175.5011,
   432.6819,
   628.4305,
   872.9878,
   1121.709,
   1371.415,
   1620.444,
   1868.437,
   2116.692,
   2363.489,
   2614.071,
   2826.668};
   Double_t Graph0_fy1074[12] = {
   -0.001083398,
   -4.867691e-06,
   2.422465e-05,
   5.254632e-05,
   7.419394e-05,
   9.255986e-05,
   -0.0002439922,
   -4.751031e-06,
   -7.233381e-05,
   6.976384e-05,
   -0.0002180152,
   -0.0004656963};
   Double_t Graph0_fex1074[12] = {
   0.7346054,
   0.06958278,
   0.06266495,
   0.06301679,
   0.06768264,
   0.0732617,
   0.0805583,
   0.09218842,
   0.1097524,
   0.1383511,
   0.1809549,
   0.2191293};
   Double_t Graph0_fey1074[12] = {
   -0.00109418,
   -7.315562e-05,
   4.181253e-05,
   4.666997e-05,
   5.624561e-05,
   5.379608e-05,
   -8.064628e-05,
   -7.267688e-05,
   -0.0001599952,
   4.106254e-05,
   -0.000253099,
   -0.000443964};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1074,Graph0_fy1074,Graph0_fex1074,Graph0_fey1074);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01074 = new TH1F("Graph_Graph01074","S0S12S18_",100,0,3092.099);
   Graph_Graph01074->SetMinimum(-0.001206373);
   Graph_Graph01074->SetMaximum(0.0002693313);
   Graph_Graph01074->SetDirectory(0);
   Graph_Graph01074->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01074->SetLineColor(ci);
   Graph_Graph01074->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01074->GetXaxis()->SetRange(25,81);
   Graph_Graph01074->GetXaxis()->CenterTitle(true);
   Graph_Graph01074->GetXaxis()->SetLabelFont(42);
   Graph_Graph01074->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01074->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01074->GetXaxis()->SetTitleFont(42);
   Graph_Graph01074->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01074->GetYaxis()->CenterTitle(true);
   Graph_Graph01074->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01074->GetYaxis()->SetLabelFont(42);
   Graph_Graph01074->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01074->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01074->GetYaxis()->SetTitleFont(42);
   Graph_Graph01074->GetZaxis()->SetLabelFont(42);
   Graph_Graph01074->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01074->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01074);
   
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
