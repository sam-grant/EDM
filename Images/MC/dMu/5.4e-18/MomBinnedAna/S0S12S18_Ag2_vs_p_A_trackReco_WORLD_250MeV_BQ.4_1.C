void S0S12S18_Ag2_vs_p_A_trackReco_WORLD_250MeV_BQ.4_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:36:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4033,-3.056178e-07,3407.53,3.56005e-07);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1210[11] = {
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
   Double_t Graph0_fy1210[11] = {
   -8.510237e-08,
   -6.905942e-09,
   -8.148961e-09,
   -4.431378e-09,
   2.434938e-09,
   -3.40293e-09,
   -1.63088e-09,
   5.581717e-08,
   4.795081e-08,
   -2.658472e-07,
   -1.198907e-07};
   Double_t Graph0_fex1210[11] = {
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
   Double_t Graph0_fey1210[11] = {
   4.339696e-07,
   2.882543e-08,
   9.699962e-09,
   8.842756e-09,
   1.075646e-08,
   1.482143e-08,
   2.426253e-08,
   4.909646e-08,
   1.157293e-07,
   2.583253e-07,
   6.482431e-06};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1210,Graph0_fy1210,Graph0_fex1210,Graph0_fey1210);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01210 = new TH1F("Graph_Graph01210","S0S12S18_",100,218.1288,3021.998);
   Graph_Graph01210->SetMinimum(-2.394556e-07);
   Graph_Graph01210->SetMaximum(2.898427e-07);
   Graph_Graph01210->SetDirectory(0);
   Graph_Graph01210->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01210->SetLineColor(ci);
   Graph_Graph01210->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01210->GetXaxis()->SetRange(0,101);
   Graph_Graph01210->GetXaxis()->CenterTitle(true);
   Graph_Graph01210->GetXaxis()->SetLabelFont(42);
   Graph_Graph01210->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01210->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01210->GetXaxis()->SetTitleFont(42);
   Graph_Graph01210->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01210->GetYaxis()->CenterTitle(true);
   Graph_Graph01210->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01210->GetYaxis()->SetLabelFont(42);
   Graph_Graph01210->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01210->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01210->GetYaxis()->SetTitleFont(42);
   Graph_Graph01210->GetZaxis()->SetLabelFont(42);
   Graph_Graph01210->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01210->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01210);
   
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
