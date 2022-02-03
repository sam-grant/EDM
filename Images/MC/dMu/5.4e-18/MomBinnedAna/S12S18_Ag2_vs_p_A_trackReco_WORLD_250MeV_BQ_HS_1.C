void S12S18_Ag2_vs_p_A_trackReco_WORLD_250MeV_BQ_HS_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb  1 16:31:09 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.1445,-5.119607e-06,3406.661,7.832196e-07);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1173[11] = {
   451.9321,
   653.3151,
   880.441,
   1123.088,
   1370.959,
   1620.001,
   1866.599,
   2114.953,
   2362.908,
   2613.197,
   2787.495};
   Double_t Graph0_fy1173[11] = {
   7.66825e-08,
   4.599766e-08,
   -1.879274e-08,
   1.147772e-09,
   -5.597322e-09,
   7.252771e-10,
   -2.958136e-08,
   1.005803e-07,
   1.368031e-07,
   -4.78356e-10,
   -1.626593e-06};
   Double_t Graph0_fex1173[11] = {
   0.08422585,
   0.07114437,
   0.05140669,
   0.05018896,
   0.05365579,
   0.05937024,
   0.06960067,
   0.08736012,
   0.1143839,
   0.1387502,
   0.1730443};
   Double_t Graph0_fey1173[11] = {
   6.873964e-07,
   4.583849e-08,
   1.535111e-08,
   1.394833e-08,
   1.760084e-08,
   2.357739e-08,
   3.925583e-08,
   8.186853e-08,
   1.990849e-07,
   4.35556e-07,
   1.200068e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1173,Graph0_fy1173,Graph0_fex1173,Graph0_fey1173);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01173 = new TH1F("Graph_Graph01173","S12S18_",100,218.2659,3021.25);
   Graph_Graph01173->SetMinimum(-4.529325e-06);
   Graph_Graph01173->SetMaximum(1.929369e-07);
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
