void S12S18_Ag2_vs_p_A_trackReco_WORLD_250MeV_BQ_acceptanceUncorrected_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Mar 27 14:31:23 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.6611,-1.249868e-05,3375.214,7.334531e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1173[11] = {
   451.9156,
   653.3229,
   880.4153,
   1123.113,
   1371,
   1620.005,
   1866.72,
   2115.058,
   2362.929,
   2613.247,
   2787.596};
   Double_t Graph0_fy1173[11] = {
   -1.580321e-07,
   4.633932e-08,
   -6.510061e-09,
   5.701455e-09,
   2.438538e-09,
   -1.769445e-08,
   2.955477e-10,
   4.119744e-08,
   1.600431e-07,
   2.483645e-07,
   -2.582076e-06};
   Double_t Graph0_fex1173[11] = {
   0.06924386,
   0.0584423,
   0.04224593,
   0.04125611,
   0.04409094,
   0.04876828,
   0.05723078,
   0.07179015,
   0.09404122,
   0.1141176,
   0.141564};
   Double_t Graph0_fey1173[11] = {
   3.821273e-07,
   2.540544e-08,
   8.531816e-09,
   7.745634e-09,
   9.454732e-09,
   1.306448e-08,
   2.178972e-08,
   4.536771e-08,
   1.104107e-07,
   2.42229e-07,
   6.611071e-06};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1173,Graph0_fy1173,Graph0_fex1173,Graph0_fey1173);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01173 = new TH1F("Graph_Graph01173","S12S18_",100,218.2572,3021.327);
   Graph_Graph01173->SetMinimum(-1.051536e-05);
   Graph_Graph01173->SetMaximum(5.35121e-06);
   Graph_Graph01173->SetDirectory(0);
   Graph_Graph01173->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01173->SetLineColor(ci);
   Graph_Graph01173->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01173->GetXaxis()->SetRange(0,100);
   Graph_Graph01173->GetXaxis()->CenterTitle(true);
   Graph_Graph01173->GetXaxis()->SetLabelFont(42);
   Graph_Graph01173->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01173->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01173->GetXaxis()->SetTitleFont(42);
   Graph_Graph01173->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01173->GetYaxis()->CenterTitle(true);
   Graph_Graph01173->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01173->GetYaxis()->SetLabelFont(42);
   Graph_Graph01173->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01173->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01173->GetYaxis()->SetTitleFont(42);
   Graph_Graph01173->GetZaxis()->SetLabelFont(42);
   Graph_Graph01173->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01173->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01173);
   
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
