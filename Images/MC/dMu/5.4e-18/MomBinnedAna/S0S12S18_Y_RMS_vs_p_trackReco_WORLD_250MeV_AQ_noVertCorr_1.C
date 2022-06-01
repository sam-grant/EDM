void S0S12S18_Y_RMS_vs_p_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.3995,10.5141,3405.595,30.66332);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1222[12] = {
   194.6922,
   428.6847,
   630.9386,
   875.1931,
   1123.964,
   1373.219,
   1622.316,
   1870.762,
   2119.242,
   2366.792,
   2612.599,
   2825.796};
   Double_t Graph0_fy1222[12] = {
   27.22343,
   15.12208,
   14.07016,
   13.92392,
   13.87498,
   13.91399,
   13.97908,
   14.12979,
   14.34871,
   14.73144,
   15.43655,
   16.76411};
   Double_t Graph0_fex1222[12] = {
   0.1483758,
   0.02589663,
   0.0201489,
   0.01936183,
   0.01967197,
   0.02031215,
   0.02139941,
   0.02322305,
   0.02613862,
   0.03076314,
   0.03885924,
   0.04941833};
   Double_t Graph0_fey1222[12] = {
   0.08168908,
   0.005285937,
   0.002827107,
   0.00265157,
   0.002680516,
   0.002776634,
   0.002942427,
   0.003230229,
   0.003699792,
   0.00448836,
   0.006000426,
   0.01125693};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1222,Graph0_fy1222,Graph0_fex1222,Graph0_fey1222);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01222 = new TH1F("Graph_Graph01222","S0S12S18_",100,0,3088.975);
   Graph_Graph01222->SetMinimum(12.52902);
   Graph_Graph01222->SetMaximum(28.6484);
   Graph_Graph01222->SetDirectory(0);
   Graph_Graph01222->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01222->SetLineColor(ci);
   Graph_Graph01222->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01222->GetXaxis()->SetRange(1,98);
   Graph_Graph01222->GetXaxis()->CenterTitle(true);
   Graph_Graph01222->GetXaxis()->SetLabelFont(42);
   Graph_Graph01222->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01222->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01222->GetXaxis()->SetTitleFont(42);
   Graph_Graph01222->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01222->GetYaxis()->CenterTitle(true);
   Graph_Graph01222->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01222->GetYaxis()->SetLabelFont(42);
   Graph_Graph01222->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01222->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01222->GetYaxis()->SetTitleFont(42);
   Graph_Graph01222->GetZaxis()->SetLabelFont(42);
   Graph_Graph01222->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01222->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01222);
   
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
