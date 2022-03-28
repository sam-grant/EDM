void S12_Ag2_vs_p_A_trackReco_WORLD_250MeV_BQ_acceptanceUncorrected_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Mar 27 14:31:15 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.9151,-3.275927e-05,3375.534,1.848226e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1099[11] = {
   451.7897,
   653.3735,
   880.2932,
   1123.183,
   1371.134,
   1620.252,
   1866.954,
   2115.051,
   2362.622,
   2614.343,
   2787.765};
   Double_t Graph0_fy1099[11] = {
   -2.042225e-07,
   1.239025e-07,
   1.593342e-08,
   1.621128e-08,
   -3.840138e-08,
   -7.024958e-08,
   -1.560434e-08,
   2.38604e-07,
   7.080245e-09,
   3.477559e-08,
   -7.138502e-06};
   Double_t Graph0_fex1099[11] = {
   0.09759043,
   0.08244404,
   0.05973735,
   0.05837898,
   0.06217043,
   0.06865401,
   0.08012888,
   0.1003864,
   0.1310282,
   0.1612189,
   0.1970954};
   Double_t Graph0_fey1099[11] = {
   1.070468e-06,
   7.233721e-08,
   2.41015e-08,
   2.193901e-08,
   2.653581e-08,
   3.646021e-08,
   5.98665e-08,
   1.241843e-07,
   3.003202e-07,
   6.74915e-07,
   1.708051e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1099,Graph0_fy1099,Graph0_fex1099,Graph0_fey1099);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01099 = new TH1F("Graph_Graph01099","S12_",100,218.0651,3021.589);
   Graph_Graph01099->SetMinimum(-2.763511e-05);
   Graph_Graph01099->SetMaximum(1.335811e-05);
   Graph_Graph01099->SetDirectory(0);
   Graph_Graph01099->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01099->SetLineColor(ci);
   Graph_Graph01099->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01099->GetXaxis()->SetRange(0,100);
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
