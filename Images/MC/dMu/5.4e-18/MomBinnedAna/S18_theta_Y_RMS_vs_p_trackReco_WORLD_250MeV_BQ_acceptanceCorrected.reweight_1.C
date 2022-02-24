void S18_theta_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_acceptanceCorrected.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:44:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.0465,-5.259703,3406.654,57.97755);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1137[11] = {
   452.0383,
   653.2767,
   880.5616,
   1123.015,
   1370.8,
   1619.721,
   1866.492,
   2115.018,
   2363.349,
   2612.121,
   2787.449};
   Double_t Graph0_fy1137[11] = {
   36.41219,
   33.99434,
   29.70379,
   24.84865,
   19.81077,
   15.57709,
   12.44428,
   9.960385,
   7.899001,
   6.033024,
   4.676557};
   Double_t Graph0_fex1137[11] = {
   0.1105323,
   0.09332027,
   0.06724064,
   0.0656172,
   0.07044104,
   0.07801539,
   0.09201272,
   0.1155807,
   0.1519345,
   0.1816586,
   0.2304013};
   Double_t Graph0_fey1137[11] = {
   0.09772911,
   0.03455713,
   0.02015343,
   0.01607888,
   0.01371287,
   0.01197875,
   0.01129635,
   0.01134186,
   0.01179563,
   0.01121411,
   0.02632185};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1137,Graph0_fy1137,Graph0_fex1137,Graph0_fey1137);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01137 = new TH1F("Graph_Graph01137","S18_",100,218.3526,3021.255);
   Graph_Graph01137->SetMinimum(1.064022);
   Graph_Graph01137->SetMaximum(51.65382);
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
