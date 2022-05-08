void S18_AEDMOverThetaYRMS_vs_p_trackTruth_WORLD_250MeV_1000_2500_MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 11:05:08 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.6101,-0.01123825,3380.686,0.02961829);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1145[11] = {
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
   Double_t Graph0_fy1145[11] = {
   -0.001557213,
   0.00618753,
   0.005902474,
   0.005654005,
   0.008647199,
   0.00995145,
   0.01136016,
   0.008058609,
   0.01404527,
   0.01955732,
   0.004988164};
   Double_t Graph0_fex1145[11] = {
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
   Double_t Graph0_fey1145[11] = {
   -0.004147939,
   0.001673165,
   0.001162703,
   0.001126422,
   0.001208506,
   0.00134191,
   0.001586954,
   0.001988031,
   0.002604543,
   0.003251545,
   0.009416989};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1145,Graph0_fy1145,Graph0_fex1145,Graph0_fey1145);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01145 = new TH1F("Graph_Graph01145","S18_",100,218.0011,3026.156);
   Graph_Graph01145->SetMinimum(-0.007152594);
   Graph_Graph01145->SetMaximum(0.02553264);
   Graph_Graph01145->SetDirectory(0);
   Graph_Graph01145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01145->SetLineColor(ci);
   Graph_Graph01145->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01145->GetXaxis()->SetRange(0,100);
   Graph_Graph01145->GetXaxis()->CenterTitle(true);
   Graph_Graph01145->GetXaxis()->SetLabelFont(42);
   Graph_Graph01145->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01145->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01145->GetXaxis()->SetTitleFont(42);
   Graph_Graph01145->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01145->GetYaxis()->CenterTitle(true);
   Graph_Graph01145->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01145->GetYaxis()->SetLabelFont(42);
   Graph_Graph01145->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01145->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01145->GetYaxis()->SetTitleFont(42);
   Graph_Graph01145->GetZaxis()->SetLabelFont(42);
   Graph_Graph01145->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01145->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01145);
   
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
