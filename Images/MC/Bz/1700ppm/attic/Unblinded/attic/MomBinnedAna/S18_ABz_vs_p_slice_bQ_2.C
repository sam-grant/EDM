void S18_ABz_vs_p_slice_bQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 10:23:23 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-410,-1.120658,3690,1.279729);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1148[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1148[14] = {
   0.07953541,
   0.08527743,
   0.07941135,
   0.1464754,
   0.1704021,
   0.1454765,
   0.124436,
   0.1530387,
   0.1539566,
   0.162858,
   0.1898209,
   0.07799905,
   0.002170744,
   -0.1845964};
   Double_t Graph0_fex1148[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1148[14] = {
   0.8001291,
   0.150755,
   0.07519927,
   0.05264541,
   0.04510752,
   0.04190288,
   0.04014523,
   0.03940554,
   0.04054904,
   0.04251978,
   0.04658568,
   0.04919843,
   0.05274196,
   0.1658278};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1148,Graph0_fy1148,Graph0_fex1148,Graph0_fey1148);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01148 = new TH1F("Graph_Graph01148","S18",100,0,3280);
   Graph_Graph01148->SetMinimum(-0.8806195);
   Graph_Graph01148->SetMaximum(1.03969);
   Graph_Graph01148->SetDirectory(0);
   Graph_Graph01148->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01148->SetLineColor(ci);
   Graph_Graph01148->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01148->GetXaxis()->CenterTitle(true);
   Graph_Graph01148->GetXaxis()->SetLabelFont(42);
   Graph_Graph01148->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01148->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01148->GetXaxis()->SetTitleFont(42);
   Graph_Graph01148->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01148->GetYaxis()->CenterTitle(true);
   Graph_Graph01148->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01148->GetYaxis()->SetLabelFont(42);
   Graph_Graph01148->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01148->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01148->GetYaxis()->SetTitleFont(42);
   Graph_Graph01148->GetZaxis()->SetLabelFont(42);
   Graph_Graph01148->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01148->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01148);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
