void S12_Ag2_vs_p_Run-1a_250MeV_1000_2500MeV_noRand_earlyTimes_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:32:26 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(784.8754,-0.04465896,2704.488,0.06282909);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1041[11] = {
   455.8837,
   656.3917,
   884.7256,
   1127.855,
   1373.573,
   1620.405,
   1867.13,
   2116.335,
   2359.869,
   2607.381,
   2781.957};
   Double_t Graph0_fy1041[11] = {
   0.197496,
   0.1318456,
   -0.02024663,
   -0.02749951,
   0.04444644,
   -0.009915446,
   -0.04104745,
   -0.0001510581,
   -0.04240065,
   -0.0178792,
   -0.01959429};
   Double_t Graph0_fex1041[11] = {
   0.250912,
   0.1741267,
   0.1138766,
   0.1028564,
   0.09985582,
   0.109388,
   0.1309234,
   0.1631732,
   0.210272,
   0.2925254,
   0.4790207};
   Double_t Graph0_fey1041[11] = {
   0.3584482,
   0.08926727,
   0.04450221,
   0.03356046,
   0.02882702,
   0.02735822,
   0.02773337,
   0.02931125,
   0.03246655,
   0.03851697,
   0.1496726};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1041,Graph0_fy1041,Graph0_fex1041,Graph0_fey1041);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01041 = new TH1F("Graph_Graph01041","S12",100,222.9524,3015.116);
   Graph_Graph01041->SetMinimum(-0.03391016);
   Graph_Graph01041->SetMaximum(0.05208029);
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
