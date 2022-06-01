void S0_Y_RMS_vs_p_trackReco_WORLD_250MeV_pValQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:48:51 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.6976,9.898419,3408.279,28.3301);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1066[12] = {
   190.1422,
   431.7918,
   629.8411,
   874.1286,
   1122.912,
   1372.564,
   1621.827,
   1870.387,
   2119.295,
   2366.963,
   2612.664,
   2827.454};
   Double_t Graph0_fy1066[12] = {
   24.92786,
   13.90325,
   13.2858,
   13.08495,
   13.00727,
   12.97779,
   13.03355,
   13.12694,
   13.2822,
   13.62613,
   14.27629,
   15.58408};
   Double_t Graph0_fex1066[12] = {
   0.6485143,
   0.06606595,
   0.05393537,
   0.05331023,
   0.05537795,
   0.05830269,
   0.06242498,
   0.06839258,
   0.0772997,
   0.09059204,
   0.1134356,
   0.1449771};
   Double_t Graph0_fey1066[12] = {
   0.3302934,
   0.01304145,
   0.007137071,
   0.006845595,
   0.007063834,
   0.007422547,
   0.007982307,
   0.008817801,
   0.01009772,
   0.01218098,
   0.01612674,
   0.02993442};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1066,Graph0_fy1066,Graph0_fex1066,Graph0_fey1066);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01066 = new TH1F("Graph_Graph01066","S0_",100,0,3091.409);
   Graph_Graph01066->SetMinimum(11.74159);
   Graph_Graph01066->SetMaximum(26.48693);
   Graph_Graph01066->SetDirectory(0);
   Graph_Graph01066->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01066->SetLineColor(ci);
   Graph_Graph01066->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01066->GetXaxis()->SetRange(1,98);
   Graph_Graph01066->GetXaxis()->CenterTitle(true);
   Graph_Graph01066->GetXaxis()->SetLabelFont(42);
   Graph_Graph01066->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01066->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01066->GetXaxis()->SetTitleFont(42);
   Graph_Graph01066->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01066->GetYaxis()->CenterTitle(true);
   Graph_Graph01066->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01066->GetYaxis()->SetLabelFont(42);
   Graph_Graph01066->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01066->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01066->GetYaxis()->SetTitleFont(42);
   Graph_Graph01066->GetZaxis()->SetLabelFont(42);
   Graph_Graph01066->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01066->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01066);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
