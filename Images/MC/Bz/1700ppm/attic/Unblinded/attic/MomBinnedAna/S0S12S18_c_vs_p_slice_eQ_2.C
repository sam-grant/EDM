void S0S12S18_c_vs_p_slice_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 12:22:36 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-410,-0.1183544,3690,0.2473663);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1165[14] = {
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
   Double_t Graph0_fy1165[14] = {
   0.09672882,
   0.009364974,
   0.01063383,
   0.02213494,
   -0.03412322,
   0.02222232,
   -0.03397045,
   -0.04243458,
   0.01584269,
   -0.01095097,
   0.01577493,
   0.006355279,
   -0.0141326,
   -0.03476403};
   Double_t Graph0_fex1165[14] = {
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
   Double_t Graph0_fey1165[14] = {
   0.08968401,
   0.03146732,
   0.02360895,
   0.0205585,
   0.01858597,
   0.01706719,
   0.01587697,
   0.01496639,
   0.01440606,
   0.01403749,
   0.01382224,
   0.01388122,
   0.01445141,
   0.02076017};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1165,Graph0_fy1165,Graph0_fex1165,Graph0_fey1165);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01165 = new TH1F("Graph_Graph01165","S0S12S18",100,0,3280);
   Graph_Graph01165->SetMinimum(-0.08178235);
   Graph_Graph01165->SetMaximum(0.2107942);
   Graph_Graph01165->SetDirectory(0);
   Graph_Graph01165->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01165->SetLineColor(ci);
   Graph_Graph01165->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01165->GetXaxis()->CenterTitle(true);
   Graph_Graph01165->GetXaxis()->SetLabelFont(42);
   Graph_Graph01165->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01165->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01165->GetXaxis()->SetTitleFont(42);
   Graph_Graph01165->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01165->GetYaxis()->CenterTitle(true);
   Graph_Graph01165->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01165->GetYaxis()->SetLabelFont(42);
   Graph_Graph01165->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01165->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01165->GetYaxis()->SetTitleFont(42);
   Graph_Graph01165->GetZaxis()->SetLabelFont(42);
   Graph_Graph01165->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01165->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01165);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
