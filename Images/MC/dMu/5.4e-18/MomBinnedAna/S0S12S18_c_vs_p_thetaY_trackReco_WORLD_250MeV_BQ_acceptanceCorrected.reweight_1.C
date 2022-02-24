void S0S12S18_c_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_acceptanceCorrected.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:45:04 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3907,-1.230409,3407.423,7.427896);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1205[11] = {
   451.8445,
   653.3043,
   880.3432,
   1123.073,
   1371.072,
   1620.188,
   1866.987,
   2115.41,
   2363.046,
   2613.742,
   2788.122};
   Double_t Graph0_fy1205[11] = {
   1.382441,
   -0.1092004,
   -0.3637287,
   -0.4569029,
   -0.4027255,
   -0.2939119,
   -0.1901532,
   -0.1040693,
   -0.0593184,
   -0.04315471,
   -0.01661713};
   Double_t Graph0_fex1205[11] = {
   0.06806252,
   0.05746264,
   0.04161417,
   0.04064954,
   0.04340163,
   0.04801048,
   0.0560007,
   0.06963699,
   0.09008171,
   0.1102808,
   0.1342331};
   Double_t Graph0_fey1205[11] = {
   0.08560659,
   0.03025593,
   0.0177635,
   0.01418254,
   0.0120163,
   0.01046604,
   0.009838771,
   0.009915569,
   0.01042084,
   0.0104615,
   0.02477464};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1205,Graph0_fy1205,Graph0_fex1205,Graph0_fey1205);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01205 = new TH1F("Graph_Graph01205","S0S12S18_",100,218.1284,3021.904);
   Graph_Graph01205->SetMinimum(-0.3645787);
   Graph_Graph01205->SetMaximum(6.562065);
   Graph_Graph01205->SetDirectory(0);
   Graph_Graph01205->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01205->SetLineColor(ci);
   Graph_Graph01205->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01205->GetXaxis()->SetRange(0,101);
   Graph_Graph01205->GetXaxis()->CenterTitle(true);
   Graph_Graph01205->GetXaxis()->SetLabelFont(42);
   Graph_Graph01205->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01205->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01205->GetXaxis()->SetTitleFont(42);
   Graph_Graph01205->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01205->GetYaxis()->CenterTitle(true);
   Graph_Graph01205->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01205->GetYaxis()->SetLabelFont(42);
   Graph_Graph01205->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01205->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01205->GetYaxis()->SetTitleFont(42);
   Graph_Graph01205->GetZaxis()->SetLabelFont(42);
   Graph_Graph01205->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01205->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01205);
   
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
