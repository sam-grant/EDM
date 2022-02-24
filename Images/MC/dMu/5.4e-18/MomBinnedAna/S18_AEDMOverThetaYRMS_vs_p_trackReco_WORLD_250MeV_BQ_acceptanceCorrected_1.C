void S18_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_BQ_acceptanceCorrected_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:12:18 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.0438,-0.0334343,3406.65,0.03546265);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1145[11] = {
   452.0399,
   653.2737,
   880.5591,
   1123.017,
   1370.796,
   1619.722,
   1866.493,
   2115.02,
   2363.344,
   2612.123,
   2787.446};
   Double_t Graph0_fy1145[11] = {
   -0.002618869,
   0.003761089,
   0.004040502,
   0.004077096,
   0.008595412,
   0.009682338,
   0.01089241,
   0.00848761,
   0.01209787,
   0.02391162,
   0.007445083};
   Double_t Graph0_fex1145[11] = {
   0.1105385,
   0.09332112,
   0.06724074,
   0.06561832,
   0.07044049,
   0.07801512,
   0.09201115,
   0.1155809,
   0.1519297,
   0.1816533,
   0.2303506};
   Double_t Graph0_fey1145[11] = {
   -0.005574305,
   0.002086506,
   0.001374948,
   0.001302214,
   0.001386438,
   0.001535296,
   0.001818882,
   0.002277823,
   0.00299015,
   0.003721079,
   0.01120342};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1145,Graph0_fy1145,Graph0_fex1145,Graph0_fey1145);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01145 = new TH1F("Graph_Graph01145","S18_",100,218.3546,3021.252);
   Graph_Graph01145->SetMinimum(-0.02654461);
   Graph_Graph01145->SetMaximum(0.02857295);
   Graph_Graph01145->SetDirectory(0);
   Graph_Graph01145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01145->SetLineColor(ci);
   Graph_Graph01145->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01145->GetXaxis()->SetRange(0,101);
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
