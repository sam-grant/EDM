void S18_ABz_vs_p_sym_vertCorr_eQ_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:13:25 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.2500001,-0.1046197,7.25,0.3635005);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1304[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t Graph0_fy1304[6] = {
   0.1643662,
   0.1716553,
   0.1828697,
   0.1682677,
   0.2186118,
   0.08699089};
   Double_t Graph0_fex1304[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1304[6] = {
   0.04671805,
   0.04701865,
   0.04910484,
   0.05424054,
   0.06686867,
   0.1135906};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1304,Graph0_fy1304,Graph0_fex1304,Graph0_fey1304);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01304 = new TH1F("Graph_Graph01304","S18",100,0.5,6.5);
   Graph_Graph01304->SetMinimum(-0.05780768);
   Graph_Graph01304->SetMaximum(0.3166885);
   Graph_Graph01304->SetDirectory(0);
   Graph_Graph01304->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01304->SetLineColor(ci);
   Graph_Graph01304->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_Graph01304->GetXaxis()->CenterTitle(true);
   Graph_Graph01304->GetXaxis()->SetLabelFont(42);
   Graph_Graph01304->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01304->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01304->GetXaxis()->SetTitleFont(42);
   Graph_Graph01304->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01304->GetYaxis()->CenterTitle(true);
   Graph_Graph01304->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01304->GetYaxis()->SetLabelFont(42);
   Graph_Graph01304->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01304->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01304->GetYaxis()->SetTitleFont(42);
   Graph_Graph01304->GetZaxis()->SetLabelFont(42);
   Graph_Graph01304->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01304->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01304);
   
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
