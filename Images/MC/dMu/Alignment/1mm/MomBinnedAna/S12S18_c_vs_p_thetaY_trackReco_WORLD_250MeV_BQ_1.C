void S12S18_c_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:51:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.6841,-0.2933166,3407.769,0.1584339);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1168[11] = {
   451.7306,
   653.0293,
   880.2377,
   1123.173,
   1370.874,
   1619.772,
   1866.644,
   2114.45,
   2362.788,
   2613.838,
   2788.194};
   Double_t Graph0_fy1168[11] = {
   -0.06799711,
   0.02036207,
   0.09445993,
   0.03818168,
   0.02745688,
   0.04847577,
   0.02042208,
   0.04016002,
   0.02365319,
   0.008077716,
   0.01619097};
   Double_t Graph0_fex1168[11] = {
   0.1368425,
   0.1165268,
   0.08467203,
   0.08307226,
   0.08894359,
   0.09893527,
   0.1159263,
   0.1464981,
   0.1927436,
   0.2339641,
   0.2969636};
   Double_t Graph0_fey1168[11] = {
   0.1287367,
   0.04350143,
   0.02510849,
   0.02069519,
   0.01910415,
   0.0183337,
   0.01859657,
   0.0201039,
   0.02242013,
   0.02308429,
   0.05644463};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1168,Graph0_fy1168,Graph0_fex1168,Graph0_fey1168);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01168 = new TH1F("Graph_Graph01168","S12S18_",100,217.904,3022.181);
   Graph_Graph01168->SetMinimum(-0.2481416);
   Graph_Graph01168->SetMaximum(0.1132589);
   Graph_Graph01168->SetDirectory(0);
   Graph_Graph01168->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01168->SetLineColor(ci);
   Graph_Graph01168->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01168->GetXaxis()->SetRange(0,101);
   Graph_Graph01168->GetXaxis()->CenterTitle(true);
   Graph_Graph01168->GetXaxis()->SetLabelFont(42);
   Graph_Graph01168->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01168->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01168->GetXaxis()->SetTitleFont(42);
   Graph_Graph01168->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01168->GetYaxis()->CenterTitle(true);
   Graph_Graph01168->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01168->GetYaxis()->SetLabelFont(42);
   Graph_Graph01168->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01168->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01168->GetYaxis()->SetTitleFont(42);
   Graph_Graph01168->GetZaxis()->SetLabelFont(42);
   Graph_Graph01168->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01168->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01168);
   
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
