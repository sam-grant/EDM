void S18_c_vs_p_A_trackTruth_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:29:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(493.4784,-2.993628e-07,3019.155,1.924393e-07);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1068[12] = {
   108.3281,
   434.6973,
   631.5345,
   875.6243,
   1124.334,
   1373.468,
   1622.472,
   1871.33,
   2119.915,
   2367.684,
   2613.196,
   2835.497};
   Double_t Graph0_fy1068[12] = {
   0.0002761499,
   -2.927482e-06,
   -3.287359e-07,
   -1.171346e-07,
   -1.021588e-07,
   -1.035966e-07,
   -8.840819e-08,
   -1.10705e-07,
   -1.164835e-07,
   -1.513226e-07,
   -1.239808e-07,
   1.145507e-07};
   Double_t Graph0_fex1068[12] = {
   1.771804,
   0.0577217,
   0.04800249,
   0.04579068,
   0.04600762,
   0.04714944,
   0.04944162,
   0.0530898,
   0.05878455,
   0.0678104,
   0.08402396,
   0.1221084};
   Double_t Graph0_fey1068[12] = {
   0.0004980712,
   5.499894e-08,
   9.167825e-09,
   7.520687e-09,
   7.521235e-09,
   8.116418e-09,
   9.520373e-09,
   1.232004e-08,
   1.809912e-08,
   3.112111e-08,
   6.93425e-08,
   3.529918e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1068,Graph0_fy1068,Graph0_fex1068,Graph0_fey1068);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01068 = new TH1F("Graph_Graph01068","S18_",100,0,3108.525);
   Graph_Graph01068->SetMinimum(-2.501826e-07);
   Graph_Graph01068->SetMaximum(1.432591e-07);
   Graph_Graph01068->SetDirectory(0);
   Graph_Graph01068->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01068->SetLineColor(ci);
   Graph_Graph01068->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01068->GetXaxis()->SetRange(25,89);
   Graph_Graph01068->GetXaxis()->CenterTitle(true);
   Graph_Graph01068->GetXaxis()->SetLabelFont(42);
   Graph_Graph01068->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01068->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01068->GetXaxis()->SetTitleFont(42);
   Graph_Graph01068->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01068->GetYaxis()->CenterTitle(true);
   Graph_Graph01068->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01068->GetYaxis()->SetLabelFont(42);
   Graph_Graph01068->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01068->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01068->GetYaxis()->SetTitleFont(42);
   Graph_Graph01068->GetZaxis()->SetLabelFont(42);
   Graph_Graph01068->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01068->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01068);
   
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
