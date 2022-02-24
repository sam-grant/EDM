void S18_theta_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_acceptanceCorrected_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:12:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.0438,-5.031314,3406.65,56.4274);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1137[11] = {
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
   Double_t Graph0_fy1137[11] = {
   37.01047,
   35.22764,
   31.78072,
   27.5255,
   22.73779,
   17.88809,
   14.07889,
   11.13817,
   8.757334,
   6.644647,
   5.130029};
   Double_t Graph0_fex1137[11] = {
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
   Double_t Graph0_fey1137[11] = {
   0.1028505,
   0.03675661,
   0.02188714,
   0.01792705,
   0.01575812,
   0.01375629,
   0.01278012,
   0.0126831,
   0.01307715,
   0.01235069,
   0.02887055};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1137,Graph0_fy1137,Graph0_fex1137,Graph0_fey1137);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01137 = new TH1F("Graph_Graph01137","S18_",100,218.3546,3021.252);
   Graph_Graph01137->SetMinimum(1.114558);
   Graph_Graph01137->SetMaximum(50.28153);
   Graph_Graph01137->SetDirectory(0);
   Graph_Graph01137->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01137->SetLineColor(ci);
   Graph_Graph01137->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01137->GetXaxis()->SetRange(0,101);
   Graph_Graph01137->GetXaxis()->CenterTitle(true);
   Graph_Graph01137->GetXaxis()->SetLabelFont(42);
   Graph_Graph01137->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01137->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01137->GetXaxis()->SetTitleFont(42);
   Graph_Graph01137->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01137->GetYaxis()->CenterTitle(true);
   Graph_Graph01137->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01137->GetYaxis()->SetLabelFont(42);
   Graph_Graph01137->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01137->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01137->GetYaxis()->SetTitleFont(42);
   Graph_Graph01137->GetZaxis()->SetLabelFont(42);
   Graph_Graph01137->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01137->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01137);
   
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
