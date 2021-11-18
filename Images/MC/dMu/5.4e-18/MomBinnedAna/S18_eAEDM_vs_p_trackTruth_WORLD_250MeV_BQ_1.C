void S18_eAEDM_vs_p_trackTruth_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:32:24 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.9126,-0.0145836,2745.365,0.2283616);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1052[11] = {
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
   Double_t Graph0_fy1052[11] = {
   0.1878708,
   0.06281242,
   0.0358634,
   0.02938207,
   0.0271134,
   0.02590728,
   0.02634034,
   0.02787912,
   0.03020887,
   0.02974189,
   0.06695774};
   Double_t Graph0_fex1052[11] = {
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
   Double_t Graph0_fey1052[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1052,Graph0_fy1052,Graph0_fex1052,Graph0_fey1052);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01052 = new TH1F("Graph_Graph01052","S18_",100,218.1061,3026.171);
   Graph_Graph01052->SetMinimum(0.009710929);
   Graph_Graph01052->SetMaximum(0.2040671);
   Graph_Graph01052->SetDirectory(0);
   Graph_Graph01052->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01052->SetLineColor(ci);
   Graph_Graph01052->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01052->GetXaxis()->SetRange(19,82);
   Graph_Graph01052->GetXaxis()->CenterTitle(true);
   Graph_Graph01052->GetXaxis()->SetLabelFont(42);
   Graph_Graph01052->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01052->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01052->GetXaxis()->SetTitleFont(42);
   Graph_Graph01052->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01052->GetYaxis()->CenterTitle(true);
   Graph_Graph01052->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01052->GetYaxis()->SetLabelFont(42);
   Graph_Graph01052->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01052->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01052->GetYaxis()->SetTitleFont(42);
   Graph_Graph01052->GetZaxis()->SetLabelFont(42);
   Graph_Graph01052->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01052->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01052);
   
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
