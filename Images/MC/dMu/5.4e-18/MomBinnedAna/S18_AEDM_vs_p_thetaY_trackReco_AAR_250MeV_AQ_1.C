void S18_AEDM_vs_p_thetaY_trackReco_AAR_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:11:19 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-336.1968,-0.8744705,3334.918,4.084791);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1064[12] = {
   173.6776,
   432.6457,
   628.4854,
   873.0358,
   1121.705,
   1371.345,
   1619.918,
   1867.917,
   2115.728,
   2363.438,
   2614.549,
   2825.909};
   Double_t Graph0_fy1064[12] = {
   2.264398,
   0.0224199,
   0.1486198,
   0.1028812,
   0.167601,
   0.1559765,
   0.1473394,
   0.1476729,
   0.1142149,
   0.1110851,
   0.1598609,
   0.06350595};
   Double_t Graph0_fex1064[12] = {
   0.7638813,
   0.07058573,
   0.06355899,
   0.06392798,
   0.06858235,
   0.07434236,
   0.08205039,
   0.09446564,
   0.1142814,
   0.1479512,
   0.1887625,
   0.2324336};
   Double_t Graph0_fey1064[12] = {
   0.9938494,
   0.07034677,
   0.03513604,
   0.02877716,
   0.02594527,
   0.02399624,
   0.02272296,
   0.02251173,
   0.02316601,
   0.02506245,
   0.02518383,
   0.03085259};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1064,Graph0_fy1064,Graph0_fex1064,Graph0_fey1064);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01064 = new TH1F("Graph_Graph01064","S18_",100,0,3091.465);
   Graph_Graph01064->SetMinimum(-0.3785443);
   Graph_Graph01064->SetMaximum(3.588865);
   Graph_Graph01064->SetDirectory(0);
   Graph_Graph01064->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01064->SetLineColor(ci);
   Graph_Graph01064->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01064->GetXaxis()->SetRange(2,96);
   Graph_Graph01064->GetXaxis()->CenterTitle(true);
   Graph_Graph01064->GetXaxis()->SetLabelFont(42);
   Graph_Graph01064->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01064->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01064->GetXaxis()->SetTitleFont(42);
   Graph_Graph01064->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01064->GetYaxis()->CenterTitle(true);
   Graph_Graph01064->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01064->GetYaxis()->SetLabelFont(42);
   Graph_Graph01064->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01064->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01064->GetYaxis()->SetTitleFont(42);
   Graph_Graph01064->GetZaxis()->SetLabelFont(42);
   Graph_Graph01064->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01064->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01064);
   
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
