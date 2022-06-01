void S18_Ag2_vs_p_A_trackTruth_WORLD_250MeV_BQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May 29 17:11:44 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.6101,-3.60637e-05,3380.686,1.610483e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1136[11] = {
   452.1108,
   653.3423,
   880.5733,
   1123.012,
   1370.957,
   1619.772,
   1866.605,
   2115.051,
   2363.383,
   2612.035,
   2791.903};
   Double_t Graph0_fy1136[11] = {
   -2.451616e-06,
   8.409112e-08,
   -1.294678e-08,
   1.831272e-08,
   1.698701e-08,
   -6.25752e-09,
   -7.925133e-08,
   -2.096212e-07,
   -1.372851e-07,
   3.516158e-08,
   -9.979436e-06};
   Double_t Graph0_fex1136[11] = {
   0.09679788,
   0.08162527,
   0.05879418,
   0.057379,
   0.06148902,
   0.06814,
   0.08043393,
   0.1008042,
   0.1326158,
   0.1588366,
   0.2400074};
   Double_t Graph0_fey1136[11] = {
   1.01899e-06,
   6.893942e-08,
   2.302214e-08,
   2.082542e-08,
   2.557533e-08,
   3.563219e-08,
   6.024347e-08,
   1.255034e-07,
   3.16166e-07,
   6.803425e-07,
   1.738951e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1136,Graph0_fy1136,Graph0_fex1136,Graph0_fey1136);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01136 = new TH1F("Graph_Graph01136","S18_",100,218.0011,3026.156);
   Graph_Graph01136->SetMinimum(-3.084685e-05);
   Graph_Graph01136->SetMaximum(1.088797e-05);
   Graph_Graph01136->SetDirectory(0);
   Graph_Graph01136->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01136->SetLineColor(ci);
   Graph_Graph01136->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01136->GetXaxis()->SetRange(0,100);
   Graph_Graph01136->GetXaxis()->CenterTitle(true);
   Graph_Graph01136->GetXaxis()->SetLabelFont(42);
   Graph_Graph01136->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01136->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01136->GetXaxis()->SetTitleFont(42);
   Graph_Graph01136->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01136->GetYaxis()->CenterTitle(true);
   Graph_Graph01136->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01136->GetYaxis()->SetLabelFont(42);
   Graph_Graph01136->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01136->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01136->GetYaxis()->SetTitleFont(42);
   Graph_Graph01136->GetZaxis()->SetLabelFont(42);
   Graph_Graph01136->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01136->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01136);
   
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
