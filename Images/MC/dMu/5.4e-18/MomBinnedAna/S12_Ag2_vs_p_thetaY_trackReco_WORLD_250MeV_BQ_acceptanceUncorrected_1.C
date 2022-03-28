void S12_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_acceptanceUncorrected_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Mar 27 14:31:15 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.9151,-0.1645211,3375.534,0.5335212);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1096[11] = {
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
   Double_t Graph0_fy1096[11] = {
   0.2868599,
   0.08180882,
   -0.02153862,
   -0.009695561,
   -0.01915763,
   -0.01437166,
   0.01637109,
   0.02029537,
   0.007609402,
   0.02401452,
   0.005841823};
   Double_t Graph0_fex1096[11] = {
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
   Double_t Graph0_fey1096[11] = {
   0.1303209,
   0.0438147,
   0.02512361,
   0.02063169,
   0.01885541,
   0.01800061,
   0.0181845,
   0.01948788,
   0.02158112,
   0.02246208,
   0.05402252};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1096,Graph0_fy1096,Graph0_fex1096,Graph0_fey1096);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01096 = new TH1F("Graph_Graph01096","S12_",100,218.0651,3021.589);
   Graph_Graph01096->SetMinimum(-0.09471685);
   Graph_Graph01096->SetMaximum(0.463717);
   Graph_Graph01096->SetDirectory(0);
   Graph_Graph01096->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01096->SetLineColor(ci);
   Graph_Graph01096->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01096->GetXaxis()->SetRange(0,100);
   Graph_Graph01096->GetXaxis()->CenterTitle(true);
   Graph_Graph01096->GetXaxis()->SetLabelFont(42);
   Graph_Graph01096->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01096->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01096->GetXaxis()->SetTitleFont(42);
   Graph_Graph01096->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01096->GetYaxis()->CenterTitle(true);
   Graph_Graph01096->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01096->GetYaxis()->SetLabelFont(42);
   Graph_Graph01096->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01096->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01096->GetYaxis()->SetTitleFont(42);
   Graph_Graph01096->GetZaxis()->SetLabelFont(42);
   Graph_Graph01096->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01096->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01096);
   
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
