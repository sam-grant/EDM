void S12_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.0_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:32:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4182,-1.700345,3406.946,0.6305075);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1096[11] = {
   451.9295,
   653.2541,
   880.1027,
   1123.321,
   1371.175,
   1620.3,
   1867.055,
   2114.96,
   2362.495,
   2614.658,
   2787.332};
   Double_t Graph0_fy1096[11] = {
   -0.6282564,
   -0.188416,
   0.09137381,
   0.05700228,
   0.1221313,
   0.03806537,
   0.06804402,
   -0.02020094,
   -0.02406014,
   0.02571267,
   0.112849};
   Double_t Graph0_fex1096[11] = {
   0.2585753,
   0.2175793,
   0.1578323,
   0.1544094,
   0.1642786,
   0.1821068,
   0.2117136,
   0.2648624,
   0.3434608,
   0.4240096,
   0.523915};
   Double_t Graph0_fey1096[11] = {
   0.3424544,
   0.1156849,
   0.06634764,
   0.05448008,
   0.0499036,
   0.04753981,
   0.04814322,
   0.05118279,
   0.05654601,
   0.05912368,
   0.1389245};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1096,Graph0_fy1096,Graph0_fex1096,Graph0_fey1096);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01096 = new TH1F("Graph_Graph01096","S12_",100,218.0524,3021.475);
   Graph_Graph01096->SetMinimum(-1.46726);
   Graph_Graph01096->SetMaximum(0.3974222);
   Graph_Graph01096->SetDirectory(0);
   Graph_Graph01096->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01096->SetLineColor(ci);
   Graph_Graph01096->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01096->GetXaxis()->SetRange(0,101);
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
