void S12S18_Momentum_Y_RMS_vs_p_trackRecoControl_AAR_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 17:37:26 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(8.435734,11.28225,3235.201,24.7129);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1085[11] = {
   452.9018,
   656.5648,
   884.8504,
   1123.532,
   1363.582,
   1601.356,
   1825.111,
   2101.291,
   2411.99,
   2637.273,
   2790.578};
   Double_t Graph0_fy1085[11] = {
   14.99869,
   17.03348,
   18.72616,
   20.11967,
   20.82607,
   20.6821,
   19.87873,
   22.13182,
   19.7147,
   16.29309,
   13.63117};
   Double_t Graph0_fex1085[11] = {
   0.2012648,
   0.1496433,
   0.1002818,
   0.09219183,
   0.1062442,
   0.1510616,
   0.3149928,
   1.812684,
   0.7390367,
   0.4036753,
   0.3580082};
   Double_t Graph0_fey1085[11] = {
   0.06503369,
   0.02659488,
   0.01868933,
   0.01828423,
   0.02199102,
   0.03223334,
   0.07367547,
   0.3426454,
   0.1570108,
   0.0680713,
   0.1104762};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1085,Graph0_fy1085,Graph0_fex1085,Graph0_fey1085);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01085 = new TH1F("Graph_Graph01085","S12S18_",100,218.877,3024.76);
   Graph_Graph01085->SetMinimum(12.62532);
   Graph_Graph01085->SetMaximum(23.36984);
   Graph_Graph01085->SetDirectory(0);
   Graph_Graph01085->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01085->SetLineColor(ci);
   Graph_Graph01085->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01085->GetXaxis()->SetRange(5,96);
   Graph_Graph01085->GetXaxis()->CenterTitle(true);
   Graph_Graph01085->GetXaxis()->SetLabelFont(42);
   Graph_Graph01085->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01085->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01085->GetXaxis()->SetTitleFont(42);
   Graph_Graph01085->GetYaxis()->CenterTitle(true);
   Graph_Graph01085->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01085->GetYaxis()->SetLabelFont(42);
   Graph_Graph01085->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01085->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01085->GetYaxis()->SetTitleFont(42);
   Graph_Graph01085->GetZaxis()->SetLabelFont(42);
   Graph_Graph01085->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01085);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
