void S0_c_vs_p_thetaY_trackReco_AAR_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 17:39:45 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(7.732923,-1.637387,3232.835,6.709799);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1035[11] = {
   452.008,
   653.2053,
   880.0813,
   1123.171,
   1371.212,
   1620.822,
   1867.497,
   2116.578,
   2363.445,
   2614.991,
   2788.382};
   Double_t Graph0_fy1035[11] = {
   5.092166,
   0.1155049,
   -0.1705531,
   -0.2099161,
   -0.1103434,
   -0.1270042,
   -0.1153558,
   0.003406676,
   -0.01752131,
   0.04512215,
   0.04910688};
   Double_t Graph0_fex1035[11] = {
   0.2393631,
   0.2026096,
   0.1476681,
   0.1448015,
   0.1538361,
   0.1689038,
   0.194666,
   0.2363555,
   0.2952579,
   0.3714583,
   0.4169272};
   Double_t Graph0_fey1035[11] = {
   0.2264351,
   0.07638334,
   0.04404199,
   0.03627289,
   0.0330621,
   0.03144983,
   0.03113026,
   0.03239498,
   0.03415059,
   0.0362419,
   0.07538327};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1035,Graph0_fy1035,Graph0_fex1035,Graph0_fey1035);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01035 = new TH1F("Graph_Graph01035","S0_",100,218.0657,3022.502);
   Graph_Graph01035->SetMinimum(-0.802668);
   Graph_Graph01035->SetMaximum(5.87508);
   Graph_Graph01035->SetDirectory(0);
   Graph_Graph01035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01035->SetLineColor(ci);
   Graph_Graph01035->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01035->GetXaxis()->SetRange(5,96);
   Graph_Graph01035->GetXaxis()->CenterTitle(true);
   Graph_Graph01035->GetXaxis()->SetLabelFont(42);
   Graph_Graph01035->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01035->GetXaxis()->SetTitleFont(42);
   Graph_Graph01035->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01035->GetYaxis()->CenterTitle(true);
   Graph_Graph01035->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01035->GetYaxis()->SetLabelFont(42);
   Graph_Graph01035->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01035->GetYaxis()->SetTitleFont(42);
   Graph_Graph01035->GetZaxis()->SetLabelFont(42);
   Graph_Graph01035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01035);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
