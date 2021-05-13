void S12_EDM_c_vs_p_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 11:49:46 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-377.2,-3.600988,3394.8,0.6802386);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1075[14] = {
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
   Double_t Graph0_fy1075[14] = {
   -2.779686,
   -1.559144,
   -0.587565,
   -0.400137,
   -0.3211365,
   -0.2632785,
   -0.2031966,
   -0.1723264,
   -0.1550761,
   -0.1084759,
   -0.09686586,
   -0.09196543,
   -0.09432165,
   -0.05871385};
   Double_t Graph0_fex1075[14] = {
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
   Double_t Graph0_fey1075[14] = {
   0.107764,
   0.03856633,
   0.02893167,
   0.02523383,
   0.02278935,
   0.02087719,
   0.01946032,
   0.01831607,
   0.01764587,
   0.01722989,
   0.01694234,
   0.01704324,
   0.01764054,
   0.02541465};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1075,Graph0_fy1075,Graph0_fex1075,Graph0_fey1075);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01075 = new TH1F("Graph_Graph01075","S12",100,0,3280);
   Graph_Graph01075->SetMinimum(-3.172865);
   Graph_Graph01075->SetMaximum(0.2521159);
   Graph_Graph01075->SetDirectory(0);
   Graph_Graph01075->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01075->SetLineColor(ci);
   Graph_Graph01075->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01075->GetXaxis()->SetRange(1,92);
   Graph_Graph01075->GetXaxis()->CenterTitle(true);
   Graph_Graph01075->GetXaxis()->SetLabelFont(42);
   Graph_Graph01075->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01075->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01075->GetXaxis()->SetTitleFont(42);
   Graph_Graph01075->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01075->GetYaxis()->CenterTitle(true);
   Graph_Graph01075->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01075->GetYaxis()->SetLabelFont(42);
   Graph_Graph01075->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01075->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01075->GetYaxis()->SetTitleFont(42);
   Graph_Graph01075->GetZaxis()->SetLabelFont(42);
   Graph_Graph01075->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01075);
   
   gre->Draw("ap");
   
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
