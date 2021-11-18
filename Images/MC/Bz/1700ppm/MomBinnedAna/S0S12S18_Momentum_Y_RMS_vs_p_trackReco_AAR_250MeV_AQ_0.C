void S0S12S18_Momentum_Y_RMS_vs_p_trackReco_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:38:57 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(521.7918,3.710718,2724.913,26.54421);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1070[12] = {
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
   Double_t Graph0_fy1070[12] = {
   7.604188,
   14.50245,
   17.36981,
   19.91617,
   21.59512,
   22.44662,
   22.72061,
   22.40706,
   21.64686,
   20.04516,
   17.2914,
   13.58069};
   Double_t Graph0_fex1070[12] = {
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
   Double_t Graph0_fey1070[12] = {
   0.08788767,
   0.01491376,
   0.01078962,
   0.01233376,
   0.01434273,
   0.01614901,
   0.01801473,
   0.02033675,
   0.02342375,
   0.0274714,
   0.0309232,
   0.04005563};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1070,Graph0_fy1070,Graph0_fex1070,Graph0_fey1070);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01070 = new TH1F("Graph_Graph01070","S0S12S18_",100,0,3092.099);
   Graph_Graph01070->SetMinimum(5.994068);
   Graph_Graph01070->SetMaximum(24.26086);
   Graph_Graph01070->SetDirectory(0);
   Graph_Graph01070->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01070->SetLineColor(ci);
   Graph_Graph01070->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01070->GetXaxis()->SetRange(25,81);
   Graph_Graph01070->GetXaxis()->CenterTitle(true);
   Graph_Graph01070->GetXaxis()->SetLabelFont(42);
   Graph_Graph01070->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01070->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01070->GetXaxis()->SetTitleFont(42);
   Graph_Graph01070->GetYaxis()->CenterTitle(true);
   Graph_Graph01070->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01070->GetYaxis()->SetLabelFont(42);
   Graph_Graph01070->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01070->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01070->GetYaxis()->SetTitleFont(42);
   Graph_Graph01070->GetZaxis()->SetLabelFont(42);
   Graph_Graph01070->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01070->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01070);
   
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
