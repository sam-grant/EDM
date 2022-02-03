void S0S12S18_c_vs_p_A_trackReco_WORLD_250MeV_BQ_HS_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb  1 16:31:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4033,-1.339034e-05,3407.53,3.075424e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1208[11] = {
   451.8566,
   653.3028,
   880.3056,
   1123.079,
   1371.077,
   1620.197,
   1866.984,
   2115.419,
   2362.991,
   2613.824,
   2788.2};
   Double_t Graph0_fy1208[11] = {
   5.816575e-06,
   -7.260037e-08,
   -3.625298e-08,
   -2.995886e-08,
   -4.233396e-08,
   -2.207178e-08,
   -2.769541e-08,
   5.703218e-08,
   -1.654701e-08,
   -2.867265e-07,
   -3.431809e-06};
   Double_t Graph0_fex1208[11] = {
   0.07208923,
   0.06091129,
   0.04412931,
   0.04310084,
   0.0460258,
   0.05089799,
   0.0593305,
   0.0737244,
   0.09523859,
   0.1166572,
   0.1421294};
   Double_t Graph0_fey1208[11] = {
   3.071303e-07,
   2.038581e-08,
   6.865194e-09,
   6.237117e-09,
   7.600938e-09,
   1.049584e-08,
   1.739333e-08,
   3.57918e-08,
   8.640262e-08,
   1.979448e-07,
   5.10112e-06};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1208,Graph0_fy1208,Graph0_fex1208,Graph0_fey1208);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01208 = new TH1F("Graph_Graph01208","S0S12S18_",100,218.1288,3021.998);
   Graph_Graph01208->SetMinimum(-8.975884e-06);
   Graph_Graph01208->SetMaximum(2.633978e-05);
   Graph_Graph01208->SetDirectory(0);
   Graph_Graph01208->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01208->SetLineColor(ci);
   Graph_Graph01208->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01208->GetXaxis()->SetRange(0,101);
   Graph_Graph01208->GetXaxis()->CenterTitle(true);
   Graph_Graph01208->GetXaxis()->SetLabelFont(42);
   Graph_Graph01208->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01208->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01208->GetXaxis()->SetTitleFont(42);
   Graph_Graph01208->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01208->GetYaxis()->CenterTitle(true);
   Graph_Graph01208->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01208->GetYaxis()->SetLabelFont(42);
   Graph_Graph01208->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01208->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01208->GetYaxis()->SetTitleFont(42);
   Graph_Graph01208->GetZaxis()->SetLabelFont(42);
   Graph_Graph01208->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01208->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01208);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
