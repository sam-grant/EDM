void S0S12S18_c_vs_p_thetaY_trackReco_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 17:39:29 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-336.2658,-2.976428,3335.602,0.5835861);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1091[12] = {
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
   Double_t Graph0_fy1091[12] = {
   -1.557671,
   -2.3337,
   -0.7571788,
   -0.286759,
   -0.2322001,
   -0.1507409,
   -0.1039671,
   -0.09732558,
   -0.06706491,
   -0.07910003,
   -0.04408464,
   -0.03341784};
   Double_t Graph0_fex1091[12] = {
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
   Double_t Graph0_fey1091[12] = {
   0.6975767,
   0.04939218,
   0.02458791,
   0.0201426,
   0.01819657,
   0.01676748,
   0.01586641,
   0.01562263,
   0.01607841,
   0.01737858,
   0.01846182,
   0.02366826};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1091,Graph0_fy1091,Graph0_fex1091,Graph0_fey1091);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01091 = new TH1F("Graph_Graph01091","S0S12S18_",100,0,3092.099);
   Graph_Graph01091->SetMinimum(-2.620426);
   Graph_Graph01091->SetMaximum(0.2275847);
   Graph_Graph01091->SetDirectory(0);
   Graph_Graph01091->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01091->SetLineColor(ci);
   Graph_Graph01091->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01091->GetXaxis()->SetRange(2,96);
   Graph_Graph01091->GetXaxis()->CenterTitle(true);
   Graph_Graph01091->GetXaxis()->SetLabelFont(42);
   Graph_Graph01091->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01091->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01091->GetXaxis()->SetTitleFont(42);
   Graph_Graph01091->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01091->GetYaxis()->CenterTitle(true);
   Graph_Graph01091->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01091->GetYaxis()->SetLabelFont(42);
   Graph_Graph01091->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01091->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01091->GetYaxis()->SetTitleFont(42);
   Graph_Graph01091->GetZaxis()->SetLabelFont(42);
   Graph_Graph01091->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01091);
   
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
