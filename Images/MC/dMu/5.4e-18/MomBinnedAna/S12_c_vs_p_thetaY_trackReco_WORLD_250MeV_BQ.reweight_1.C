void S12_c_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 10:51:49 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3862,-1.592958,3406.901,0.258157);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1094[11] = {
   451.8085,
   653.3576,
   880.334,
   1123.155,
   1371.138,
   1620.288,
   1866.777,
   2114.885,
   2362.581,
   2614.18,
   2787.586};
   Double_t Graph0_fy1094[11] = {
   -0.4564136,
   0.01965344,
   0.06093198,
   0.04548271,
   0.02364554,
   0.01925012,
   -0.004729662,
   0.04356912,
   0.01158179,
   0.01373548,
   -0.003255135};
   Double_t Graph0_fex1094[11] = {
   0.11886,
   0.1003479,
   0.07271084,
   0.07102476,
   0.07561697,
   0.08358051,
   0.09743681,
   0.1220708,
   0.1594292,
   0.1958982,
   0.2394042};
   Double_t Graph0_fey1094[11] = {
   0.1027462,
   0.03454731,
   0.01981911,
   0.016275,
   0.01487626,
   0.01419282,
   0.01434121,
   0.01536851,
   0.01701027,
   0.0177093,
   0.04242691};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1094,Graph0_fy1094,Graph0_fex1094,Graph0_fey1094);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01094 = new TH1F("Graph_Graph01094","S12_",100,218.0761,3021.438);
   Graph_Graph01094->SetMinimum(-1.407846);
   Graph_Graph01094->SetMaximum(0.07304549);
   Graph_Graph01094->SetDirectory(0);
   Graph_Graph01094->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01094->SetLineColor(ci);
   Graph_Graph01094->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01094->GetXaxis()->SetRange(0,101);
   Graph_Graph01094->GetXaxis()->CenterTitle(true);
   Graph_Graph01094->GetXaxis()->SetLabelFont(42);
   Graph_Graph01094->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01094->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01094->GetXaxis()->SetTitleFont(42);
   Graph_Graph01094->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01094->GetYaxis()->CenterTitle(true);
   Graph_Graph01094->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01094->GetYaxis()->SetLabelFont(42);
   Graph_Graph01094->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01094->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01094->GetYaxis()->SetTitleFont(42);
   Graph_Graph01094->GetZaxis()->SetLabelFont(42);
   Graph_Graph01094->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01094->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01094);
   
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
