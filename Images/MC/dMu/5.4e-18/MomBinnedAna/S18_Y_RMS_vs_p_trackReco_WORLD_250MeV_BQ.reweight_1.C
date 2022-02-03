void S18_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 10:51:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.0201,9.38487,3406.608,16.34455);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1138[11] = {
   452.0609,
   653.2722,
   880.5507,
   1123.017,
   1370.779,
   1619.705,
   1866.411,
   2115.026,
   2363.263,
   2612.185,
   2787.396};
   Double_t Graph0_fy1138[11] = {
   13.00958,
   12.99831,
   12.94274,
   12.86225,
   12.80949,
   12.7783,
   12.73387,
   12.7016,
   12.60066,
   12.61482,
   12.63474};
   Double_t Graph0_fex1138[11] = {
   0.1193482,
   0.1008813,
   0.0726896,
   0.07092989,
   0.07614717,
   0.08434879,
   0.09945954,
   0.1250774,
   0.1642086,
   0.1964878,
   0.2503732};
   Double_t Graph0_fey1138[11] = {
   0.0332542,
   0.01344858,
   0.00930401,
   0.00896072,
   0.009584283,
   0.01062236,
   0.01249625,
   0.01564884,
   0.02035157,
   0.02537428,
   0.07712431};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1138,Graph0_fy1138,Graph0_fex1138,Graph0_fey1138);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01138 = new TH1F("Graph_Graph01138","S18_",100,218.3711,3021.216);
   Graph_Graph01138->SetMinimum(10.08084);
   Graph_Graph01138->SetMaximum(15.64858);
   Graph_Graph01138->SetDirectory(0);
   Graph_Graph01138->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01138->SetLineColor(ci);
   Graph_Graph01138->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01138->GetXaxis()->SetRange(0,101);
   Graph_Graph01138->GetXaxis()->CenterTitle(true);
   Graph_Graph01138->GetXaxis()->SetLabelFont(42);
   Graph_Graph01138->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01138->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01138->GetXaxis()->SetTitleFont(42);
   Graph_Graph01138->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01138->GetYaxis()->CenterTitle(true);
   Graph_Graph01138->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01138->GetYaxis()->SetLabelFont(42);
   Graph_Graph01138->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01138->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01138->GetYaxis()->SetTitleFont(42);
   Graph_Graph01138->GetZaxis()->SetLabelFont(42);
   Graph_Graph01138->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01138->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01138);
   
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
