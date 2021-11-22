void S18_Momentum_Y_RMS_vs_p_trackReco_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:19:11 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-336.1523,3.420745,3334.476,26.54556);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1071[12] = {
   172.9297,
   432.8647,
   628.4978,
   873.0147,
   1121.804,
   1371.324,
   1620.193,
   1868.223,
   2115.655,
   2363.493,
   2614.65,
   2825.258};
   Double_t Graph0_fy1071[12] = {
   7.422269,
   14.46154,
   17.31298,
   19.85353,
   21.52747,
   22.4034,
   22.66009,
   22.37035,
   21.65797,
   20.07327,
   17.203,
   13.5708};
   Double_t Graph0_fex1071[12] = {
   1.275515,
   0.1209802,
   0.1087106,
   0.1092648,
   0.1173546,
   0.1272627,
   0.1404312,
   0.1620366,
   0.195341,
   0.2531342,
   0.3251753,
   0.397035};
   Double_t Graph0_fey1071[12] = {
   0.147388,
   0.02587779,
   0.01866551,
   0.0213307,
   0.02479962,
   0.02803875,
   0.03133208,
   0.0357477,
   0.04180825,
   0.05030406,
   0.05550221,
   0.07348137};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1071,Graph0_fy1071,Graph0_fex1071,Graph0_fey1071);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01071 = new TH1F("Graph_Graph01071","S18_",100,0,3091.056);
   Graph_Graph01071->SetMinimum(5.733227);
   Graph_Graph01071->SetMaximum(24.23308);
   Graph_Graph01071->SetDirectory(0);
   Graph_Graph01071->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01071->SetLineColor(ci);
   Graph_Graph01071->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01071->GetXaxis()->SetRange(2,96);
   Graph_Graph01071->GetXaxis()->CenterTitle(true);
   Graph_Graph01071->GetXaxis()->SetLabelFont(42);
   Graph_Graph01071->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01071->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01071->GetXaxis()->SetTitleFont(42);
   Graph_Graph01071->GetYaxis()->CenterTitle(true);
   Graph_Graph01071->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01071->GetYaxis()->SetLabelFont(42);
   Graph_Graph01071->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01071->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01071->GetYaxis()->SetTitleFont(42);
   Graph_Graph01071->GetZaxis()->SetLabelFont(42);
   Graph_Graph01071->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01071);
   
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
