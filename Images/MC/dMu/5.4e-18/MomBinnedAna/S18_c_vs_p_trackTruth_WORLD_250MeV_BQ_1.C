void S18_c_vs_p_trackTruth_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:32:24 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.9126,-1.939134,2745.365,7.07357);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1045[11] = {
   452.2534,
   653.3479,
   880.6543,
   1122.999,
   1370.952,
   1619.758,
   1866.475,
   2115.034,
   2363.281,
   2612.099,
   2791.813};
   Double_t Graph0_fy1045[11] = {
   5.438485,
   -0.0427762,
   -0.4116309,
   -0.3754782,
   -0.2965751,
   -0.250972,
   -0.2203044,
   -0.1211289,
   -0.1579044,
   -0.09734412,
   -0.1125262};
   Double_t Graph0_fex1045[11] = {
   0.1418395,
   0.1195206,
   0.08609712,
   0.08403163,
   0.09006856,
   0.09986921,
   0.1176419,
   0.1477182,
   0.1936432,
   0.231723,
   0.3524632};
   Double_t Graph0_fey1045[11] = {
   0.132967,
   0.04450748,
   0.0253858,
   0.02078234,
   0.01918635,
   0.01840862,
   0.01876496,
   0.02013861,
   0.02234239,
   0.02299353,
   0.05473232};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1045,Graph0_fy1045,Graph0_fex1045,Graph0_fey1045);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01045 = new TH1F("Graph_Graph01045","S18_",100,218.1061,3026.171);
   Graph_Graph01045->SetMinimum(-1.037864);
   Graph_Graph01045->SetMaximum(6.172299);
   Graph_Graph01045->SetDirectory(0);
   Graph_Graph01045->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01045->SetLineColor(ci);
   Graph_Graph01045->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01045->GetXaxis()->SetRange(19,82);
   Graph_Graph01045->GetXaxis()->CenterTitle(true);
   Graph_Graph01045->GetXaxis()->SetLabelFont(42);
   Graph_Graph01045->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01045->GetXaxis()->SetTitleFont(42);
   Graph_Graph01045->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01045->GetYaxis()->CenterTitle(true);
   Graph_Graph01045->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01045->GetYaxis()->SetLabelFont(42);
   Graph_Graph01045->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01045->GetYaxis()->SetTitleFont(42);
   Graph_Graph01045->GetZaxis()->SetLabelFont(42);
   Graph_Graph01045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01045);
   
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
