void S0_Ag2_vs_p_trackReco_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:33:53 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.5093,-0.9776926,2742.058,0.7556683);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1027[11] = {
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
   Double_t Graph0_fy1027[11] = {
   -0.3698246,
   0.1733751,
   0.3252505,
   0.1415787,
   0.1008328,
   0.1271472,
   0.225957,
   0.1546209,
   0.1786522,
   0.1038187,
   0.3598044};
   Double_t Graph0_fex1027[11] = {
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
   Double_t Graph0_fey1027[11] = {
   0.3189745,
   0.1080875,
   0.06228907,
   0.05137707,
   0.04685722,
   0.04445826,
   0.04390782,
   0.04594525,
   0.04847879,
   0.05150821,
   0.1069704};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1027,Graph0_fy1027,Graph0_fex1027,Graph0_fey1027);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01027 = new TH1F("Graph_Graph01027","S0_",100,218.0657,3022.502);
   Graph_Graph01027->SetMinimum(-0.8043565);
   Graph_Graph01027->SetMaximum(0.5823322);
   Graph_Graph01027->SetDirectory(0);
   Graph_Graph01027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01027->SetLineColor(ci);
   Graph_Graph01027->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01027->GetXaxis()->SetRange(19,82);
   Graph_Graph01027->GetXaxis()->CenterTitle(true);
   Graph_Graph01027->GetXaxis()->SetLabelFont(42);
   Graph_Graph01027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01027->GetXaxis()->SetTitleFont(42);
   Graph_Graph01027->GetYaxis()->SetTitle("A_{g#minus2} [mrad]");
   Graph_Graph01027->GetYaxis()->CenterTitle(true);
   Graph_Graph01027->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01027->GetYaxis()->SetLabelFont(42);
   Graph_Graph01027->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01027->GetYaxis()->SetTitleFont(42);
   Graph_Graph01027->GetZaxis()->SetLabelFont(42);
   Graph_Graph01027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01027);
   
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
