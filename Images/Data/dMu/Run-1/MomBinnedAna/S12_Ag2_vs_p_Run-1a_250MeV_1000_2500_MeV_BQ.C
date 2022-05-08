void S12_Ag2_vs_p_Run-1a_250MeV_1000_2500_MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May  8 18:11:47 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(784.907,-0.03329925,2704.116,0.03097628);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1041[11] = {
   455.8948,
   656.0632,
   884.3183,
   1127.644,
   1373.563,
   1620.325,
   1867.212,
   2116.298,
   2359.992,
   2607.574,
   2781.732};
   Double_t Graph0_fy1041[11] = {
   0.4043177,
   0.04448304,
   0.01424851,
   -0.002181747,
   0.01826559,
   8.073213e-05,
   -0.03384543,
   -0.01099232,
   -0.02946426,
   0.02427168,
   -0.01540734};
   Double_t Graph0_fex1041[11] = {
   0.1612216,
   0.1117597,
   0.07355508,
   0.06671218,
   0.06510647,
   0.07171005,
   0.08614684,
   0.1078021,
   0.1395437,
   0.1943605,
   0.3152937};
   Double_t Graph0_fey1041[11] = {
   0.2290152,
   0.05721632,
   0.02873383,
   0.02179643,
   0.01881272,
   0.01796141,
   0.01827726,
   0.01940058,
   0.02160097,
   0.02561198,
   0.09853815};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1041,Graph0_fy1041,Graph0_fex1041,Graph0_fey1041);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01041 = new TH1F("Graph_Graph01041","S12",100,223.1022,3014.678);
   Graph_Graph01041->SetMinimum(-0.02687169);
   Graph_Graph01041->SetMaximum(0.02454873);
   Graph_Graph01041->SetDirectory(0);
   Graph_Graph01041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01041->SetLineColor(ci);
   Graph_Graph01041->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01041->GetXaxis()->SetRange(28,82);
   Graph_Graph01041->GetXaxis()->CenterTitle(true);
   Graph_Graph01041->GetXaxis()->SetLabelFont(42);
   Graph_Graph01041->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01041->GetXaxis()->SetTitleFont(42);
   Graph_Graph01041->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01041->GetYaxis()->CenterTitle(true);
   Graph_Graph01041->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01041->GetYaxis()->SetLabelFont(42);
   Graph_Graph01041->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01041->GetYaxis()->SetTitleFont(42);
   Graph_Graph01041->GetZaxis()->SetLabelFont(42);
   Graph_Graph01041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01041);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
