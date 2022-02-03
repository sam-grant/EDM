void S12_Ag2_vs_p_A_trackReco_WORLD_250MeV_BQ.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 10:51:49 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3862,-2.855169e-06,3406.901,1.234973e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1099[11] = {
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
   Double_t Graph0_fy1099[11] = {
   -2.611547e-07,
   2.528254e-07,
   3.51096e-08,
   3.225288e-08,
   -5.505381e-08,
   -1.583825e-08,
   -6.891913e-08,
   3.467494e-07,
   2.358222e-07,
   1.360683e-07,
   2.680194e-06};
   Double_t Graph0_fex1099[11] = {
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
   Double_t Graph0_fey1099[11] = {
   1.925482e-06,
   1.291892e-07,
   4.337884e-08,
   3.953633e-08,
   4.768993e-08,
   6.574364e-08,
   1.079457e-07,
   2.266291e-07,
   5.425672e-07,
   1.210406e-06,
   3.12838e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1099,Graph0_fy1099,Graph0_fex1099,Graph0_fey1099);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01099 = new TH1F("Graph_Graph01099","S12_",100,218.0761,3021.438);
   Graph_Graph01099->SetMinimum(-1.334679e-06);
   Graph_Graph01099->SetMaximum(1.082924e-05);
   Graph_Graph01099->SetDirectory(0);
   Graph_Graph01099->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01099->SetLineColor(ci);
   Graph_Graph01099->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01099->GetXaxis()->SetRange(0,101);
   Graph_Graph01099->GetXaxis()->CenterTitle(true);
   Graph_Graph01099->GetXaxis()->SetLabelFont(42);
   Graph_Graph01099->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01099->GetXaxis()->SetTitleFont(42);
   Graph_Graph01099->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01099->GetYaxis()->CenterTitle(true);
   Graph_Graph01099->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01099->GetYaxis()->SetLabelFont(42);
   Graph_Graph01099->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01099->GetYaxis()->SetTitleFont(42);
   Graph_Graph01099->GetZaxis()->SetLabelFont(42);
   Graph_Graph01099->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01099);
   
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
