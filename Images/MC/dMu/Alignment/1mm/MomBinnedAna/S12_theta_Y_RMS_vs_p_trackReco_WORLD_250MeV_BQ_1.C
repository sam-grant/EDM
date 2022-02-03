void S12_theta_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:51:49 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.8782,-5.284092,3407.489,60.43864);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1100[11] = {
   451.5772,
   653.0552,
   880.0811,
   1123.256,
   1371.053,
   1620.101,
   1866.93,
   2114.522,
   2362.279,
   2614.457,
   2787.823};
   Double_t Graph0_fy1100[11] = {
   30.87544,
   25.75675,
   21.24074,
   17.99224,
   15.46562,
   13.26377,
   11.41133,
   9.634084,
   7.944967,
   6.254952,
   4.925175};
   Double_t Graph0_fex1100[11] = {
   0.1924069,
   0.1635947,
   0.1188262,
   0.1164574,
   0.124175,
   0.1375161,
   0.160136,
   0.20159,
   0.2639137,
   0.3238621,
   0.40328};
   Double_t Graph0_fey1100[11] = {
   0.127404,
   0.04326648,
   0.02496965,
   0.02054822,
   0.0188846,
   0.01795338,
   0.01799701,
   0.01913378,
   0.02072138,
   0.02052669,
   0.04692559};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1100,Graph0_fy1100,Graph0_fex1100,Graph0_fey1100);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01100 = new TH1F("Graph_Graph01100","S12_",100,217.7007,3021.911);
   Graph_Graph01100->SetMinimum(1.288182);
   Graph_Graph01100->SetMaximum(53.86637);
   Graph_Graph01100->SetDirectory(0);
   Graph_Graph01100->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01100->SetLineColor(ci);
   Graph_Graph01100->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01100->GetXaxis()->SetRange(0,101);
   Graph_Graph01100->GetXaxis()->CenterTitle(true);
   Graph_Graph01100->GetXaxis()->SetLabelFont(42);
   Graph_Graph01100->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01100->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01100->GetXaxis()->SetTitleFont(42);
   Graph_Graph01100->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01100->GetYaxis()->CenterTitle(true);
   Graph_Graph01100->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01100->GetYaxis()->SetLabelFont(42);
   Graph_Graph01100->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01100->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01100->GetYaxis()->SetTitleFont(42);
   Graph_Graph01100->GetZaxis()->SetLabelFont(42);
   Graph_Graph01100->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01100->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01100);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
