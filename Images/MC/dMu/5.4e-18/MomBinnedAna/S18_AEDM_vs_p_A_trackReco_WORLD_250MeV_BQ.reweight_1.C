void S18_AEDM_vs_p_A_trackReco_WORLD_250MeV_BQ.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 10:51:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.0201,-1.417563e-05,3406.608,1.5232e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1135[11] = {
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
   Double_t Graph0_fy1135[11] = {
   -3.611236e-06,
   1.910726e-07,
   9.466757e-08,
   8.324943e-08,
   1.712554e-07,
   3.943438e-07,
   3.929186e-07,
   4.995862e-07,
   9.649627e-07,
   3.89041e-06,
   5.721544e-06};
   Double_t Graph0_fex1135[11] = {
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
   Double_t Graph0_fey1135[11] = {
   1.921546e-06,
   1.277465e-07,
   4.29228e-08,
   3.910453e-08,
   4.851052e-08,
   6.61265e-08,
   1.082192e-07,
   2.093544e-07,
   4.578305e-07,
   8.428289e-07,
   2.241632e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1135,Graph0_fy1135,Graph0_fex1135,Graph0_fey1135);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01135 = new TH1F("Graph_Graph01135","S18_",100,218.3711,3021.216);
   Graph_Graph01135->SetMinimum(-1.123487e-05);
   Graph_Graph01135->SetMaximum(1.229124e-05);
   Graph_Graph01135->SetDirectory(0);
   Graph_Graph01135->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01135->SetLineColor(ci);
   Graph_Graph01135->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01135->GetXaxis()->SetRange(0,101);
   Graph_Graph01135->GetXaxis()->CenterTitle(true);
   Graph_Graph01135->GetXaxis()->SetLabelFont(42);
   Graph_Graph01135->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01135->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01135->GetXaxis()->SetTitleFont(42);
   Graph_Graph01135->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01135->GetYaxis()->CenterTitle(true);
   Graph_Graph01135->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01135->GetYaxis()->SetLabelFont(42);
   Graph_Graph01135->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01135->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01135->GetYaxis()->SetTitleFont(42);
   Graph_Graph01135->GetZaxis()->SetLabelFont(42);
   Graph_Graph01135->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01135);
   
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
