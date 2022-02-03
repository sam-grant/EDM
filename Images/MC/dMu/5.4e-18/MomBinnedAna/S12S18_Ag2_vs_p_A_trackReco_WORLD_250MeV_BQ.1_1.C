void S12S18_Ag2_vs_p_A_trackReco_WORLD_250MeV_BQ.1_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:33:09 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4313,-0.0002779092,3406.974,3.184904e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1173[11] = {
   451.7994,
   653.446,
   880.5243,
   1123.169,
   1371.058,
   1619.937,
   1866.741,
   2114.974,
   2362.685,
   2613.301,
   2787.6};
   Double_t Graph0_fy1173[11] = {
   1.785471e-07,
   1.901778e-07,
   -5.273286e-08,
   -1.182798e-08,
   8.750521e-08,
   -3.168368e-09,
   -1.126726e-07,
   1.763401e-07,
   8.20572e-08,
   7.363008e-07,
   -8.81522e-05};
   Double_t Graph0_fex1173[11] = {
   0.1344131,
   0.1129402,
   0.08165877,
   0.07969477,
   0.08523107,
   0.09432402,
   0.1105355,
   0.1386522,
   0.1809677,
   0.2203638,
   0.2773712};
   Double_t Graph0_fey1173[11] = {
   2.778342e-06,
   1.83462e-07,
   6.146308e-08,
   5.576485e-08,
   6.829306e-08,
   9.45354e-08,
   1.570044e-07,
   3.278343e-07,
   7.925941e-07,
   1.743416e-06,
   4.702961e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1173,Graph0_fy1173,Graph0_fex1173,Graph0_fey1173);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01173 = new TH1F("Graph_Graph01173","S12S18_",100,218.0438,3021.499);
   Graph_Graph01173->SetMinimum(-0.0002469334);
   Graph_Graph01173->SetMaximum(8.73219e-07);
   Graph_Graph01173->SetDirectory(0);
   Graph_Graph01173->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01173->SetLineColor(ci);
   Graph_Graph01173->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01173->GetXaxis()->SetRange(0,101);
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
